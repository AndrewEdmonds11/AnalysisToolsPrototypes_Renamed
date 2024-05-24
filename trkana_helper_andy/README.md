# Prototypes TrkAna helper programs

## Introduction
The analysis tools survey showed that we need useful documentation of any ntuples we produce. The prototypes built here show a way in which we can enhance TrkAna InfoStructs so that help is avialable either on the command line or within a python environment.

Note that these prototypes can only provied help on the EventInfo branch (all leaves) and the TrkInfo branch (```status```, ```nhits```, and ```nactive``` leaves). Further work would be needed to convert all branches.

## Setup

To set up and build the prototypes:

```
cd /to/trkana_helper_andy/
mu2einit
muse backing SimJob MDC2020ae
git clone https://github.com/AndrewEdmonds11/TrkAna.git
cd TrkAna
git checkout new-info-structs
cd ../
muse setup
muse build -j4 --mu2eCompactPrint --mu2ePyWrap
```

Then on subsequent logins:

```
cd /to/trkana_helper_andy/
mu2einit
muse setup
```

## trkanahelp program
A command line program can allow for branch and leaf definitions to be available quite easily

> trkanahelp

      trkanahelp [OPTIONS] BRANCH.LEAF [BRANCH.LEAF2 ... ]

 Get help with trkana.

 Command line options:
  -h print this help message

 Examples:
  trkanahelp evtinfo.nprotons evtinfo.run

> trkanahelp evtinfo.nprotons evtinfo.run dem.nactive
evtinfo.nprotons: estimated number of protons-on-target (POT)
evtinfo.run: art run number
nactive = total number of used hits on the track
```

## python interface

From the python command line:

```
Python 3.9.15 (main, Feb  8 2023, 11:36:31)
[GCC 4.8.5 20150623 (Red Hat 4.8.5-44)] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import InfoStructs
>>> evtinfo = InfoStructs.EventInfo()
>>> evtinfo.help("nprotons")
evtinfo.nprotons: estimated number of protons-on-target (POT)
>>> trkinfo = InfoStructs.TrkInfo()
>>> trkinfo.help("nactive")
nactive = total number of used hits on the track
```

You should also be able to to this in a python notebook too!

## Comments
If we want to go this way, then we might want to consider splitting the InfoStructs into their own repository since they shouldn't be dependent on art etc.

We will also need to update all InfoStructs to provide the useful information.
