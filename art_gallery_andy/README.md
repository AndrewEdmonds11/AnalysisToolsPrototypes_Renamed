# Prototype using Gallery to read Art files

## What It Does
This ROOT macro makes a simple histogram of the reconstructed momentum at the tracker entrance for downstream electron tracks

## How to Run

```
source setup.sh
root -l art_gallery_prototype_macro.C\(\"/path/to/art/file\"\)
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
* Make it a compiled program rather than a ROOT macro?
* Add a simple configuration interface?
