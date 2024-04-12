# Prototype using Gallery to read Art files

## What It Does
There are two prototypes: a ROOT macro and a compiled program. They both make s simple histogram of the reconstructed momentum at the tracker entrance for downstream electron tracks

## How to Run

### The ROOT Macro
```
source setup.sh
root -l art_gallery_prototype_macro.C\(\"/path/to/art/file\"\)
```

### The Compiled Program
```
source setup.sh
mkdir build/
cd build/
cmake ../
make
./art_gallery_prototype /path/to/art/file
```

## Pros and Cons

Andy's Pros:
 * can access everything in the Event
 * no art module overhead

Andy's Cons:
 * no access to SubRun- or Run-level data products
 * need to know details of full data products
 * no configuration interface to e.g. have user choose histogram limits etc.

## Next Steps
* Make histograms with time cuts
* Make it read multiple files?
* Add a simple configuration interface?

## Other notes

| commit hash | script | notes | time per event [ms] | total time [ms] |
|----|----|----|-----|-----|
| 5bff4d2 | art_gallery_prototype_macro.C | one file: mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.001210_00000255.art | 0.0353 | 5742 |
| c2e809c | art_gallery_prototype_macro.C | as above but with start_time defined before histogram making | 0.0367 | 6032 |
