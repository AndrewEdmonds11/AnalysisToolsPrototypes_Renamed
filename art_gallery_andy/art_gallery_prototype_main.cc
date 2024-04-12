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

int main(int argc, char** argv) {

  auto start_time = system_clock::now();

  if (argc != 3) {
    std::cout << "Missing arguments. They should be filelist and number of files" << std::endl;
    return -1;
  }

  std::string filelist = *(argv+1);
  InputTag dem_tag{ "KKDeM" };

  int n_files = stoi(*(argv+2));
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
  double min_mom = 95;
  double max_mom = 110;
  double mom_bin_width = 0.5;
  int n_mom_bins = (max_mom - min_mom) / mom_bin_width;
  TH1D h_RecoMom("h_RecoMom", "Reconstructed Momentum", n_mom_bins,min_mom,max_mom);

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
            h_RecoMom.Fill(kinter.momentum3().R());
          }
        }
      }
    }

    times.push_back(duration_cast<microseconds>(system_clock::now() - t0));
  }

  TFile outfile("main_output.root", "RECREATE");
  h_RecoMom.Write();
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
