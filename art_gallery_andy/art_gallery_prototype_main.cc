//
// taking art_gallery_prototype_macro.C and turning into a compiled program
//

#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <fstream>

#include "nlohmann/json.hpp"

#include "canvas/Utilities/InputTag.h"
#include "gallery/Event.h"

#include "TFile.h"
#include "TH1F.h"
#include "TInterpreter.h"
#include "TROOT.h"

#include "Offline/RecoDataProducts/inc/KalSeed.hh"

using namespace art;
using namespace std;
using namespace std::chrono;
using json = nlohmann::json;

int main(int argc, char** argv) {

  auto start_time = system_clock::now();

  if (argc != 4) {
    std::cout << "Missing arguments. They should be JSON configuration file, filelist and number of files" << std::endl;
    return -1;
  }

  std::string json_filename = *(argv+1);
  std::ifstream json_file(json_filename.c_str());
  json config = json::parse(json_file);
  std::cout << config["hists"] << std::endl;

  std::string filelist = *(argv+2);
  InputTag dem_tag{ "KKDeM" };

  int n_files = stoi(*(argv+3));
  vector<string> filenames;
  filenames.reserve(n_files); // set to number of files (the number of files in the dataset)
  std::ifstream input_filelist(filelist);
  if (input_filelist.is_open()) {
    std::string filename;
    while(std::getline(input_filelist,filename)) {
      filenames.emplace_back(filename);
      if (filenames.size()>=n_files) {
        break;
      }
    }
    input_filelist.close();
  }


  // Make histogram
  const auto& allHistsCfg = config["hists"];
  std::vector<TH1D> allHists;
  for (const auto& hist_cfg : allHistsCfg) {
    double min_mom = hist_cfg["min_x"];
    double max_mom = hist_cfg["max_x"];
    double bin_width = hist_cfg["bin_width"];
    int n_mom_bins = (max_mom - min_mom) / bin_width;
    std::string histname = hist_cfg["name"];
    std::string histtitle = hist_cfg["title"];
    allHists.emplace_back(TH1D(histname.c_str(), histtitle.c_str(), n_mom_bins,min_mom,max_mom));
  }

  // We'll record the time it takes to process each gallery::Event.
  vector<microseconds> times;

  for (gallery::Event ev(filenames); !ev.atEnd(); ev.next()) {
    auto const t0 = system_clock::now();

    auto const& dems =
      *ev.getValidHandle<vector<mu2e::KalSeed>>(dem_tag);
    if (!dems.empty()) {
      for (const auto& dem : dems) {
        for(size_t ikinter = 0; ikinter < dem.intersections().size(); ++ikinter){
          auto const& kinter = dem.intersections()[ikinter];
          if (kinter.surfaceId() == mu2e::SurfaceIdDetail::TT_Front) {
            for (size_t i_hist = 0; i_hist < allHists.size(); ++i_hist) {
              auto& hist = allHists.at(i_hist);
              const auto& hist_cfg = allHistsCfg.at(i_hist);

              if (hist_cfg["variable"] == "momentum") { // FIXME: a better way here?
                if (kinter.time() > hist_cfg["time_cut"]) {
                  hist.Fill(kinter.momentum3().R());
                }
              }
              else if (hist_cfg["variable"] == "time") { // FIXME: a better way here?
                hist.Fill(kinter.time());
              }
            }
          }
        }
      }
    }

    times.push_back(duration_cast<microseconds>(system_clock::now() - t0));
  }

  TFile outfile("main_output.root", "RECREATE");
  for (auto& hist : allHists) {
    hist.Write();
  }
  outfile.Close();


  auto const elapsed_time =
    duration_cast<milliseconds>(system_clock::now() - start_time);
  auto const sum_times = accumulate(begin(times), end(times), microseconds(0));

  cout << "Processed " << times.size() << " events in an average of "
       << sum_times.count() / times.size() << " microseconds/event\n";
  cout << "Total processing time (including file opening, but not macro "
          "compilation) was "
       << elapsed_time.count() << " milliseconds\n";

  return 0;
}
