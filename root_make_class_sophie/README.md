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

current error:
```
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: deptrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: uemtrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: ueptrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: dmmtrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: dmptrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: ummtrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Error in <TTreePlayer::MakeClass>: The branch named result (full path name: umptrkqual.result) is hidden by another branch of the same name and its data will not be loaded.
Info in <TTreePlayer::MakeClass>: Files: trkana.h and trkana.C generated from TTree: trkana

```
Two files will be created:

* trkana.h
* trkana.C

However when I try to use these classes in a macro there is a seg fault:

```
root [0] .L /exp/mu2e/app/users/sophie/ProductionEnsembles_v2/AnalysisToolsPrototypes/root_make_class_sophie/example_use.C+
root [1] plot()
```
