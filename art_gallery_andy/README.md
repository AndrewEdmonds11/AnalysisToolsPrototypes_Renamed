# Prototype using Gallery to read Art files

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
