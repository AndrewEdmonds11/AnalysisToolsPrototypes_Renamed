//
//
//
// based on gallery-demo/demo.C by M. Paterno (https://github.com/marcpaterno/gallery-demo/blob/edb921c5bc3db7c33dbbbc3b48d36fe7403b8021/demo.C)
// (his original comments left in)
//

#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

#include "canvas/Utilities/InputTag.h"
#include "gallery/Event.h"

#include "TFile.h"
#include "TH1F.h"
#include "TInterpreter.h"
#include "TROOT.h"

using namespace art;
using namespace std;
using namespace std::chrono;

void
art_gallery_prototype_macro(std::string const& filename)
{
  InputTag dem_tag{ "KKDeM" };
  // Create a vector of length 1, containing the given filename.
  vector<string> filenames(1, filename);

  // Don't do the following in compiled C++. This code relies on the
  // interactive ROOT system to (implicitly) own the histograms we
  // create on the heap. In a C++ program, this object would be leaked
  // (the memory unrecoverable by the program).
  double min_mom = 95;
  double max_mom = 110;
  double mom_bin_width = 0.5;
  int n_mom_bins = (max_mom - min_mom) / mom_bin_width;
  TH1D* h_RecoMom = new TH1D("h_RecoMom", "Reconstructed Momentum", n_mom_bins,min_mom,max_mom);

  auto start_time = system_clock::now();
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
            h_RecoMom->Fill(kinter.momentum3().R());
          }
        }
      }
    }

    times.push_back(duration_cast<microseconds>(system_clock::now() - t0));
  }
  auto const elapsed_time =
    duration_cast<milliseconds>(system_clock::now() - start_time);
  auto const sum_times = accumulate(begin(times), end(times), microseconds(0));

  cout << "Processed " << times.size() << " events in an average of "
       << sum_times.count() / times.size() << " microseconds/event\n";
  cout << "Total processing time (including file opening, but not macro "
          "compilation) was "
       << elapsed_time.count() << " milliseconds\n";
}
