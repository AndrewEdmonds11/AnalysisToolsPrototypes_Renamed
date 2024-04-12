# Prototype using Gallery to read Art files

## What It Does
There are two prototypes: a ROOT macro and a compiled program. They both take as arguments:
 * a text file containing a list of files, and
 * the number of files to run over

and make a simple histogram of the reconstructed momentum at the tracker entrance for downstream electron tracks.

## How to Run

### The ROOT Macro
```
source setup.sh
root -l 'art_gallery_prototype_macro.C("../filelists/mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.art.list", n_files_to_read)'
```

### The Compiled Program
```
source setup.sh
mkdir build/
cd build/
cmake ../
make
./art_gallery_prototype ../../filelists/mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.art.list 2
```

## Pros and Cons

Andy's Pros:
 * can access everything in the Event
 * no art module overhead

Andy's Cons:
 * no access to SubRun- or Run-level data products
 * need to know details of full data products
   * e.g. for compiled program, need to know location of the Mu2e header files
 * will need to build our own configuration interface to e.g. have user choose histogram limits, cuts etc.

## Next Steps
* Make histograms with time cuts
* Add a simple configuration interface?
* For compiled program:
  * make argument parsing safer

## Other notes

| commit hash | script | notes | time per event [ms] | total time [ms] | comment |
|----|----|----|-----|-----|
| 5bff4d2 | art_gallery_prototype_macro.C | one file: mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.001210_00000255.art | 0.353 | 5742 | |
| c2e809c | art_gallery_prototype_macro.C | as above but with start_time defined before histogram making | 0.367 | 6032 | |
| e5e9d64 | art_gallery_prototype_main | one file: mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.001210_00000255.art | 0.366 | 6615 | |
| b29b4ce | art_gallery_prototype_macro.C | added writing of output file | 0.370 | 6133 | |
|  | art_gallery_prototype_main | as above | 0.375 | 6800 | |
| dd2728c |  | can now run over a list of files | | | |
|   | art_gallery_prototype_main | 1 file | 0.369 | 6706 | |
|   | art_gallery_prototype_main | 2 files | 0.364 | 11939 | |
|   | art_gallery_prototype_main | 10 files | 1.304 | 192561 | unclear why time per event has changed... |
|   | art_gallery_prototype_macro.C | 1 file | 0.372 | 5990 | |
|   | art_gallery_prototype_macro.C | 2 files | 0.370 | 11527 | |
|   | art_gallery_prototype_macro.C | 10 files | 1.332 |191143  | macro also sees an increase in the time per event... |

