# AnalysisToolsPrototypes
We can use this repository to prototype a bunch of ntuples and interfaces.

## Setting Up

To set up a local copy of the repository:

```
git clone git@github.com:AndrewEdmonds11/AnalysisToolsPrototypes
cd AnalysisToolsPrototypes
```

Then you can make your own folder with:

```
mkdir ntuple_interface_name
```

where ```ntuple``` is the kind of ntuple you are running on (e.g. ```art```, ```skim```, ```trkana```, ```stn```, ...), ```interface``` is the kind of interface you are prototyping (e.g.  ```root```, ```python```, ```offline```, ```gallery```, ...), and ```name``` is your name. Don't feel restricted to the examples listed here: if you have a better name for the directory - go for it!

You can also make a list of files to run on:

```
setup mu2e
setup mu2efiletools
mkdir filelists
mu2eDatasetFileList mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.art > filelists/mcs.mu2e.CeEndpointMix1BBSignal.Tutorial_2024_03.art.list
```

## Committing and Pushing

Once you are ready to commit and push your prototype, you can do:

```
git pull # to pull in any changes other people have pushed
git add file1 file2 etc
git commit -m "Some useful message"
git push
```

If you get an error when you git push, then let me know your GitHub username so I can give you push access. Don't hesititate to push little and often!

## Documentation
Don't forget to add a README.md to your directory with instructions on how to run your code. You can also use this space to outline any pros/cons you see or anything else you want to document.

## Overall Goals
Here are a couple of simple ideas to start with. Feel free to add more!

1. Make a histogram of the reconstructed momentum of downstream electron tracks
1. Make multiple histograms of the reconstructed momentum of downstream electron tracks with each histogram having a different time cut (e.g. t>400, t>500, t>600, t>700 etc.)


