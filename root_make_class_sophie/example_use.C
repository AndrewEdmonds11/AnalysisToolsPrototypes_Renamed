#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TH1.h"

#include <iostream>
#include <fstream>

#include "trkana.h"
#include "trkana.C"
using namespace std;

void plot(){

  //float nhits;
  //TH1F *hits = new TH1F("hits", "hits", 100, 0, 100);
  //ta->SetBranchAddress("dem.nhits", &nhits);
  trkana* ta;
  int Nevts = (int)ta->fChain->GetEntries();
  std::cout << "Sample has Total number of events: " << Nevts << std::endl;
  
  // event loop
  for(unsigned int n=0; n<Nevts; n++)
  {
    ta->GetEntry(n);
    //hits->Fill(nhits);
  }
}
