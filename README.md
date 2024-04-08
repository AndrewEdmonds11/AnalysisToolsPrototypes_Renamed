# AnalysisToolsPrototypes
We can use this repository to prototype a bunch of ntuples and interfaces.

## Setting Up

To set up a local copy of your repository:

```
git clone git@github.com:AndrewEdmonds11/AnalysisToolsPrototypes
cd AnalysisToolsPrototypes
```

Then you can make your own folder with:

```
mkdir ntuple_interface_name
```

where ```ntuple``` is the kind of ntuple you are running on (e.g. ```art```, ```skim```, ```trkana```, ```stn```, ...), ```interface``` is the kind of interface you are prototyping (e.g.  ```root```, ```python```, ```offline```, ```gallery```, ...), and ```name``` is your name. Don't feel restricted to the examples listed here: if you have a better name for the directory - go for it!

Once you are ready to commit and push your prototype, you can do:

```
git add file1 file2 etc
git commit -m "Some useful message"
git push
```

Don't forget to add a README.md to your directory with instructions on how to run your code. You can also use this space to outline any pros/cons you see, and your next steps. If you get an error when you git push, then let me know your GitHub username so I can give you push access. Don't hesititate to push little and often!

You can pull in other people's prototypes with:

```
git pull
```
