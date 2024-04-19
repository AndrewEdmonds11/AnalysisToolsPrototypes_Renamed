# Introduction

MakeClass is a way of turning a TTree object into its own class which can then be used in an event loop

# To make MakeClass

```
root [0] TFile* f = new TFile("/exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root")
root [1] f->ls()
TFile**         /exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root
 TFile*         /exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root
  KEY: TDirectoryFile   TrkAna;1        TrkAna (TrkAnaTreeMaker) folder
  KEY: TDirectoryFile   genCountLogger;1        genCountLogger (GenEventCountReader) folder
root [2] TTree *trkanaTree
(TTree *) nullptr
root [3] f->GetObject("TrkAna/trkana",trkanaTree)
root [4] trkanaTree->MakeClass("trkana")
```
Two files will be created:

* trkana.hh
* trkana.cc
