//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr 19 10:04:36 2024 by ROOT version 6.28/10
// from TTree trkana/track analysis
// found on file: /exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root
//////////////////////////////////////////////////////////

#ifndef trkana_h
#define trkana_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "Math/GenVector/Cartesian3D.h"
#include "Offline/MCDataProducts/inc/MCRelationship.hh"

class trkana {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxevtinfo = 1;
   static constexpr Int_t kMaxevtinfomc = 1;
   static constexpr Int_t kMaxhcnt = 1;
   static constexpr Int_t kMaxdem = 2;
   static constexpr Int_t kMaxdemtch = 2;
   static constexpr Int_t kMaxdemmc = 2;
   static constexpr Int_t kMaxdemtchmc = 2;
   static constexpr Int_t kMaxdemmcssi_protonabsorber = 2;
   static constexpr Int_t kMaxdemmcssi_stoppingtarget = 2;
   static constexpr Int_t kMaxdep = 1;
   static constexpr Int_t kMaxdeptch = 1;
   static constexpr Int_t kMaxdepmc = 1;
   static constexpr Int_t kMaxdeptchmc = 1;
   static constexpr Int_t kMaxdepmcssi_protonabsorber = 1;
   static constexpr Int_t kMaxdepmcssi_stoppingtarget = 1;
   static constexpr Int_t kMaxuem = 1;
   static constexpr Int_t kMaxuemtch = 1;
   static constexpr Int_t kMaxuep = 1;
   static constexpr Int_t kMaxueptch = 1;
   static constexpr Int_t kMaxdmm = 2;
   static constexpr Int_t kMaxdmmtch = 2;
   static constexpr Int_t kMaxdmp = 1;
   static constexpr Int_t kMaxdmptch = 1;
   static constexpr Int_t kMaxumm = 1;
   static constexpr Int_t kMaxummtch = 1;
   static constexpr Int_t kMaxump = 1;
   static constexpr Int_t kMaxumptch = 1;
   static constexpr Int_t kMaxcrvsummary = 1;
   static constexpr Int_t kMaxcrvcoincs = 1;
   static constexpr Int_t kMaxcrvsummarymc = 1;
   static constexpr Int_t kMaxcrvcoincsmc = 1;
   static constexpr Int_t kMaxcrvcoincsmcplane = 1;

   // Declaration of leaf types
 //mu2e::EventInfo *evtinfo_;
   Int_t           evtinfo_event;
   Int_t           evtinfo_run;
   Int_t           evtinfo_subrun;
   Int_t           evtinfo_nprotons;
   Float_t         evtinfo_pbtime;
   Float_t         evtinfo_pbterr;
 //mu2e::EventInfoMC *evtinfomc_;
   Int_t           evtinfomc_nprotons;
   Float_t         evtinfomc_pbtime;
 //mu2e::HitCount  *hcnt_;
   Int_t           hcnt_nsd;
   Int_t           hcnt_nesel;
   Int_t           hcnt_nrsel;
   Int_t           hcnt_ntsel;
   Int_t           hcnt_nbkg;
   Int_t           tcnt_ndem;
   Int_t           tcnt_ndep;
   Int_t           tcnt_nuem;
   Int_t           tcnt_nuep;
   Int_t           tcnt_ndmm;
   Int_t           tcnt_ndmp;
   Int_t           tcnt_numm;
   Int_t           tcnt_nump;
   Int_t           dem_;
   Int_t           dem_status[kMaxdem];   //[dem_]
   Int_t           dem_goodfit[kMaxdem];   //[dem_]
   Int_t           dem_seedalg[kMaxdem];   //[dem_]
   Int_t           dem_fitalg[kMaxdem];   //[dem_]
   Int_t           dem_pdg[kMaxdem];   //[dem_]
   Int_t           dem_nhits[kMaxdem];   //[dem_]
   Int_t           dem_ndof[kMaxdem];   //[dem_]
   Int_t           dem_nactive[kMaxdem];   //[dem_]
   Int_t           dem_ndouble[kMaxdem];   //[dem_]
   Int_t           dem_ndactive[kMaxdem];   //[dem_]
   Int_t           dem_nplanes[kMaxdem];   //[dem_]
   Int_t           dem_planespan[kMaxdem];   //[dem_]
   Int_t           dem_nnullambig[kMaxdem];   //[dem_]
   Int_t           dem_nmat[kMaxdem];   //[dem_]
   Int_t           dem_nmatactive[kMaxdem];   //[dem_]
   Int_t           dem_nesel[kMaxdem];   //[dem_]
   Int_t           dem_nrsel[kMaxdem];   //[dem_]
   Int_t           dem_ntsel[kMaxdem];   //[dem_]
   Int_t           dem_nbkg[kMaxdem];   //[dem_]
   Int_t           dem_nsel[kMaxdem];   //[dem_]
   Int_t           dem_nseg[kMaxdem];   //[dem_]
   Float_t         dem_chisq[kMaxdem];   //[dem_]
   Float_t         dem_fitcon[kMaxdem];   //[dem_]
   Float_t         dem_radlen[kMaxdem];   //[dem_]
   Float_t         dem_firsthit[kMaxdem];   //[dem_]
   Float_t         dem_lasthit[kMaxdem];   //[dem_]
   Float_t         dem_maxgap[kMaxdem];   //[dem_]
   Float_t         dem_avggap[kMaxdem];   //[dem_]
   Float_t         dem_avgedep[kMaxdem];   //[dem_]
   vector<vector<mu2e::TrkFitInfo> > *demfit;
   vector<vector<mu2e::LoopHelixInfo> > *demlh;
   Int_t           demtch_;
   Bool_t          demtch_active[kMaxdemtch];   //[demtch_]
   Int_t           demtch_did[kMaxdemtch];   //[demtch_]
   Float_t         demtch_poca_fCoordinates_fX[kMaxdemtch];   //[demtch_]
   Float_t         demtch_poca_fCoordinates_fY[kMaxdemtch];   //[demtch_]
   Float_t         demtch_poca_fCoordinates_fZ[kMaxdemtch];   //[demtch_]
   Float_t         demtch_mom_fCoordinates_fX[kMaxdemtch];   //[demtch_]
   Float_t         demtch_mom_fCoordinates_fY[kMaxdemtch];   //[demtch_]
   Float_t         demtch_mom_fCoordinates_fZ[kMaxdemtch];   //[demtch_]
   Float_t         demtch_cdepth[kMaxdemtch];   //[demtch_]
   Float_t         demtch_trkdepth[kMaxdemtch];   //[demtch_]
   Float_t         demtch_dphidot[kMaxdemtch];   //[demtch_]
   Float_t         demtch_doca[kMaxdemtch];   //[demtch_]
   Float_t         demtch_dt[kMaxdemtch];   //[demtch_]
   Float_t         demtch_ptoca[kMaxdemtch];   //[demtch_]
   Float_t         demtch_tocavar[kMaxdemtch];   //[demtch_]
   Float_t         demtch_tresid[kMaxdemtch];   //[demtch_]
   Float_t         demtch_tresidmvar[kMaxdemtch];   //[demtch_]
   Float_t         demtch_tresidpvar[kMaxdemtch];   //[demtch_]
   Float_t         demtch_ctime[kMaxdemtch];   //[demtch_]
   Float_t         demtch_ctimeerr[kMaxdemtch];   //[demtch_]
   Float_t         demtch_csize[kMaxdemtch];   //[demtch_]
   Float_t         demtch_edep[kMaxdemtch];   //[demtch_]
   Float_t         demtch_edeperr[kMaxdemtch];   //[demtch_]
 //mu2e::MVAResultInfo *demtrkqual;
   Float_t         result;
   Int_t           demmc_;
   Bool_t          demmc_valid[kMaxdemmc];   //[demmc_]
   Int_t           demmc_ndigi[kMaxdemmc];   //[demmc_]
   Int_t           demmc_ndigigood[kMaxdemmc];   //[demmc_]
   Int_t           demmc_nhits[kMaxdemmc];   //[demmc_]
   Int_t           demmc_nactive[kMaxdemmc];   //[demmc_]
   Int_t           demmc_nambig[kMaxdemmc];   //[demmc_]
   Float_t         demmc_maxr[kMaxdemmc];   //[demmc_]
   Float_t         demmc_rad[kMaxdemmc];   //[demmc_]
   Float_t         demmc_lam[kMaxdemmc];   //[demmc_]
   Float_t         demmc_cx[kMaxdemmc];   //[demmc_]
   Float_t         demmc_cy[kMaxdemmc];   //[demmc_]
   Float_t         demmc_phi0[kMaxdemmc];   //[demmc_]
   Float_t         demmc_t0[kMaxdemmc];   //[demmc_]
   vector<vector<mu2e::SimInfo> > *demmcsim;
   vector<vector<mu2e::MCStepInfo> > *demmcvd;
   Int_t           demtchmc_;
   Int_t           demtchmc_nsim[kMaxdemtchmc];   //[demtchmc_]
   Float_t         demtchmc_etot[kMaxdemtchmc];   //[demtchmc_]
   Float_t         demtchmc_tavg[kMaxdemtchmc];   //[demtchmc_]
   Float_t         demtchmc_eprimary[kMaxdemtchmc];   //[demtchmc_]
   Float_t         demtchmc_tprimary[kMaxdemtchmc];   //[demtchmc_]
   Int_t           demtchmc_prel__rel[kMaxdemtchmc];   //[demtchmc_]
   Char_t          demtchmc_prel__rem[kMaxdemtchmc];   //[demtchmc_]
   vector<vector<mu2e::MCStepInfo> > *demmcsic_protonabsorber;
   Int_t           demmcssi_protonabsorber_;
   UInt_t          demmcssi_protonabsorber_nsteps[kMaxdemmcssi_protonabsorber];   //[demmcssi_protonabsorber_]
   Float_t         demmcssi_protonabsorber_ftime[kMaxdemmcssi_protonabsorber];   //[demmcssi_protonabsorber_]
   Float_t         demmcssi_protonabsorber_ltime[kMaxdemmcssi_protonabsorber];   //[demmcssi_protonabsorber_]
   Float_t         demmcssi_protonabsorber_de[kMaxdemmcssi_protonabsorber];   //[demmcssi_protonabsorber_]
   Float_t         demmcssi_protonabsorber_dp[kMaxdemmcssi_protonabsorber];   //[demmcssi_protonabsorber_]
   vector<vector<mu2e::MCStepInfo> > *demmcsic_stoppingtarget;
   Int_t           demmcssi_stoppingtarget_;
   UInt_t          demmcssi_stoppingtarget_nsteps[kMaxdemmcssi_stoppingtarget];   //[demmcssi_stoppingtarget_]
   Float_t         demmcssi_stoppingtarget_ftime[kMaxdemmcssi_stoppingtarget];   //[demmcssi_stoppingtarget_]
   Float_t         demmcssi_stoppingtarget_ltime[kMaxdemmcssi_stoppingtarget];   //[demmcssi_stoppingtarget_]
   Float_t         demmcssi_stoppingtarget_de[kMaxdemmcssi_stoppingtarget];   //[demmcssi_stoppingtarget_]
   Float_t         demmcssi_stoppingtarget_dp[kMaxdemmcssi_stoppingtarget];   //[demmcssi_stoppingtarget_]
   Int_t           dep_;
   Int_t           dep_status[kMaxdep];   //[dep_]
   Int_t           dep_goodfit[kMaxdep];   //[dep_]
   Int_t           dep_seedalg[kMaxdep];   //[dep_]
   Int_t           dep_fitalg[kMaxdep];   //[dep_]
   Int_t           dep_pdg[kMaxdep];   //[dep_]
   Int_t           dep_nhits[kMaxdep];   //[dep_]
   Int_t           dep_ndof[kMaxdep];   //[dep_]
   Int_t           dep_nactive[kMaxdep];   //[dep_]
   Int_t           dep_ndouble[kMaxdep];   //[dep_]
   Int_t           dep_ndactive[kMaxdep];   //[dep_]
   Int_t           dep_nplanes[kMaxdep];   //[dep_]
   Int_t           dep_planespan[kMaxdep];   //[dep_]
   Int_t           dep_nnullambig[kMaxdep];   //[dep_]
   Int_t           dep_nmat[kMaxdep];   //[dep_]
   Int_t           dep_nmatactive[kMaxdep];   //[dep_]
   Int_t           dep_nesel[kMaxdep];   //[dep_]
   Int_t           dep_nrsel[kMaxdep];   //[dep_]
   Int_t           dep_ntsel[kMaxdep];   //[dep_]
   Int_t           dep_nbkg[kMaxdep];   //[dep_]
   Int_t           dep_nsel[kMaxdep];   //[dep_]
   Int_t           dep_nseg[kMaxdep];   //[dep_]
   Float_t         dep_chisq[kMaxdep];   //[dep_]
   Float_t         dep_fitcon[kMaxdep];   //[dep_]
   Float_t         dep_radlen[kMaxdep];   //[dep_]
   Float_t         dep_firsthit[kMaxdep];   //[dep_]
   Float_t         dep_lasthit[kMaxdep];   //[dep_]
   Float_t         dep_maxgap[kMaxdep];   //[dep_]
   Float_t         dep_avggap[kMaxdep];   //[dep_]
   Float_t         dep_avgedep[kMaxdep];   //[dep_]
   vector<vector<mu2e::TrkFitInfo> > *depfit;
   vector<vector<mu2e::LoopHelixInfo> > *deplh;
   Int_t           deptch_;
   Bool_t          deptch_active[kMaxdeptch];   //[deptch_]
   Int_t           deptch_did[kMaxdeptch];   //[deptch_]
   Float_t         deptch_poca_fCoordinates_fX[kMaxdeptch];   //[deptch_]
   Float_t         deptch_poca_fCoordinates_fY[kMaxdeptch];   //[deptch_]
   Float_t         deptch_poca_fCoordinates_fZ[kMaxdeptch];   //[deptch_]
   Float_t         deptch_mom_fCoordinates_fX[kMaxdeptch];   //[deptch_]
   Float_t         deptch_mom_fCoordinates_fY[kMaxdeptch];   //[deptch_]
   Float_t         deptch_mom_fCoordinates_fZ[kMaxdeptch];   //[deptch_]
   Float_t         deptch_cdepth[kMaxdeptch];   //[deptch_]
   Float_t         deptch_trkdepth[kMaxdeptch];   //[deptch_]
   Float_t         deptch_dphidot[kMaxdeptch];   //[deptch_]
   Float_t         deptch_doca[kMaxdeptch];   //[deptch_]
   Float_t         deptch_dt[kMaxdeptch];   //[deptch_]
   Float_t         deptch_ptoca[kMaxdeptch];   //[deptch_]
   Float_t         deptch_tocavar[kMaxdeptch];   //[deptch_]
   Float_t         deptch_tresid[kMaxdeptch];   //[deptch_]
   Float_t         deptch_tresidmvar[kMaxdeptch];   //[deptch_]
   Float_t         deptch_tresidpvar[kMaxdeptch];   //[deptch_]
   Float_t         deptch_ctime[kMaxdeptch];   //[deptch_]
   Float_t         deptch_ctimeerr[kMaxdeptch];   //[deptch_]
   Float_t         deptch_csize[kMaxdeptch];   //[deptch_]
   Float_t         deptch_edep[kMaxdeptch];   //[deptch_]
   Float_t         deptch_edeperr[kMaxdeptch];   //[deptch_]
 //mu2e::MVAResultInfo *deptrkqual;
   Float_t         result;
   Int_t           depmc_;
   Bool_t          depmc_valid[kMaxdepmc];   //[depmc_]
   Int_t           depmc_ndigi[kMaxdepmc];   //[depmc_]
   Int_t           depmc_ndigigood[kMaxdepmc];   //[depmc_]
   Int_t           depmc_nhits[kMaxdepmc];   //[depmc_]
   Int_t           depmc_nactive[kMaxdepmc];   //[depmc_]
   Int_t           depmc_nambig[kMaxdepmc];   //[depmc_]
   Float_t         depmc_maxr[kMaxdepmc];   //[depmc_]
   Float_t         depmc_rad[kMaxdepmc];   //[depmc_]
   Float_t         depmc_lam[kMaxdepmc];   //[depmc_]
   Float_t         depmc_cx[kMaxdepmc];   //[depmc_]
   Float_t         depmc_cy[kMaxdepmc];   //[depmc_]
   Float_t         depmc_phi0[kMaxdepmc];   //[depmc_]
   Float_t         depmc_t0[kMaxdepmc];   //[depmc_]
   vector<vector<mu2e::SimInfo> > *depmcsim;
   vector<vector<mu2e::MCStepInfo> > *depmcvd;
   Int_t           deptchmc_;
   Int_t           deptchmc_nsim[kMaxdeptchmc];   //[deptchmc_]
   Float_t         deptchmc_etot[kMaxdeptchmc];   //[deptchmc_]
   Float_t         deptchmc_tavg[kMaxdeptchmc];   //[deptchmc_]
   Float_t         deptchmc_eprimary[kMaxdeptchmc];   //[deptchmc_]
   Float_t         deptchmc_tprimary[kMaxdeptchmc];   //[deptchmc_]
   Int_t           deptchmc_prel__rel[kMaxdeptchmc];   //[deptchmc_]
   Char_t          deptchmc_prel__rem[kMaxdeptchmc];   //[deptchmc_]
   vector<vector<mu2e::MCStepInfo> > *depmcsic_protonabsorber;
   Int_t           depmcssi_protonabsorber_;
   UInt_t          depmcssi_protonabsorber_nsteps[kMaxdepmcssi_protonabsorber];   //[depmcssi_protonabsorber_]
   Float_t         depmcssi_protonabsorber_ftime[kMaxdepmcssi_protonabsorber];   //[depmcssi_protonabsorber_]
   Float_t         depmcssi_protonabsorber_ltime[kMaxdepmcssi_protonabsorber];   //[depmcssi_protonabsorber_]
   Float_t         depmcssi_protonabsorber_de[kMaxdepmcssi_protonabsorber];   //[depmcssi_protonabsorber_]
   Float_t         depmcssi_protonabsorber_dp[kMaxdepmcssi_protonabsorber];   //[depmcssi_protonabsorber_]
   vector<vector<mu2e::MCStepInfo> > *depmcsic_stoppingtarget;
   Int_t           depmcssi_stoppingtarget_;
   UInt_t          depmcssi_stoppingtarget_nsteps[kMaxdepmcssi_stoppingtarget];   //[depmcssi_stoppingtarget_]
   Float_t         depmcssi_stoppingtarget_ftime[kMaxdepmcssi_stoppingtarget];   //[depmcssi_stoppingtarget_]
   Float_t         depmcssi_stoppingtarget_ltime[kMaxdepmcssi_stoppingtarget];   //[depmcssi_stoppingtarget_]
   Float_t         depmcssi_stoppingtarget_de[kMaxdepmcssi_stoppingtarget];   //[depmcssi_stoppingtarget_]
   Float_t         depmcssi_stoppingtarget_dp[kMaxdepmcssi_stoppingtarget];   //[depmcssi_stoppingtarget_]
   Int_t           uem_;
   Int_t           uem_status[kMaxuem];   //[uem_]
   Int_t           uem_goodfit[kMaxuem];   //[uem_]
   Int_t           uem_seedalg[kMaxuem];   //[uem_]
   Int_t           uem_fitalg[kMaxuem];   //[uem_]
   Int_t           uem_pdg[kMaxuem];   //[uem_]
   Int_t           uem_nhits[kMaxuem];   //[uem_]
   Int_t           uem_ndof[kMaxuem];   //[uem_]
   Int_t           uem_nactive[kMaxuem];   //[uem_]
   Int_t           uem_ndouble[kMaxuem];   //[uem_]
   Int_t           uem_ndactive[kMaxuem];   //[uem_]
   Int_t           uem_nplanes[kMaxuem];   //[uem_]
   Int_t           uem_planespan[kMaxuem];   //[uem_]
   Int_t           uem_nnullambig[kMaxuem];   //[uem_]
   Int_t           uem_nmat[kMaxuem];   //[uem_]
   Int_t           uem_nmatactive[kMaxuem];   //[uem_]
   Int_t           uem_nesel[kMaxuem];   //[uem_]
   Int_t           uem_nrsel[kMaxuem];   //[uem_]
   Int_t           uem_ntsel[kMaxuem];   //[uem_]
   Int_t           uem_nbkg[kMaxuem];   //[uem_]
   Int_t           uem_nsel[kMaxuem];   //[uem_]
   Int_t           uem_nseg[kMaxuem];   //[uem_]
   Float_t         uem_chisq[kMaxuem];   //[uem_]
   Float_t         uem_fitcon[kMaxuem];   //[uem_]
   Float_t         uem_radlen[kMaxuem];   //[uem_]
   Float_t         uem_firsthit[kMaxuem];   //[uem_]
   Float_t         uem_lasthit[kMaxuem];   //[uem_]
   Float_t         uem_maxgap[kMaxuem];   //[uem_]
   Float_t         uem_avggap[kMaxuem];   //[uem_]
   Float_t         uem_avgedep[kMaxuem];   //[uem_]
   vector<vector<mu2e::TrkFitInfo> > *uemfit;
   vector<vector<mu2e::LoopHelixInfo> > *uemlh;
   Int_t           uemtch_;
   Bool_t          uemtch_active[kMaxuemtch];   //[uemtch_]
   Int_t           uemtch_did[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_poca_fCoordinates_fX[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_poca_fCoordinates_fY[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_poca_fCoordinates_fZ[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_mom_fCoordinates_fX[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_mom_fCoordinates_fY[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_mom_fCoordinates_fZ[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_cdepth[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_trkdepth[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_dphidot[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_doca[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_dt[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_ptoca[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_tocavar[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_tresid[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_tresidmvar[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_tresidpvar[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_ctime[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_ctimeerr[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_csize[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_edep[kMaxuemtch];   //[uemtch_]
   Float_t         uemtch_edeperr[kMaxuemtch];   //[uemtch_]
 //mu2e::MVAResultInfo *uemtrkqual;
   Float_t         result;
   Int_t           uep_;
   Int_t           uep_status[kMaxuep];   //[uep_]
   Int_t           uep_goodfit[kMaxuep];   //[uep_]
   Int_t           uep_seedalg[kMaxuep];   //[uep_]
   Int_t           uep_fitalg[kMaxuep];   //[uep_]
   Int_t           uep_pdg[kMaxuep];   //[uep_]
   Int_t           uep_nhits[kMaxuep];   //[uep_]
   Int_t           uep_ndof[kMaxuep];   //[uep_]
   Int_t           uep_nactive[kMaxuep];   //[uep_]
   Int_t           uep_ndouble[kMaxuep];   //[uep_]
   Int_t           uep_ndactive[kMaxuep];   //[uep_]
   Int_t           uep_nplanes[kMaxuep];   //[uep_]
   Int_t           uep_planespan[kMaxuep];   //[uep_]
   Int_t           uep_nnullambig[kMaxuep];   //[uep_]
   Int_t           uep_nmat[kMaxuep];   //[uep_]
   Int_t           uep_nmatactive[kMaxuep];   //[uep_]
   Int_t           uep_nesel[kMaxuep];   //[uep_]
   Int_t           uep_nrsel[kMaxuep];   //[uep_]
   Int_t           uep_ntsel[kMaxuep];   //[uep_]
   Int_t           uep_nbkg[kMaxuep];   //[uep_]
   Int_t           uep_nsel[kMaxuep];   //[uep_]
   Int_t           uep_nseg[kMaxuep];   //[uep_]
   Float_t         uep_chisq[kMaxuep];   //[uep_]
   Float_t         uep_fitcon[kMaxuep];   //[uep_]
   Float_t         uep_radlen[kMaxuep];   //[uep_]
   Float_t         uep_firsthit[kMaxuep];   //[uep_]
   Float_t         uep_lasthit[kMaxuep];   //[uep_]
   Float_t         uep_maxgap[kMaxuep];   //[uep_]
   Float_t         uep_avggap[kMaxuep];   //[uep_]
   Float_t         uep_avgedep[kMaxuep];   //[uep_]
   vector<vector<mu2e::TrkFitInfo> > *uepfit;
   vector<vector<mu2e::LoopHelixInfo> > *ueplh;
   Int_t           ueptch_;
   Bool_t          ueptch_active[kMaxueptch];   //[ueptch_]
   Int_t           ueptch_did[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_poca_fCoordinates_fX[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_poca_fCoordinates_fY[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_poca_fCoordinates_fZ[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_mom_fCoordinates_fX[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_mom_fCoordinates_fY[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_mom_fCoordinates_fZ[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_cdepth[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_trkdepth[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_dphidot[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_doca[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_dt[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_ptoca[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_tocavar[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_tresid[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_tresidmvar[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_tresidpvar[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_ctime[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_ctimeerr[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_csize[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_edep[kMaxueptch];   //[ueptch_]
   Float_t         ueptch_edeperr[kMaxueptch];   //[ueptch_]
 //mu2e::MVAResultInfo *ueptrkqual;
   Float_t         result;
   Int_t           dmm_;
   Int_t           dmm_status[kMaxdmm];   //[dmm_]
   Int_t           dmm_goodfit[kMaxdmm];   //[dmm_]
   Int_t           dmm_seedalg[kMaxdmm];   //[dmm_]
   Int_t           dmm_fitalg[kMaxdmm];   //[dmm_]
   Int_t           dmm_pdg[kMaxdmm];   //[dmm_]
   Int_t           dmm_nhits[kMaxdmm];   //[dmm_]
   Int_t           dmm_ndof[kMaxdmm];   //[dmm_]
   Int_t           dmm_nactive[kMaxdmm];   //[dmm_]
   Int_t           dmm_ndouble[kMaxdmm];   //[dmm_]
   Int_t           dmm_ndactive[kMaxdmm];   //[dmm_]
   Int_t           dmm_nplanes[kMaxdmm];   //[dmm_]
   Int_t           dmm_planespan[kMaxdmm];   //[dmm_]
   Int_t           dmm_nnullambig[kMaxdmm];   //[dmm_]
   Int_t           dmm_nmat[kMaxdmm];   //[dmm_]
   Int_t           dmm_nmatactive[kMaxdmm];   //[dmm_]
   Int_t           dmm_nesel[kMaxdmm];   //[dmm_]
   Int_t           dmm_nrsel[kMaxdmm];   //[dmm_]
   Int_t           dmm_ntsel[kMaxdmm];   //[dmm_]
   Int_t           dmm_nbkg[kMaxdmm];   //[dmm_]
   Int_t           dmm_nsel[kMaxdmm];   //[dmm_]
   Int_t           dmm_nseg[kMaxdmm];   //[dmm_]
   Float_t         dmm_chisq[kMaxdmm];   //[dmm_]
   Float_t         dmm_fitcon[kMaxdmm];   //[dmm_]
   Float_t         dmm_radlen[kMaxdmm];   //[dmm_]
   Float_t         dmm_firsthit[kMaxdmm];   //[dmm_]
   Float_t         dmm_lasthit[kMaxdmm];   //[dmm_]
   Float_t         dmm_maxgap[kMaxdmm];   //[dmm_]
   Float_t         dmm_avggap[kMaxdmm];   //[dmm_]
   Float_t         dmm_avgedep[kMaxdmm];   //[dmm_]
   vector<vector<mu2e::TrkFitInfo> > *dmmfit;
   vector<vector<mu2e::LoopHelixInfo> > *dmmlh;
   Int_t           dmmtch_;
   Bool_t          dmmtch_active[kMaxdmmtch];   //[dmmtch_]
   Int_t           dmmtch_did[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_poca_fCoordinates_fX[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_poca_fCoordinates_fY[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_poca_fCoordinates_fZ[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_mom_fCoordinates_fX[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_mom_fCoordinates_fY[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_mom_fCoordinates_fZ[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_cdepth[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_trkdepth[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_dphidot[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_doca[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_dt[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_ptoca[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_tocavar[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_tresid[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_tresidmvar[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_tresidpvar[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_ctime[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_ctimeerr[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_csize[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_edep[kMaxdmmtch];   //[dmmtch_]
   Float_t         dmmtch_edeperr[kMaxdmmtch];   //[dmmtch_]
 //mu2e::MVAResultInfo *dmmtrkqual;
   Float_t         result;
   Int_t           dmp_;
   Int_t           dmp_status[kMaxdmp];   //[dmp_]
   Int_t           dmp_goodfit[kMaxdmp];   //[dmp_]
   Int_t           dmp_seedalg[kMaxdmp];   //[dmp_]
   Int_t           dmp_fitalg[kMaxdmp];   //[dmp_]
   Int_t           dmp_pdg[kMaxdmp];   //[dmp_]
   Int_t           dmp_nhits[kMaxdmp];   //[dmp_]
   Int_t           dmp_ndof[kMaxdmp];   //[dmp_]
   Int_t           dmp_nactive[kMaxdmp];   //[dmp_]
   Int_t           dmp_ndouble[kMaxdmp];   //[dmp_]
   Int_t           dmp_ndactive[kMaxdmp];   //[dmp_]
   Int_t           dmp_nplanes[kMaxdmp];   //[dmp_]
   Int_t           dmp_planespan[kMaxdmp];   //[dmp_]
   Int_t           dmp_nnullambig[kMaxdmp];   //[dmp_]
   Int_t           dmp_nmat[kMaxdmp];   //[dmp_]
   Int_t           dmp_nmatactive[kMaxdmp];   //[dmp_]
   Int_t           dmp_nesel[kMaxdmp];   //[dmp_]
   Int_t           dmp_nrsel[kMaxdmp];   //[dmp_]
   Int_t           dmp_ntsel[kMaxdmp];   //[dmp_]
   Int_t           dmp_nbkg[kMaxdmp];   //[dmp_]
   Int_t           dmp_nsel[kMaxdmp];   //[dmp_]
   Int_t           dmp_nseg[kMaxdmp];   //[dmp_]
   Float_t         dmp_chisq[kMaxdmp];   //[dmp_]
   Float_t         dmp_fitcon[kMaxdmp];   //[dmp_]
   Float_t         dmp_radlen[kMaxdmp];   //[dmp_]
   Float_t         dmp_firsthit[kMaxdmp];   //[dmp_]
   Float_t         dmp_lasthit[kMaxdmp];   //[dmp_]
   Float_t         dmp_maxgap[kMaxdmp];   //[dmp_]
   Float_t         dmp_avggap[kMaxdmp];   //[dmp_]
   Float_t         dmp_avgedep[kMaxdmp];   //[dmp_]
   vector<vector<mu2e::TrkFitInfo> > *dmpfit;
   vector<vector<mu2e::LoopHelixInfo> > *dmplh;
   Int_t           dmptch_;
   Bool_t          dmptch_active[kMaxdmptch];   //[dmptch_]
   Int_t           dmptch_did[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_poca_fCoordinates_fX[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_poca_fCoordinates_fY[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_poca_fCoordinates_fZ[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_mom_fCoordinates_fX[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_mom_fCoordinates_fY[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_mom_fCoordinates_fZ[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_cdepth[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_trkdepth[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_dphidot[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_doca[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_dt[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_ptoca[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_tocavar[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_tresid[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_tresidmvar[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_tresidpvar[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_ctime[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_ctimeerr[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_csize[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_edep[kMaxdmptch];   //[dmptch_]
   Float_t         dmptch_edeperr[kMaxdmptch];   //[dmptch_]
 //mu2e::MVAResultInfo *dmptrkqual;
   Float_t         result;
   Int_t           umm_;
   Int_t           umm_status[kMaxumm];   //[umm_]
   Int_t           umm_goodfit[kMaxumm];   //[umm_]
   Int_t           umm_seedalg[kMaxumm];   //[umm_]
   Int_t           umm_fitalg[kMaxumm];   //[umm_]
   Int_t           umm_pdg[kMaxumm];   //[umm_]
   Int_t           umm_nhits[kMaxumm];   //[umm_]
   Int_t           umm_ndof[kMaxumm];   //[umm_]
   Int_t           umm_nactive[kMaxumm];   //[umm_]
   Int_t           umm_ndouble[kMaxumm];   //[umm_]
   Int_t           umm_ndactive[kMaxumm];   //[umm_]
   Int_t           umm_nplanes[kMaxumm];   //[umm_]
   Int_t           umm_planespan[kMaxumm];   //[umm_]
   Int_t           umm_nnullambig[kMaxumm];   //[umm_]
   Int_t           umm_nmat[kMaxumm];   //[umm_]
   Int_t           umm_nmatactive[kMaxumm];   //[umm_]
   Int_t           umm_nesel[kMaxumm];   //[umm_]
   Int_t           umm_nrsel[kMaxumm];   //[umm_]
   Int_t           umm_ntsel[kMaxumm];   //[umm_]
   Int_t           umm_nbkg[kMaxumm];   //[umm_]
   Int_t           umm_nsel[kMaxumm];   //[umm_]
   Int_t           umm_nseg[kMaxumm];   //[umm_]
   Float_t         umm_chisq[kMaxumm];   //[umm_]
   Float_t         umm_fitcon[kMaxumm];   //[umm_]
   Float_t         umm_radlen[kMaxumm];   //[umm_]
   Float_t         umm_firsthit[kMaxumm];   //[umm_]
   Float_t         umm_lasthit[kMaxumm];   //[umm_]
   Float_t         umm_maxgap[kMaxumm];   //[umm_]
   Float_t         umm_avggap[kMaxumm];   //[umm_]
   Float_t         umm_avgedep[kMaxumm];   //[umm_]
   vector<vector<mu2e::TrkFitInfo> > *ummfit;
   vector<vector<mu2e::LoopHelixInfo> > *ummlh;
   Int_t           ummtch_;
   Bool_t          ummtch_active[kMaxummtch];   //[ummtch_]
   Int_t           ummtch_did[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_poca_fCoordinates_fX[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_poca_fCoordinates_fY[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_poca_fCoordinates_fZ[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_mom_fCoordinates_fX[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_mom_fCoordinates_fY[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_mom_fCoordinates_fZ[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_cdepth[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_trkdepth[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_dphidot[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_doca[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_dt[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_ptoca[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_tocavar[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_tresid[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_tresidmvar[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_tresidpvar[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_ctime[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_ctimeerr[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_csize[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_edep[kMaxummtch];   //[ummtch_]
   Float_t         ummtch_edeperr[kMaxummtch];   //[ummtch_]
 //mu2e::MVAResultInfo *ummtrkqual;
   Float_t         result;
   Int_t           ump_;
   Int_t           ump_status[kMaxump];   //[ump_]
   Int_t           ump_goodfit[kMaxump];   //[ump_]
   Int_t           ump_seedalg[kMaxump];   //[ump_]
   Int_t           ump_fitalg[kMaxump];   //[ump_]
   Int_t           ump_pdg[kMaxump];   //[ump_]
   Int_t           ump_nhits[kMaxump];   //[ump_]
   Int_t           ump_ndof[kMaxump];   //[ump_]
   Int_t           ump_nactive[kMaxump];   //[ump_]
   Int_t           ump_ndouble[kMaxump];   //[ump_]
   Int_t           ump_ndactive[kMaxump];   //[ump_]
   Int_t           ump_nplanes[kMaxump];   //[ump_]
   Int_t           ump_planespan[kMaxump];   //[ump_]
   Int_t           ump_nnullambig[kMaxump];   //[ump_]
   Int_t           ump_nmat[kMaxump];   //[ump_]
   Int_t           ump_nmatactive[kMaxump];   //[ump_]
   Int_t           ump_nesel[kMaxump];   //[ump_]
   Int_t           ump_nrsel[kMaxump];   //[ump_]
   Int_t           ump_ntsel[kMaxump];   //[ump_]
   Int_t           ump_nbkg[kMaxump];   //[ump_]
   Int_t           ump_nsel[kMaxump];   //[ump_]
   Int_t           ump_nseg[kMaxump];   //[ump_]
   Float_t         ump_chisq[kMaxump];   //[ump_]
   Float_t         ump_fitcon[kMaxump];   //[ump_]
   Float_t         ump_radlen[kMaxump];   //[ump_]
   Float_t         ump_firsthit[kMaxump];   //[ump_]
   Float_t         ump_lasthit[kMaxump];   //[ump_]
   Float_t         ump_maxgap[kMaxump];   //[ump_]
   Float_t         ump_avggap[kMaxump];   //[ump_]
   Float_t         ump_avgedep[kMaxump];   //[ump_]
   vector<vector<mu2e::TrkFitInfo> > *umpfit;
   vector<vector<mu2e::LoopHelixInfo> > *umplh;
   Int_t           umptch_;
   Bool_t          umptch_active[kMaxumptch];   //[umptch_]
   Int_t           umptch_did[kMaxumptch];   //[umptch_]
   Float_t         umptch_poca_fCoordinates_fX[kMaxumptch];   //[umptch_]
   Float_t         umptch_poca_fCoordinates_fY[kMaxumptch];   //[umptch_]
   Float_t         umptch_poca_fCoordinates_fZ[kMaxumptch];   //[umptch_]
   Float_t         umptch_mom_fCoordinates_fX[kMaxumptch];   //[umptch_]
   Float_t         umptch_mom_fCoordinates_fY[kMaxumptch];   //[umptch_]
   Float_t         umptch_mom_fCoordinates_fZ[kMaxumptch];   //[umptch_]
   Float_t         umptch_cdepth[kMaxumptch];   //[umptch_]
   Float_t         umptch_trkdepth[kMaxumptch];   //[umptch_]
   Float_t         umptch_dphidot[kMaxumptch];   //[umptch_]
   Float_t         umptch_doca[kMaxumptch];   //[umptch_]
   Float_t         umptch_dt[kMaxumptch];   //[umptch_]
   Float_t         umptch_ptoca[kMaxumptch];   //[umptch_]
   Float_t         umptch_tocavar[kMaxumptch];   //[umptch_]
   Float_t         umptch_tresid[kMaxumptch];   //[umptch_]
   Float_t         umptch_tresidmvar[kMaxumptch];   //[umptch_]
   Float_t         umptch_tresidpvar[kMaxumptch];   //[umptch_]
   Float_t         umptch_ctime[kMaxumptch];   //[umptch_]
   Float_t         umptch_ctimeerr[kMaxumptch];   //[umptch_]
   Float_t         umptch_csize[kMaxumptch];   //[umptch_]
   Float_t         umptch_edep[kMaxumptch];   //[umptch_]
   Float_t         umptch_edeperr[kMaxumptch];   //[umptch_]
 //mu2e::MVAResultInfo *umptrkqual;
   Float_t         result;
 //mu2e::CrvSummaryReco *crvsummary_;
   Int_t           crvsummary_totalPEs;
   Int_t           crvsummary_nHitCounters;
   Int_t           crvcoincs_;
   Int_t           crvcoincs_sectorType[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_pos_fCoordinates_fX[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_pos_fCoordinates_fY[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_pos_fCoordinates_fZ[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_timeStart[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_timeEnd[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_time[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_PEs[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_PEsPerLayer[kMaxcrvcoincs][4];   //[crvcoincs_]
   Int_t           crvcoincs_nHits[kMaxcrvcoincs];   //[crvcoincs_]
   Int_t           crvcoincs_nLayers[kMaxcrvcoincs];   //[crvcoincs_]
   Float_t         crvcoincs_angle[kMaxcrvcoincs];   //[crvcoincs_]
 //mu2e::CrvSummaryMC *crvsummarymc_;
   Double_t        crvsummarymc_totalEnergyDeposited;
   Double_t        crvsummarymc_minPathLayer;
   Double_t        crvsummarymc_maxPathLayer;
   Int_t           crvsummarymc_nHitCounters;
   Float_t         crvsummarymc_pos_fCoordinates_fX;
   Float_t         crvsummarymc_pos_fCoordinates_fY;
   Float_t         crvsummarymc_pos_fCoordinates_fZ;
   Int_t           crvsummarymc_sectorNumber;
   Int_t           crvsummarymc_sectorType;
   Int_t           crvsummarymc_pdgId;
   Int_t           crvcoincsmc_;
   Bool_t          crvcoincsmc_valid[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Int_t           crvcoincsmc_pdgId[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Int_t           crvcoincsmc_primaryPdgId[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_primaryE[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_primary_fCoordinates_fX[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_primary_fCoordinates_fY[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_primary_fCoordinates_fZ[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Int_t           crvcoincsmc_parentPdgId[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_parentE[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_parent_fCoordinates_fX[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_parent_fCoordinates_fY[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_parent_fCoordinates_fZ[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Int_t           crvcoincsmc_gparentPdgId[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_gparentE[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_gparent_fCoordinates_fX[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_gparent_fCoordinates_fY[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_gparent_fCoordinates_fZ[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_pos_fCoordinates_fX[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_pos_fCoordinates_fY[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_pos_fCoordinates_fZ[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_time[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Float_t         crvcoincsmc_depositedEnergy[kMaxcrvcoincsmc];   //[crvcoincsmc_]
   Int_t           crvcoincsmcplane_;
   Int_t           crvcoincsmcplane_pdgId[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Int_t           crvcoincsmcplane_primaryPdgId[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_primaryE[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_primary_fCoordinates_fX[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_primary_fCoordinates_fY[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_primary_fCoordinates_fZ[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_pos_fCoordinates_fX[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_pos_fCoordinates_fY[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_pos_fCoordinates_fZ[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_dir_fCoordinates_fX[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_dir_fCoordinates_fY[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_dir_fCoordinates_fZ[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_time[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Float_t         crvcoincsmcplane_kineticEnergy[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Int_t           crvcoincsmcplane_dataSource[kMaxcrvcoincsmcplane];   //[crvcoincsmcplane_]
   Int_t           evtwt__nwts;
   Float_t         evtwt__PBIWeight;

   // List of branches
   TBranch        *b_evtinfo_event;   //!
   TBranch        *b_evtinfo_run;   //!
   TBranch        *b_evtinfo_subrun;   //!
   TBranch        *b_evtinfo_nprotons;   //!
   TBranch        *b_evtinfo_pbtime;   //!
   TBranch        *b_evtinfo_pbterr;   //!
   TBranch        *b_evtinfomc_nprotons;   //!
   TBranch        *b_evtinfomc_pbtime;   //!
   TBranch        *b_hcnt_nsd;   //!
   TBranch        *b_hcnt_nesel;   //!
   TBranch        *b_hcnt_nrsel;   //!
   TBranch        *b_hcnt_ntsel;   //!
   TBranch        *b_hcnt_nbkg;   //!
   TBranch        *b_tcnt_ndem;   //!
   TBranch        *b_tcnt_ndep;   //!
   TBranch        *b_tcnt_nuem;   //!
   TBranch        *b_tcnt_nuep;   //!
   TBranch        *b_tcnt_ndmm;   //!
   TBranch        *b_tcnt_ndmp;   //!
   TBranch        *b_tcnt_numm;   //!
   TBranch        *b_tcnt_nump;   //!
   TBranch        *b_dem_;   //!
   TBranch        *b_dem_status;   //!
   TBranch        *b_dem_goodfit;   //!
   TBranch        *b_dem_seedalg;   //!
   TBranch        *b_dem_fitalg;   //!
   TBranch        *b_dem_pdg;   //!
   TBranch        *b_dem_nhits;   //!
   TBranch        *b_dem_ndof;   //!
   TBranch        *b_dem_nactive;   //!
   TBranch        *b_dem_ndouble;   //!
   TBranch        *b_dem_ndactive;   //!
   TBranch        *b_dem_nplanes;   //!
   TBranch        *b_dem_planespan;   //!
   TBranch        *b_dem_nnullambig;   //!
   TBranch        *b_dem_nmat;   //!
   TBranch        *b_dem_nmatactive;   //!
   TBranch        *b_dem_nesel;   //!
   TBranch        *b_dem_nrsel;   //!
   TBranch        *b_dem_ntsel;   //!
   TBranch        *b_dem_nbkg;   //!
   TBranch        *b_dem_nsel;   //!
   TBranch        *b_dem_nseg;   //!
   TBranch        *b_dem_chisq;   //!
   TBranch        *b_dem_fitcon;   //!
   TBranch        *b_dem_radlen;   //!
   TBranch        *b_dem_firsthit;   //!
   TBranch        *b_dem_lasthit;   //!
   TBranch        *b_dem_maxgap;   //!
   TBranch        *b_dem_avggap;   //!
   TBranch        *b_dem_avgedep;   //!
   TBranch        *b_demfit;   //!
   TBranch        *b_demlh;   //!
   TBranch        *b_demtch_;   //!
   TBranch        *b_demtch_active;   //!
   TBranch        *b_demtch_did;   //!
   TBranch        *b_demtch_poca_fCoordinates_fX;   //!
   TBranch        *b_demtch_poca_fCoordinates_fY;   //!
   TBranch        *b_demtch_poca_fCoordinates_fZ;   //!
   TBranch        *b_demtch_mom_fCoordinates_fX;   //!
   TBranch        *b_demtch_mom_fCoordinates_fY;   //!
   TBranch        *b_demtch_mom_fCoordinates_fZ;   //!
   TBranch        *b_demtch_cdepth;   //!
   TBranch        *b_demtch_trkdepth;   //!
   TBranch        *b_demtch_dphidot;   //!
   TBranch        *b_demtch_doca;   //!
   TBranch        *b_demtch_dt;   //!
   TBranch        *b_demtch_ptoca;   //!
   TBranch        *b_demtch_tocavar;   //!
   TBranch        *b_demtch_tresid;   //!
   TBranch        *b_demtch_tresidmvar;   //!
   TBranch        *b_demtch_tresidpvar;   //!
   TBranch        *b_demtch_ctime;   //!
   TBranch        *b_demtch_ctimeerr;   //!
   TBranch        *b_demtch_csize;   //!
   TBranch        *b_demtch_edep;   //!
   TBranch        *b_demtch_edeperr;   //!
   TBranch        *b_demtrkqual_result;   //!
   TBranch        *b_demmc_;   //!
   TBranch        *b_demmc_valid;   //!
   TBranch        *b_demmc_ndigi;   //!
   TBranch        *b_demmc_ndigigood;   //!
   TBranch        *b_demmc_nhits;   //!
   TBranch        *b_demmc_nactive;   //!
   TBranch        *b_demmc_nambig;   //!
   TBranch        *b_demmc_maxr;   //!
   TBranch        *b_demmc_rad;   //!
   TBranch        *b_demmc_lam;   //!
   TBranch        *b_demmc_cx;   //!
   TBranch        *b_demmc_cy;   //!
   TBranch        *b_demmc_phi0;   //!
   TBranch        *b_demmc_t0;   //!
   TBranch        *b_demmcsim;   //!
   TBranch        *b_demmcvd;   //!
   TBranch        *b_demtchmc_;   //!
   TBranch        *b_demtchmc_nsim;   //!
   TBranch        *b_demtchmc_etot;   //!
   TBranch        *b_demtchmc_tavg;   //!
   TBranch        *b_demtchmc_eprimary;   //!
   TBranch        *b_demtchmc_tprimary;   //!
   TBranch        *b_demtchmc_prel__rel;   //!
   TBranch        *b_demtchmc_prel__rem;   //!
   TBranch        *b_demmcsic_protonabsorber;   //!
   TBranch        *b_demmcssi_protonabsorber_;   //!
   TBranch        *b_demmcssi_protonabsorber_nsteps;   //!
   TBranch        *b_demmcssi_protonabsorber_ftime;   //!
   TBranch        *b_demmcssi_protonabsorber_ltime;   //!
   TBranch        *b_demmcssi_protonabsorber_de;   //!
   TBranch        *b_demmcssi_protonabsorber_dp;   //!
   TBranch        *b_demmcsic_stoppingtarget;   //!
   TBranch        *b_demmcssi_stoppingtarget_;   //!
   TBranch        *b_demmcssi_stoppingtarget_nsteps;   //!
   TBranch        *b_demmcssi_stoppingtarget_ftime;   //!
   TBranch        *b_demmcssi_stoppingtarget_ltime;   //!
   TBranch        *b_demmcssi_stoppingtarget_de;   //!
   TBranch        *b_demmcssi_stoppingtarget_dp;   //!
   TBranch        *b_dep_;   //!
   TBranch        *b_dep_status;   //!
   TBranch        *b_dep_goodfit;   //!
   TBranch        *b_dep_seedalg;   //!
   TBranch        *b_dep_fitalg;   //!
   TBranch        *b_dep_pdg;   //!
   TBranch        *b_dep_nhits;   //!
   TBranch        *b_dep_ndof;   //!
   TBranch        *b_dep_nactive;   //!
   TBranch        *b_dep_ndouble;   //!
   TBranch        *b_dep_ndactive;   //!
   TBranch        *b_dep_nplanes;   //!
   TBranch        *b_dep_planespan;   //!
   TBranch        *b_dep_nnullambig;   //!
   TBranch        *b_dep_nmat;   //!
   TBranch        *b_dep_nmatactive;   //!
   TBranch        *b_dep_nesel;   //!
   TBranch        *b_dep_nrsel;   //!
   TBranch        *b_dep_ntsel;   //!
   TBranch        *b_dep_nbkg;   //!
   TBranch        *b_dep_nsel;   //!
   TBranch        *b_dep_nseg;   //!
   TBranch        *b_dep_chisq;   //!
   TBranch        *b_dep_fitcon;   //!
   TBranch        *b_dep_radlen;   //!
   TBranch        *b_dep_firsthit;   //!
   TBranch        *b_dep_lasthit;   //!
   TBranch        *b_dep_maxgap;   //!
   TBranch        *b_dep_avggap;   //!
   TBranch        *b_dep_avgedep;   //!
   TBranch        *b_depfit;   //!
   TBranch        *b_deplh;   //!
   TBranch        *b_deptch_;   //!
   TBranch        *b_deptch_active;   //!
   TBranch        *b_deptch_did;   //!
   TBranch        *b_deptch_poca_fCoordinates_fX;   //!
   TBranch        *b_deptch_poca_fCoordinates_fY;   //!
   TBranch        *b_deptch_poca_fCoordinates_fZ;   //!
   TBranch        *b_deptch_mom_fCoordinates_fX;   //!
   TBranch        *b_deptch_mom_fCoordinates_fY;   //!
   TBranch        *b_deptch_mom_fCoordinates_fZ;   //!
   TBranch        *b_deptch_cdepth;   //!
   TBranch        *b_deptch_trkdepth;   //!
   TBranch        *b_deptch_dphidot;   //!
   TBranch        *b_deptch_doca;   //!
   TBranch        *b_deptch_dt;   //!
   TBranch        *b_deptch_ptoca;   //!
   TBranch        *b_deptch_tocavar;   //!
   TBranch        *b_deptch_tresid;   //!
   TBranch        *b_deptch_tresidmvar;   //!
   TBranch        *b_deptch_tresidpvar;   //!
   TBranch        *b_deptch_ctime;   //!
   TBranch        *b_deptch_ctimeerr;   //!
   TBranch        *b_deptch_csize;   //!
   TBranch        *b_deptch_edep;   //!
   TBranch        *b_deptch_edeperr;   //!
   TBranch        *b_deptrkqual_result;   //!
   TBranch        *b_depmc_;   //!
   TBranch        *b_depmc_valid;   //!
   TBranch        *b_depmc_ndigi;   //!
   TBranch        *b_depmc_ndigigood;   //!
   TBranch        *b_depmc_nhits;   //!
   TBranch        *b_depmc_nactive;   //!
   TBranch        *b_depmc_nambig;   //!
   TBranch        *b_depmc_maxr;   //!
   TBranch        *b_depmc_rad;   //!
   TBranch        *b_depmc_lam;   //!
   TBranch        *b_depmc_cx;   //!
   TBranch        *b_depmc_cy;   //!
   TBranch        *b_depmc_phi0;   //!
   TBranch        *b_depmc_t0;   //!
   TBranch        *b_depmcsim;   //!
   TBranch        *b_depmcvd;   //!
   TBranch        *b_deptchmc_;   //!
   TBranch        *b_deptchmc_nsim;   //!
   TBranch        *b_deptchmc_etot;   //!
   TBranch        *b_deptchmc_tavg;   //!
   TBranch        *b_deptchmc_eprimary;   //!
   TBranch        *b_deptchmc_tprimary;   //!
   TBranch        *b_deptchmc_prel__rel;   //!
   TBranch        *b_deptchmc_prel__rem;   //!
   TBranch        *b_depmcsic_protonabsorber;   //!
   TBranch        *b_depmcssi_protonabsorber_;   //!
   TBranch        *b_depmcssi_protonabsorber_nsteps;   //!
   TBranch        *b_depmcssi_protonabsorber_ftime;   //!
   TBranch        *b_depmcssi_protonabsorber_ltime;   //!
   TBranch        *b_depmcssi_protonabsorber_de;   //!
   TBranch        *b_depmcssi_protonabsorber_dp;   //!
   TBranch        *b_depmcsic_stoppingtarget;   //!
   TBranch        *b_depmcssi_stoppingtarget_;   //!
   TBranch        *b_depmcssi_stoppingtarget_nsteps;   //!
   TBranch        *b_depmcssi_stoppingtarget_ftime;   //!
   TBranch        *b_depmcssi_stoppingtarget_ltime;   //!
   TBranch        *b_depmcssi_stoppingtarget_de;   //!
   TBranch        *b_depmcssi_stoppingtarget_dp;   //!
   TBranch        *b_uem_;   //!
   TBranch        *b_uem_status;   //!
   TBranch        *b_uem_goodfit;   //!
   TBranch        *b_uem_seedalg;   //!
   TBranch        *b_uem_fitalg;   //!
   TBranch        *b_uem_pdg;   //!
   TBranch        *b_uem_nhits;   //!
   TBranch        *b_uem_ndof;   //!
   TBranch        *b_uem_nactive;   //!
   TBranch        *b_uem_ndouble;   //!
   TBranch        *b_uem_ndactive;   //!
   TBranch        *b_uem_nplanes;   //!
   TBranch        *b_uem_planespan;   //!
   TBranch        *b_uem_nnullambig;   //!
   TBranch        *b_uem_nmat;   //!
   TBranch        *b_uem_nmatactive;   //!
   TBranch        *b_uem_nesel;   //!
   TBranch        *b_uem_nrsel;   //!
   TBranch        *b_uem_ntsel;   //!
   TBranch        *b_uem_nbkg;   //!
   TBranch        *b_uem_nsel;   //!
   TBranch        *b_uem_nseg;   //!
   TBranch        *b_uem_chisq;   //!
   TBranch        *b_uem_fitcon;   //!
   TBranch        *b_uem_radlen;   //!
   TBranch        *b_uem_firsthit;   //!
   TBranch        *b_uem_lasthit;   //!
   TBranch        *b_uem_maxgap;   //!
   TBranch        *b_uem_avggap;   //!
   TBranch        *b_uem_avgedep;   //!
   TBranch        *b_uemfit;   //!
   TBranch        *b_uemlh;   //!
   TBranch        *b_uemtch_;   //!
   TBranch        *b_uemtch_active;   //!
   TBranch        *b_uemtch_did;   //!
   TBranch        *b_uemtch_poca_fCoordinates_fX;   //!
   TBranch        *b_uemtch_poca_fCoordinates_fY;   //!
   TBranch        *b_uemtch_poca_fCoordinates_fZ;   //!
   TBranch        *b_uemtch_mom_fCoordinates_fX;   //!
   TBranch        *b_uemtch_mom_fCoordinates_fY;   //!
   TBranch        *b_uemtch_mom_fCoordinates_fZ;   //!
   TBranch        *b_uemtch_cdepth;   //!
   TBranch        *b_uemtch_trkdepth;   //!
   TBranch        *b_uemtch_dphidot;   //!
   TBranch        *b_uemtch_doca;   //!
   TBranch        *b_uemtch_dt;   //!
   TBranch        *b_uemtch_ptoca;   //!
   TBranch        *b_uemtch_tocavar;   //!
   TBranch        *b_uemtch_tresid;   //!
   TBranch        *b_uemtch_tresidmvar;   //!
   TBranch        *b_uemtch_tresidpvar;   //!
   TBranch        *b_uemtch_ctime;   //!
   TBranch        *b_uemtch_ctimeerr;   //!
   TBranch        *b_uemtch_csize;   //!
   TBranch        *b_uemtch_edep;   //!
   TBranch        *b_uemtch_edeperr;   //!
   TBranch        *b_uemtrkqual_result;   //!
   TBranch        *b_uep_;   //!
   TBranch        *b_uep_status;   //!
   TBranch        *b_uep_goodfit;   //!
   TBranch        *b_uep_seedalg;   //!
   TBranch        *b_uep_fitalg;   //!
   TBranch        *b_uep_pdg;   //!
   TBranch        *b_uep_nhits;   //!
   TBranch        *b_uep_ndof;   //!
   TBranch        *b_uep_nactive;   //!
   TBranch        *b_uep_ndouble;   //!
   TBranch        *b_uep_ndactive;   //!
   TBranch        *b_uep_nplanes;   //!
   TBranch        *b_uep_planespan;   //!
   TBranch        *b_uep_nnullambig;   //!
   TBranch        *b_uep_nmat;   //!
   TBranch        *b_uep_nmatactive;   //!
   TBranch        *b_uep_nesel;   //!
   TBranch        *b_uep_nrsel;   //!
   TBranch        *b_uep_ntsel;   //!
   TBranch        *b_uep_nbkg;   //!
   TBranch        *b_uep_nsel;   //!
   TBranch        *b_uep_nseg;   //!
   TBranch        *b_uep_chisq;   //!
   TBranch        *b_uep_fitcon;   //!
   TBranch        *b_uep_radlen;   //!
   TBranch        *b_uep_firsthit;   //!
   TBranch        *b_uep_lasthit;   //!
   TBranch        *b_uep_maxgap;   //!
   TBranch        *b_uep_avggap;   //!
   TBranch        *b_uep_avgedep;   //!
   TBranch        *b_uepfit;   //!
   TBranch        *b_ueplh;   //!
   TBranch        *b_ueptch_;   //!
   TBranch        *b_ueptch_active;   //!
   TBranch        *b_ueptch_did;   //!
   TBranch        *b_ueptch_poca_fCoordinates_fX;   //!
   TBranch        *b_ueptch_poca_fCoordinates_fY;   //!
   TBranch        *b_ueptch_poca_fCoordinates_fZ;   //!
   TBranch        *b_ueptch_mom_fCoordinates_fX;   //!
   TBranch        *b_ueptch_mom_fCoordinates_fY;   //!
   TBranch        *b_ueptch_mom_fCoordinates_fZ;   //!
   TBranch        *b_ueptch_cdepth;   //!
   TBranch        *b_ueptch_trkdepth;   //!
   TBranch        *b_ueptch_dphidot;   //!
   TBranch        *b_ueptch_doca;   //!
   TBranch        *b_ueptch_dt;   //!
   TBranch        *b_ueptch_ptoca;   //!
   TBranch        *b_ueptch_tocavar;   //!
   TBranch        *b_ueptch_tresid;   //!
   TBranch        *b_ueptch_tresidmvar;   //!
   TBranch        *b_ueptch_tresidpvar;   //!
   TBranch        *b_ueptch_ctime;   //!
   TBranch        *b_ueptch_ctimeerr;   //!
   TBranch        *b_ueptch_csize;   //!
   TBranch        *b_ueptch_edep;   //!
   TBranch        *b_ueptch_edeperr;   //!
   TBranch        *b_ueptrkqual_result;   //!
   TBranch        *b_dmm_;   //!
   TBranch        *b_dmm_status;   //!
   TBranch        *b_dmm_goodfit;   //!
   TBranch        *b_dmm_seedalg;   //!
   TBranch        *b_dmm_fitalg;   //!
   TBranch        *b_dmm_pdg;   //!
   TBranch        *b_dmm_nhits;   //!
   TBranch        *b_dmm_ndof;   //!
   TBranch        *b_dmm_nactive;   //!
   TBranch        *b_dmm_ndouble;   //!
   TBranch        *b_dmm_ndactive;   //!
   TBranch        *b_dmm_nplanes;   //!
   TBranch        *b_dmm_planespan;   //!
   TBranch        *b_dmm_nnullambig;   //!
   TBranch        *b_dmm_nmat;   //!
   TBranch        *b_dmm_nmatactive;   //!
   TBranch        *b_dmm_nesel;   //!
   TBranch        *b_dmm_nrsel;   //!
   TBranch        *b_dmm_ntsel;   //!
   TBranch        *b_dmm_nbkg;   //!
   TBranch        *b_dmm_nsel;   //!
   TBranch        *b_dmm_nseg;   //!
   TBranch        *b_dmm_chisq;   //!
   TBranch        *b_dmm_fitcon;   //!
   TBranch        *b_dmm_radlen;   //!
   TBranch        *b_dmm_firsthit;   //!
   TBranch        *b_dmm_lasthit;   //!
   TBranch        *b_dmm_maxgap;   //!
   TBranch        *b_dmm_avggap;   //!
   TBranch        *b_dmm_avgedep;   //!
   TBranch        *b_dmmfit;   //!
   TBranch        *b_dmmlh;   //!
   TBranch        *b_dmmtch_;   //!
   TBranch        *b_dmmtch_active;   //!
   TBranch        *b_dmmtch_did;   //!
   TBranch        *b_dmmtch_poca_fCoordinates_fX;   //!
   TBranch        *b_dmmtch_poca_fCoordinates_fY;   //!
   TBranch        *b_dmmtch_poca_fCoordinates_fZ;   //!
   TBranch        *b_dmmtch_mom_fCoordinates_fX;   //!
   TBranch        *b_dmmtch_mom_fCoordinates_fY;   //!
   TBranch        *b_dmmtch_mom_fCoordinates_fZ;   //!
   TBranch        *b_dmmtch_cdepth;   //!
   TBranch        *b_dmmtch_trkdepth;   //!
   TBranch        *b_dmmtch_dphidot;   //!
   TBranch        *b_dmmtch_doca;   //!
   TBranch        *b_dmmtch_dt;   //!
   TBranch        *b_dmmtch_ptoca;   //!
   TBranch        *b_dmmtch_tocavar;   //!
   TBranch        *b_dmmtch_tresid;   //!
   TBranch        *b_dmmtch_tresidmvar;   //!
   TBranch        *b_dmmtch_tresidpvar;   //!
   TBranch        *b_dmmtch_ctime;   //!
   TBranch        *b_dmmtch_ctimeerr;   //!
   TBranch        *b_dmmtch_csize;   //!
   TBranch        *b_dmmtch_edep;   //!
   TBranch        *b_dmmtch_edeperr;   //!
   TBranch        *b_dmmtrkqual_result;   //!
   TBranch        *b_dmp_;   //!
   TBranch        *b_dmp_status;   //!
   TBranch        *b_dmp_goodfit;   //!
   TBranch        *b_dmp_seedalg;   //!
   TBranch        *b_dmp_fitalg;   //!
   TBranch        *b_dmp_pdg;   //!
   TBranch        *b_dmp_nhits;   //!
   TBranch        *b_dmp_ndof;   //!
   TBranch        *b_dmp_nactive;   //!
   TBranch        *b_dmp_ndouble;   //!
   TBranch        *b_dmp_ndactive;   //!
   TBranch        *b_dmp_nplanes;   //!
   TBranch        *b_dmp_planespan;   //!
   TBranch        *b_dmp_nnullambig;   //!
   TBranch        *b_dmp_nmat;   //!
   TBranch        *b_dmp_nmatactive;   //!
   TBranch        *b_dmp_nesel;   //!
   TBranch        *b_dmp_nrsel;   //!
   TBranch        *b_dmp_ntsel;   //!
   TBranch        *b_dmp_nbkg;   //!
   TBranch        *b_dmp_nsel;   //!
   TBranch        *b_dmp_nseg;   //!
   TBranch        *b_dmp_chisq;   //!
   TBranch        *b_dmp_fitcon;   //!
   TBranch        *b_dmp_radlen;   //!
   TBranch        *b_dmp_firsthit;   //!
   TBranch        *b_dmp_lasthit;   //!
   TBranch        *b_dmp_maxgap;   //!
   TBranch        *b_dmp_avggap;   //!
   TBranch        *b_dmp_avgedep;   //!
   TBranch        *b_dmpfit;   //!
   TBranch        *b_dmplh;   //!
   TBranch        *b_dmptch_;   //!
   TBranch        *b_dmptch_active;   //!
   TBranch        *b_dmptch_did;   //!
   TBranch        *b_dmptch_poca_fCoordinates_fX;   //!
   TBranch        *b_dmptch_poca_fCoordinates_fY;   //!
   TBranch        *b_dmptch_poca_fCoordinates_fZ;   //!
   TBranch        *b_dmptch_mom_fCoordinates_fX;   //!
   TBranch        *b_dmptch_mom_fCoordinates_fY;   //!
   TBranch        *b_dmptch_mom_fCoordinates_fZ;   //!
   TBranch        *b_dmptch_cdepth;   //!
   TBranch        *b_dmptch_trkdepth;   //!
   TBranch        *b_dmptch_dphidot;   //!
   TBranch        *b_dmptch_doca;   //!
   TBranch        *b_dmptch_dt;   //!
   TBranch        *b_dmptch_ptoca;   //!
   TBranch        *b_dmptch_tocavar;   //!
   TBranch        *b_dmptch_tresid;   //!
   TBranch        *b_dmptch_tresidmvar;   //!
   TBranch        *b_dmptch_tresidpvar;   //!
   TBranch        *b_dmptch_ctime;   //!
   TBranch        *b_dmptch_ctimeerr;   //!
   TBranch        *b_dmptch_csize;   //!
   TBranch        *b_dmptch_edep;   //!
   TBranch        *b_dmptch_edeperr;   //!
   TBranch        *b_dmptrkqual_result;   //!
   TBranch        *b_umm_;   //!
   TBranch        *b_umm_status;   //!
   TBranch        *b_umm_goodfit;   //!
   TBranch        *b_umm_seedalg;   //!
   TBranch        *b_umm_fitalg;   //!
   TBranch        *b_umm_pdg;   //!
   TBranch        *b_umm_nhits;   //!
   TBranch        *b_umm_ndof;   //!
   TBranch        *b_umm_nactive;   //!
   TBranch        *b_umm_ndouble;   //!
   TBranch        *b_umm_ndactive;   //!
   TBranch        *b_umm_nplanes;   //!
   TBranch        *b_umm_planespan;   //!
   TBranch        *b_umm_nnullambig;   //!
   TBranch        *b_umm_nmat;   //!
   TBranch        *b_umm_nmatactive;   //!
   TBranch        *b_umm_nesel;   //!
   TBranch        *b_umm_nrsel;   //!
   TBranch        *b_umm_ntsel;   //!
   TBranch        *b_umm_nbkg;   //!
   TBranch        *b_umm_nsel;   //!
   TBranch        *b_umm_nseg;   //!
   TBranch        *b_umm_chisq;   //!
   TBranch        *b_umm_fitcon;   //!
   TBranch        *b_umm_radlen;   //!
   TBranch        *b_umm_firsthit;   //!
   TBranch        *b_umm_lasthit;   //!
   TBranch        *b_umm_maxgap;   //!
   TBranch        *b_umm_avggap;   //!
   TBranch        *b_umm_avgedep;   //!
   TBranch        *b_ummfit;   //!
   TBranch        *b_ummlh;   //!
   TBranch        *b_ummtch_;   //!
   TBranch        *b_ummtch_active;   //!
   TBranch        *b_ummtch_did;   //!
   TBranch        *b_ummtch_poca_fCoordinates_fX;   //!
   TBranch        *b_ummtch_poca_fCoordinates_fY;   //!
   TBranch        *b_ummtch_poca_fCoordinates_fZ;   //!
   TBranch        *b_ummtch_mom_fCoordinates_fX;   //!
   TBranch        *b_ummtch_mom_fCoordinates_fY;   //!
   TBranch        *b_ummtch_mom_fCoordinates_fZ;   //!
   TBranch        *b_ummtch_cdepth;   //!
   TBranch        *b_ummtch_trkdepth;   //!
   TBranch        *b_ummtch_dphidot;   //!
   TBranch        *b_ummtch_doca;   //!
   TBranch        *b_ummtch_dt;   //!
   TBranch        *b_ummtch_ptoca;   //!
   TBranch        *b_ummtch_tocavar;   //!
   TBranch        *b_ummtch_tresid;   //!
   TBranch        *b_ummtch_tresidmvar;   //!
   TBranch        *b_ummtch_tresidpvar;   //!
   TBranch        *b_ummtch_ctime;   //!
   TBranch        *b_ummtch_ctimeerr;   //!
   TBranch        *b_ummtch_csize;   //!
   TBranch        *b_ummtch_edep;   //!
   TBranch        *b_ummtch_edeperr;   //!
   TBranch        *b_ummtrkqual_result;   //!
   TBranch        *b_ump_;   //!
   TBranch        *b_ump_status;   //!
   TBranch        *b_ump_goodfit;   //!
   TBranch        *b_ump_seedalg;   //!
   TBranch        *b_ump_fitalg;   //!
   TBranch        *b_ump_pdg;   //!
   TBranch        *b_ump_nhits;   //!
   TBranch        *b_ump_ndof;   //!
   TBranch        *b_ump_nactive;   //!
   TBranch        *b_ump_ndouble;   //!
   TBranch        *b_ump_ndactive;   //!
   TBranch        *b_ump_nplanes;   //!
   TBranch        *b_ump_planespan;   //!
   TBranch        *b_ump_nnullambig;   //!
   TBranch        *b_ump_nmat;   //!
   TBranch        *b_ump_nmatactive;   //!
   TBranch        *b_ump_nesel;   //!
   TBranch        *b_ump_nrsel;   //!
   TBranch        *b_ump_ntsel;   //!
   TBranch        *b_ump_nbkg;   //!
   TBranch        *b_ump_nsel;   //!
   TBranch        *b_ump_nseg;   //!
   TBranch        *b_ump_chisq;   //!
   TBranch        *b_ump_fitcon;   //!
   TBranch        *b_ump_radlen;   //!
   TBranch        *b_ump_firsthit;   //!
   TBranch        *b_ump_lasthit;   //!
   TBranch        *b_ump_maxgap;   //!
   TBranch        *b_ump_avggap;   //!
   TBranch        *b_ump_avgedep;   //!
   TBranch        *b_umpfit;   //!
   TBranch        *b_umplh;   //!
   TBranch        *b_umptch_;   //!
   TBranch        *b_umptch_active;   //!
   TBranch        *b_umptch_did;   //!
   TBranch        *b_umptch_poca_fCoordinates_fX;   //!
   TBranch        *b_umptch_poca_fCoordinates_fY;   //!
   TBranch        *b_umptch_poca_fCoordinates_fZ;   //!
   TBranch        *b_umptch_mom_fCoordinates_fX;   //!
   TBranch        *b_umptch_mom_fCoordinates_fY;   //!
   TBranch        *b_umptch_mom_fCoordinates_fZ;   //!
   TBranch        *b_umptch_cdepth;   //!
   TBranch        *b_umptch_trkdepth;   //!
   TBranch        *b_umptch_dphidot;   //!
   TBranch        *b_umptch_doca;   //!
   TBranch        *b_umptch_dt;   //!
   TBranch        *b_umptch_ptoca;   //!
   TBranch        *b_umptch_tocavar;   //!
   TBranch        *b_umptch_tresid;   //!
   TBranch        *b_umptch_tresidmvar;   //!
   TBranch        *b_umptch_tresidpvar;   //!
   TBranch        *b_umptch_ctime;   //!
   TBranch        *b_umptch_ctimeerr;   //!
   TBranch        *b_umptch_csize;   //!
   TBranch        *b_umptch_edep;   //!
   TBranch        *b_umptch_edeperr;   //!
   TBranch        *b_umptrkqual_result;   //!
   TBranch        *b_crvsummary_totalPEs;   //!
   TBranch        *b_crvsummary_nHitCounters;   //!
   TBranch        *b_crvcoincs_;   //!
   TBranch        *b_crvcoincs_sectorType;   //!
   TBranch        *b_crvcoincs_pos_fCoordinates_fX;   //!
   TBranch        *b_crvcoincs_pos_fCoordinates_fY;   //!
   TBranch        *b_crvcoincs_pos_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincs_timeStart;   //!
   TBranch        *b_crvcoincs_timeEnd;   //!
   TBranch        *b_crvcoincs_time;   //!
   TBranch        *b_crvcoincs_PEs;   //!
   TBranch        *b_crvcoincs_PEsPerLayer;   //!
   TBranch        *b_crvcoincs_nHits;   //!
   TBranch        *b_crvcoincs_nLayers;   //!
   TBranch        *b_crvcoincs_angle;   //!
   TBranch        *b_crvsummarymc_totalEnergyDeposited;   //!
   TBranch        *b_crvsummarymc_minPathLayer;   //!
   TBranch        *b_crvsummarymc_maxPathLayer;   //!
   TBranch        *b_crvsummarymc_nHitCounters;   //!
   TBranch        *b_crvsummarymc_pos_fCoordinates_fX;   //!
   TBranch        *b_crvsummarymc_pos_fCoordinates_fY;   //!
   TBranch        *b_crvsummarymc_pos_fCoordinates_fZ;   //!
   TBranch        *b_crvsummarymc_sectorNumber;   //!
   TBranch        *b_crvsummarymc_sectorType;   //!
   TBranch        *b_crvsummarymc_pdgId;   //!
   TBranch        *b_crvcoincsmc_;   //!
   TBranch        *b_crvcoincsmc_valid;   //!
   TBranch        *b_crvcoincsmc_pdgId;   //!
   TBranch        *b_crvcoincsmc_primaryPdgId;   //!
   TBranch        *b_crvcoincsmc_primaryE;   //!
   TBranch        *b_crvcoincsmc_primary_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmc_primary_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmc_primary_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmc_parentPdgId;   //!
   TBranch        *b_crvcoincsmc_parentE;   //!
   TBranch        *b_crvcoincsmc_parent_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmc_parent_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmc_parent_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmc_gparentPdgId;   //!
   TBranch        *b_crvcoincsmc_gparentE;   //!
   TBranch        *b_crvcoincsmc_gparent_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmc_gparent_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmc_gparent_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmc_pos_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmc_pos_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmc_pos_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmc_time;   //!
   TBranch        *b_crvcoincsmc_depositedEnergy;   //!
   TBranch        *b_crvcoincsmcplane_;   //!
   TBranch        *b_crvcoincsmcplane_pdgId;   //!
   TBranch        *b_crvcoincsmcplane_primaryPdgId;   //!
   TBranch        *b_crvcoincsmcplane_primaryE;   //!
   TBranch        *b_crvcoincsmcplane_primary_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmcplane_primary_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmcplane_primary_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmcplane_pos_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmcplane_pos_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmcplane_pos_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmcplane_dir_fCoordinates_fX;   //!
   TBranch        *b_crvcoincsmcplane_dir_fCoordinates_fY;   //!
   TBranch        *b_crvcoincsmcplane_dir_fCoordinates_fZ;   //!
   TBranch        *b_crvcoincsmcplane_time;   //!
   TBranch        *b_crvcoincsmcplane_kineticEnergy;   //!
   TBranch        *b_crvcoincsmcplane_dataSource;   //!
   TBranch        *b_evtwt_;   //!

   trkana(TTree *tree=0);
   virtual ~trkana();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef trkana_cxx
trkana::trkana(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/exp/mu2e/app/users/sophie/ProductionEnsembles/pass0a/output-1month-95MeVc/nts.owner.trkana-reco.version.sequencer.root:/TrkAna");
      dir->GetObject("trkana",tree);

   }
   Init(tree);
}

trkana::~trkana()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t trkana::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t trkana::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void trkana::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   demfit = 0;
   demlh = 0;
   demmcsim = 0;
   demmcvd = 0;
   demmcsic_protonabsorber = 0;
   demmcsic_stoppingtarget = 0;
   depfit = 0;
   deplh = 0;
   depmcsim = 0;
   depmcvd = 0;
   depmcsic_protonabsorber = 0;
   depmcsic_stoppingtarget = 0;
   uemfit = 0;
   uemlh = 0;
   uepfit = 0;
   ueplh = 0;
   dmmfit = 0;
   dmmlh = 0;
   dmpfit = 0;
   dmplh = 0;
   ummfit = 0;
   ummlh = 0;
   umpfit = 0;
   umplh = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evtinfo.event", &evtinfo_event, &b_evtinfo_event);
   fChain->SetBranchAddress("evtinfo.run", &evtinfo_run, &b_evtinfo_run);
   fChain->SetBranchAddress("evtinfo.subrun", &evtinfo_subrun, &b_evtinfo_subrun);
   fChain->SetBranchAddress("evtinfo.nprotons", &evtinfo_nprotons, &b_evtinfo_nprotons);
   fChain->SetBranchAddress("evtinfo.pbtime", &evtinfo_pbtime, &b_evtinfo_pbtime);
   fChain->SetBranchAddress("evtinfo.pbterr", &evtinfo_pbterr, &b_evtinfo_pbterr);
   fChain->SetBranchAddress("evtinfomc.nprotons", &evtinfomc_nprotons, &b_evtinfomc_nprotons);
   fChain->SetBranchAddress("evtinfomc.pbtime", &evtinfomc_pbtime, &b_evtinfomc_pbtime);
   fChain->SetBranchAddress("hcnt.nsd", &hcnt_nsd, &b_hcnt_nsd);
   fChain->SetBranchAddress("hcnt.nesel", &hcnt_nesel, &b_hcnt_nesel);
   fChain->SetBranchAddress("hcnt.nrsel", &hcnt_nrsel, &b_hcnt_nrsel);
   fChain->SetBranchAddress("hcnt.ntsel", &hcnt_ntsel, &b_hcnt_ntsel);
   fChain->SetBranchAddress("hcnt.nbkg", &hcnt_nbkg, &b_hcnt_nbkg);
   fChain->SetBranchAddress("tcnt.ndem", &tcnt_ndem, &b_tcnt_ndem);
   fChain->SetBranchAddress("tcnt.ndep", &tcnt_ndep, &b_tcnt_ndep);
   fChain->SetBranchAddress("tcnt.nuem", &tcnt_nuem, &b_tcnt_nuem);
   fChain->SetBranchAddress("tcnt.nuep", &tcnt_nuep, &b_tcnt_nuep);
   fChain->SetBranchAddress("tcnt.ndmm", &tcnt_ndmm, &b_tcnt_ndmm);
   fChain->SetBranchAddress("tcnt.ndmp", &tcnt_ndmp, &b_tcnt_ndmp);
   fChain->SetBranchAddress("tcnt.numm", &tcnt_numm, &b_tcnt_numm);
   fChain->SetBranchAddress("tcnt.nump", &tcnt_nump, &b_tcnt_nump);
   fChain->SetBranchAddress("dem", &dem_, &b_dem_);
   fChain->SetBranchAddress("dem.status", dem_status, &b_dem_status);
   fChain->SetBranchAddress("dem.goodfit", dem_goodfit, &b_dem_goodfit);
   fChain->SetBranchAddress("dem.seedalg", dem_seedalg, &b_dem_seedalg);
   fChain->SetBranchAddress("dem.fitalg", dem_fitalg, &b_dem_fitalg);
   fChain->SetBranchAddress("dem.pdg", dem_pdg, &b_dem_pdg);
   fChain->SetBranchAddress("dem.nhits", dem_nhits, &b_dem_nhits);
   fChain->SetBranchAddress("dem.ndof", dem_ndof, &b_dem_ndof);
   fChain->SetBranchAddress("dem.nactive", dem_nactive, &b_dem_nactive);
   fChain->SetBranchAddress("dem.ndouble", dem_ndouble, &b_dem_ndouble);
   fChain->SetBranchAddress("dem.ndactive", dem_ndactive, &b_dem_ndactive);
   fChain->SetBranchAddress("dem.nplanes", dem_nplanes, &b_dem_nplanes);
   fChain->SetBranchAddress("dem.planespan", dem_planespan, &b_dem_planespan);
   fChain->SetBranchAddress("dem.nnullambig", dem_nnullambig, &b_dem_nnullambig);
   fChain->SetBranchAddress("dem.nmat", dem_nmat, &b_dem_nmat);
   fChain->SetBranchAddress("dem.nmatactive", dem_nmatactive, &b_dem_nmatactive);
   fChain->SetBranchAddress("dem.nesel", dem_nesel, &b_dem_nesel);
   fChain->SetBranchAddress("dem.nrsel", dem_nrsel, &b_dem_nrsel);
   fChain->SetBranchAddress("dem.ntsel", dem_ntsel, &b_dem_ntsel);
   fChain->SetBranchAddress("dem.nbkg", dem_nbkg, &b_dem_nbkg);
   fChain->SetBranchAddress("dem.nsel", dem_nsel, &b_dem_nsel);
   fChain->SetBranchAddress("dem.nseg", dem_nseg, &b_dem_nseg);
   fChain->SetBranchAddress("dem.chisq", dem_chisq, &b_dem_chisq);
   fChain->SetBranchAddress("dem.fitcon", dem_fitcon, &b_dem_fitcon);
   fChain->SetBranchAddress("dem.radlen", dem_radlen, &b_dem_radlen);
   fChain->SetBranchAddress("dem.firsthit", dem_firsthit, &b_dem_firsthit);
   fChain->SetBranchAddress("dem.lasthit", dem_lasthit, &b_dem_lasthit);
   fChain->SetBranchAddress("dem.maxgap", dem_maxgap, &b_dem_maxgap);
   fChain->SetBranchAddress("dem.avggap", dem_avggap, &b_dem_avggap);
   fChain->SetBranchAddress("dem.avgedep", dem_avgedep, &b_dem_avgedep);
   fChain->SetBranchAddress("demfit", &demfit, &b_demfit);
   fChain->SetBranchAddress("demlh", &demlh, &b_demlh);
   fChain->SetBranchAddress("demtch", &demtch_, &b_demtch_);
   fChain->SetBranchAddress("demtch.active", demtch_active, &b_demtch_active);
   fChain->SetBranchAddress("demtch.did", demtch_did, &b_demtch_did);
   fChain->SetBranchAddress("demtch.poca.fCoordinates.fX", demtch_poca_fCoordinates_fX, &b_demtch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("demtch.poca.fCoordinates.fY", demtch_poca_fCoordinates_fY, &b_demtch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("demtch.poca.fCoordinates.fZ", demtch_poca_fCoordinates_fZ, &b_demtch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("demtch.mom.fCoordinates.fX", demtch_mom_fCoordinates_fX, &b_demtch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("demtch.mom.fCoordinates.fY", demtch_mom_fCoordinates_fY, &b_demtch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("demtch.mom.fCoordinates.fZ", demtch_mom_fCoordinates_fZ, &b_demtch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("demtch.cdepth", demtch_cdepth, &b_demtch_cdepth);
   fChain->SetBranchAddress("demtch.trkdepth", demtch_trkdepth, &b_demtch_trkdepth);
   fChain->SetBranchAddress("demtch.dphidot", demtch_dphidot, &b_demtch_dphidot);
   fChain->SetBranchAddress("demtch.doca", demtch_doca, &b_demtch_doca);
   fChain->SetBranchAddress("demtch.dt", demtch_dt, &b_demtch_dt);
   fChain->SetBranchAddress("demtch.ptoca", demtch_ptoca, &b_demtch_ptoca);
   fChain->SetBranchAddress("demtch.tocavar", demtch_tocavar, &b_demtch_tocavar);
   fChain->SetBranchAddress("demtch.tresid", demtch_tresid, &b_demtch_tresid);
   fChain->SetBranchAddress("demtch.tresidmvar", demtch_tresidmvar, &b_demtch_tresidmvar);
   fChain->SetBranchAddress("demtch.tresidpvar", demtch_tresidpvar, &b_demtch_tresidpvar);
   fChain->SetBranchAddress("demtch.ctime", demtch_ctime, &b_demtch_ctime);
   fChain->SetBranchAddress("demtch.ctimeerr", demtch_ctimeerr, &b_demtch_ctimeerr);
   fChain->SetBranchAddress("demtch.csize", demtch_csize, &b_demtch_csize);
   fChain->SetBranchAddress("demtch.edep", demtch_edep, &b_demtch_edep);
   fChain->SetBranchAddress("demtch.edeperr", demtch_edeperr, &b_demtch_edeperr);
   fChain->SetBranchAddress("result", &result, &b_demtrkqual_result);
   fChain->SetBranchAddress("demmc", &demmc_, &b_demmc_);
   fChain->SetBranchAddress("demmc.valid", demmc_valid, &b_demmc_valid);
   fChain->SetBranchAddress("demmc.ndigi", demmc_ndigi, &b_demmc_ndigi);
   fChain->SetBranchAddress("demmc.ndigigood", demmc_ndigigood, &b_demmc_ndigigood);
   fChain->SetBranchAddress("demmc.nhits", demmc_nhits, &b_demmc_nhits);
   fChain->SetBranchAddress("demmc.nactive", demmc_nactive, &b_demmc_nactive);
   fChain->SetBranchAddress("demmc.nambig", demmc_nambig, &b_demmc_nambig);
   fChain->SetBranchAddress("demmc.maxr", demmc_maxr, &b_demmc_maxr);
   fChain->SetBranchAddress("demmc.rad", demmc_rad, &b_demmc_rad);
   fChain->SetBranchAddress("demmc.lam", demmc_lam, &b_demmc_lam);
   fChain->SetBranchAddress("demmc.cx", demmc_cx, &b_demmc_cx);
   fChain->SetBranchAddress("demmc.cy", demmc_cy, &b_demmc_cy);
   fChain->SetBranchAddress("demmc.phi0", demmc_phi0, &b_demmc_phi0);
   fChain->SetBranchAddress("demmc.t0", demmc_t0, &b_demmc_t0);
   fChain->SetBranchAddress("demmcsim", &demmcsim, &b_demmcsim);
   fChain->SetBranchAddress("demmcvd", &demmcvd, &b_demmcvd);
   fChain->SetBranchAddress("demtchmc", &demtchmc_, &b_demtchmc_);
   fChain->SetBranchAddress("demtchmc.nsim", demtchmc_nsim, &b_demtchmc_nsim);
   fChain->SetBranchAddress("demtchmc.etot", demtchmc_etot, &b_demtchmc_etot);
   fChain->SetBranchAddress("demtchmc.tavg", demtchmc_tavg, &b_demtchmc_tavg);
   fChain->SetBranchAddress("demtchmc.eprimary", demtchmc_eprimary, &b_demtchmc_eprimary);
   fChain->SetBranchAddress("demtchmc.tprimary", demtchmc_tprimary, &b_demtchmc_tprimary);
   fChain->SetBranchAddress("demtchmc.prel._rel", demtchmc_prel__rel, &b_demtchmc_prel__rel);
   fChain->SetBranchAddress("demtchmc.prel._rem", demtchmc_prel__rem, &b_demtchmc_prel__rem);
   fChain->SetBranchAddress("demmcsic_protonabsorber", &demmcsic_protonabsorber, &b_demmcsic_protonabsorber);
   fChain->SetBranchAddress("demmcssi_protonabsorber", &demmcssi_protonabsorber_, &b_demmcssi_protonabsorber_);
   fChain->SetBranchAddress("demmcssi_protonabsorber.nsteps", demmcssi_protonabsorber_nsteps, &b_demmcssi_protonabsorber_nsteps);
   fChain->SetBranchAddress("demmcssi_protonabsorber.ftime", demmcssi_protonabsorber_ftime, &b_demmcssi_protonabsorber_ftime);
   fChain->SetBranchAddress("demmcssi_protonabsorber.ltime", demmcssi_protonabsorber_ltime, &b_demmcssi_protonabsorber_ltime);
   fChain->SetBranchAddress("demmcssi_protonabsorber.de", demmcssi_protonabsorber_de, &b_demmcssi_protonabsorber_de);
   fChain->SetBranchAddress("demmcssi_protonabsorber.dp", demmcssi_protonabsorber_dp, &b_demmcssi_protonabsorber_dp);
   fChain->SetBranchAddress("demmcsic_stoppingtarget", &demmcsic_stoppingtarget, &b_demmcsic_stoppingtarget);
   fChain->SetBranchAddress("demmcssi_stoppingtarget", &demmcssi_stoppingtarget_, &b_demmcssi_stoppingtarget_);
   fChain->SetBranchAddress("demmcssi_stoppingtarget.nsteps", demmcssi_stoppingtarget_nsteps, &b_demmcssi_stoppingtarget_nsteps);
   fChain->SetBranchAddress("demmcssi_stoppingtarget.ftime", demmcssi_stoppingtarget_ftime, &b_demmcssi_stoppingtarget_ftime);
   fChain->SetBranchAddress("demmcssi_stoppingtarget.ltime", demmcssi_stoppingtarget_ltime, &b_demmcssi_stoppingtarget_ltime);
   fChain->SetBranchAddress("demmcssi_stoppingtarget.de", demmcssi_stoppingtarget_de, &b_demmcssi_stoppingtarget_de);
   fChain->SetBranchAddress("demmcssi_stoppingtarget.dp", demmcssi_stoppingtarget_dp, &b_demmcssi_stoppingtarget_dp);
   fChain->SetBranchAddress("dep", &dep_, &b_dep_);
   fChain->SetBranchAddress("dep.status", dep_status, &b_dep_status);
   fChain->SetBranchAddress("dep.goodfit", dep_goodfit, &b_dep_goodfit);
   fChain->SetBranchAddress("dep.seedalg", dep_seedalg, &b_dep_seedalg);
   fChain->SetBranchAddress("dep.fitalg", dep_fitalg, &b_dep_fitalg);
   fChain->SetBranchAddress("dep.pdg", dep_pdg, &b_dep_pdg);
   fChain->SetBranchAddress("dep.nhits", dep_nhits, &b_dep_nhits);
   fChain->SetBranchAddress("dep.ndof", dep_ndof, &b_dep_ndof);
   fChain->SetBranchAddress("dep.nactive", dep_nactive, &b_dep_nactive);
   fChain->SetBranchAddress("dep.ndouble", dep_ndouble, &b_dep_ndouble);
   fChain->SetBranchAddress("dep.ndactive", dep_ndactive, &b_dep_ndactive);
   fChain->SetBranchAddress("dep.nplanes", dep_nplanes, &b_dep_nplanes);
   fChain->SetBranchAddress("dep.planespan", dep_planespan, &b_dep_planespan);
   fChain->SetBranchAddress("dep.nnullambig", dep_nnullambig, &b_dep_nnullambig);
   fChain->SetBranchAddress("dep.nmat", dep_nmat, &b_dep_nmat);
   fChain->SetBranchAddress("dep.nmatactive", dep_nmatactive, &b_dep_nmatactive);
   fChain->SetBranchAddress("dep.nesel", dep_nesel, &b_dep_nesel);
   fChain->SetBranchAddress("dep.nrsel", dep_nrsel, &b_dep_nrsel);
   fChain->SetBranchAddress("dep.ntsel", dep_ntsel, &b_dep_ntsel);
   fChain->SetBranchAddress("dep.nbkg", dep_nbkg, &b_dep_nbkg);
   fChain->SetBranchAddress("dep.nsel", dep_nsel, &b_dep_nsel);
   fChain->SetBranchAddress("dep.nseg", dep_nseg, &b_dep_nseg);
   fChain->SetBranchAddress("dep.chisq", dep_chisq, &b_dep_chisq);
   fChain->SetBranchAddress("dep.fitcon", dep_fitcon, &b_dep_fitcon);
   fChain->SetBranchAddress("dep.radlen", dep_radlen, &b_dep_radlen);
   fChain->SetBranchAddress("dep.firsthit", dep_firsthit, &b_dep_firsthit);
   fChain->SetBranchAddress("dep.lasthit", dep_lasthit, &b_dep_lasthit);
   fChain->SetBranchAddress("dep.maxgap", dep_maxgap, &b_dep_maxgap);
   fChain->SetBranchAddress("dep.avggap", dep_avggap, &b_dep_avggap);
   fChain->SetBranchAddress("dep.avgedep", dep_avgedep, &b_dep_avgedep);
   fChain->SetBranchAddress("depfit", &depfit, &b_depfit);
   fChain->SetBranchAddress("deplh", &deplh, &b_deplh);
   fChain->SetBranchAddress("deptch", &deptch_, &b_deptch_);
   fChain->SetBranchAddress("deptch.active", deptch_active, &b_deptch_active);
   fChain->SetBranchAddress("deptch.did", deptch_did, &b_deptch_did);
   fChain->SetBranchAddress("deptch.poca.fCoordinates.fX", deptch_poca_fCoordinates_fX, &b_deptch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("deptch.poca.fCoordinates.fY", deptch_poca_fCoordinates_fY, &b_deptch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("deptch.poca.fCoordinates.fZ", deptch_poca_fCoordinates_fZ, &b_deptch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("deptch.mom.fCoordinates.fX", deptch_mom_fCoordinates_fX, &b_deptch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("deptch.mom.fCoordinates.fY", deptch_mom_fCoordinates_fY, &b_deptch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("deptch.mom.fCoordinates.fZ", deptch_mom_fCoordinates_fZ, &b_deptch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("deptch.cdepth", deptch_cdepth, &b_deptch_cdepth);
   fChain->SetBranchAddress("deptch.trkdepth", deptch_trkdepth, &b_deptch_trkdepth);
   fChain->SetBranchAddress("deptch.dphidot", deptch_dphidot, &b_deptch_dphidot);
   fChain->SetBranchAddress("deptch.doca", deptch_doca, &b_deptch_doca);
   fChain->SetBranchAddress("deptch.dt", deptch_dt, &b_deptch_dt);
   fChain->SetBranchAddress("deptch.ptoca", deptch_ptoca, &b_deptch_ptoca);
   fChain->SetBranchAddress("deptch.tocavar", deptch_tocavar, &b_deptch_tocavar);
   fChain->SetBranchAddress("deptch.tresid", deptch_tresid, &b_deptch_tresid);
   fChain->SetBranchAddress("deptch.tresidmvar", deptch_tresidmvar, &b_deptch_tresidmvar);
   fChain->SetBranchAddress("deptch.tresidpvar", deptch_tresidpvar, &b_deptch_tresidpvar);
   fChain->SetBranchAddress("deptch.ctime", deptch_ctime, &b_deptch_ctime);
   fChain->SetBranchAddress("deptch.ctimeerr", deptch_ctimeerr, &b_deptch_ctimeerr);
   fChain->SetBranchAddress("deptch.csize", deptch_csize, &b_deptch_csize);
   fChain->SetBranchAddress("deptch.edep", deptch_edep, &b_deptch_edep);
   fChain->SetBranchAddress("deptch.edeperr", deptch_edeperr, &b_deptch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_deptrkqual_result);
   fChain->SetBranchAddress("depmc", &depmc_, &b_depmc_);
   fChain->SetBranchAddress("depmc.valid", depmc_valid, &b_depmc_valid);
   fChain->SetBranchAddress("depmc.ndigi", depmc_ndigi, &b_depmc_ndigi);
   fChain->SetBranchAddress("depmc.ndigigood", depmc_ndigigood, &b_depmc_ndigigood);
   fChain->SetBranchAddress("depmc.nhits", depmc_nhits, &b_depmc_nhits);
   fChain->SetBranchAddress("depmc.nactive", depmc_nactive, &b_depmc_nactive);
   fChain->SetBranchAddress("depmc.nambig", depmc_nambig, &b_depmc_nambig);
   fChain->SetBranchAddress("depmc.maxr", depmc_maxr, &b_depmc_maxr);
   fChain->SetBranchAddress("depmc.rad", depmc_rad, &b_depmc_rad);
   fChain->SetBranchAddress("depmc.lam", depmc_lam, &b_depmc_lam);
   fChain->SetBranchAddress("depmc.cx", depmc_cx, &b_depmc_cx);
   fChain->SetBranchAddress("depmc.cy", depmc_cy, &b_depmc_cy);
   fChain->SetBranchAddress("depmc.phi0", depmc_phi0, &b_depmc_phi0);
   fChain->SetBranchAddress("depmc.t0", depmc_t0, &b_depmc_t0);
   fChain->SetBranchAddress("depmcsim", &depmcsim, &b_depmcsim);
   fChain->SetBranchAddress("depmcvd", &depmcvd, &b_depmcvd);
   fChain->SetBranchAddress("deptchmc", &deptchmc_, &b_deptchmc_);
   fChain->SetBranchAddress("deptchmc.nsim", deptchmc_nsim, &b_deptchmc_nsim);
   fChain->SetBranchAddress("deptchmc.etot", deptchmc_etot, &b_deptchmc_etot);
   fChain->SetBranchAddress("deptchmc.tavg", deptchmc_tavg, &b_deptchmc_tavg);
   fChain->SetBranchAddress("deptchmc.eprimary", deptchmc_eprimary, &b_deptchmc_eprimary);
   fChain->SetBranchAddress("deptchmc.tprimary", deptchmc_tprimary, &b_deptchmc_tprimary);
   fChain->SetBranchAddress("deptchmc.prel._rel", deptchmc_prel__rel, &b_deptchmc_prel__rel);
   fChain->SetBranchAddress("deptchmc.prel._rem", deptchmc_prel__rem, &b_deptchmc_prel__rem);
   fChain->SetBranchAddress("depmcsic_protonabsorber", &depmcsic_protonabsorber, &b_depmcsic_protonabsorber);
   fChain->SetBranchAddress("depmcssi_protonabsorber", &depmcssi_protonabsorber_, &b_depmcssi_protonabsorber_);
   fChain->SetBranchAddress("depmcssi_protonabsorber.nsteps", depmcssi_protonabsorber_nsteps, &b_depmcssi_protonabsorber_nsteps);
   fChain->SetBranchAddress("depmcssi_protonabsorber.ftime", depmcssi_protonabsorber_ftime, &b_depmcssi_protonabsorber_ftime);
   fChain->SetBranchAddress("depmcssi_protonabsorber.ltime", depmcssi_protonabsorber_ltime, &b_depmcssi_protonabsorber_ltime);
   fChain->SetBranchAddress("depmcssi_protonabsorber.de", depmcssi_protonabsorber_de, &b_depmcssi_protonabsorber_de);
   fChain->SetBranchAddress("depmcssi_protonabsorber.dp", depmcssi_protonabsorber_dp, &b_depmcssi_protonabsorber_dp);
   fChain->SetBranchAddress("depmcsic_stoppingtarget", &depmcsic_stoppingtarget, &b_depmcsic_stoppingtarget);
   fChain->SetBranchAddress("depmcssi_stoppingtarget", &depmcssi_stoppingtarget_, &b_depmcssi_stoppingtarget_);
   fChain->SetBranchAddress("depmcssi_stoppingtarget.nsteps", depmcssi_stoppingtarget_nsteps, &b_depmcssi_stoppingtarget_nsteps);
   fChain->SetBranchAddress("depmcssi_stoppingtarget.ftime", depmcssi_stoppingtarget_ftime, &b_depmcssi_stoppingtarget_ftime);
   fChain->SetBranchAddress("depmcssi_stoppingtarget.ltime", depmcssi_stoppingtarget_ltime, &b_depmcssi_stoppingtarget_ltime);
   fChain->SetBranchAddress("depmcssi_stoppingtarget.de", depmcssi_stoppingtarget_de, &b_depmcssi_stoppingtarget_de);
   fChain->SetBranchAddress("depmcssi_stoppingtarget.dp", depmcssi_stoppingtarget_dp, &b_depmcssi_stoppingtarget_dp);
   fChain->SetBranchAddress("uem", &uem_, &b_uem_);
   fChain->SetBranchAddress("uem.status", uem_status, &b_uem_status);
   fChain->SetBranchAddress("uem.goodfit", uem_goodfit, &b_uem_goodfit);
   fChain->SetBranchAddress("uem.seedalg", uem_seedalg, &b_uem_seedalg);
   fChain->SetBranchAddress("uem.fitalg", uem_fitalg, &b_uem_fitalg);
   fChain->SetBranchAddress("uem.pdg", uem_pdg, &b_uem_pdg);
   fChain->SetBranchAddress("uem.nhits", uem_nhits, &b_uem_nhits);
   fChain->SetBranchAddress("uem.ndof", uem_ndof, &b_uem_ndof);
   fChain->SetBranchAddress("uem.nactive", uem_nactive, &b_uem_nactive);
   fChain->SetBranchAddress("uem.ndouble", uem_ndouble, &b_uem_ndouble);
   fChain->SetBranchAddress("uem.ndactive", uem_ndactive, &b_uem_ndactive);
   fChain->SetBranchAddress("uem.nplanes", uem_nplanes, &b_uem_nplanes);
   fChain->SetBranchAddress("uem.planespan", uem_planespan, &b_uem_planespan);
   fChain->SetBranchAddress("uem.nnullambig", uem_nnullambig, &b_uem_nnullambig);
   fChain->SetBranchAddress("uem.nmat", uem_nmat, &b_uem_nmat);
   fChain->SetBranchAddress("uem.nmatactive", uem_nmatactive, &b_uem_nmatactive);
   fChain->SetBranchAddress("uem.nesel", uem_nesel, &b_uem_nesel);
   fChain->SetBranchAddress("uem.nrsel", uem_nrsel, &b_uem_nrsel);
   fChain->SetBranchAddress("uem.ntsel", uem_ntsel, &b_uem_ntsel);
   fChain->SetBranchAddress("uem.nbkg", uem_nbkg, &b_uem_nbkg);
   fChain->SetBranchAddress("uem.nsel", uem_nsel, &b_uem_nsel);
   fChain->SetBranchAddress("uem.nseg", uem_nseg, &b_uem_nseg);
   fChain->SetBranchAddress("uem.chisq", uem_chisq, &b_uem_chisq);
   fChain->SetBranchAddress("uem.fitcon", uem_fitcon, &b_uem_fitcon);
   fChain->SetBranchAddress("uem.radlen", uem_radlen, &b_uem_radlen);
   fChain->SetBranchAddress("uem.firsthit", uem_firsthit, &b_uem_firsthit);
   fChain->SetBranchAddress("uem.lasthit", uem_lasthit, &b_uem_lasthit);
   fChain->SetBranchAddress("uem.maxgap", uem_maxgap, &b_uem_maxgap);
   fChain->SetBranchAddress("uem.avggap", uem_avggap, &b_uem_avggap);
   fChain->SetBranchAddress("uem.avgedep", uem_avgedep, &b_uem_avgedep);
   fChain->SetBranchAddress("uemfit", &uemfit, &b_uemfit);
   fChain->SetBranchAddress("uemlh", &uemlh, &b_uemlh);
   fChain->SetBranchAddress("uemtch", &uemtch_, &b_uemtch_);
   fChain->SetBranchAddress("uemtch.active", uemtch_active, &b_uemtch_active);
   fChain->SetBranchAddress("uemtch.did", uemtch_did, &b_uemtch_did);
   fChain->SetBranchAddress("uemtch.poca.fCoordinates.fX", uemtch_poca_fCoordinates_fX, &b_uemtch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("uemtch.poca.fCoordinates.fY", uemtch_poca_fCoordinates_fY, &b_uemtch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("uemtch.poca.fCoordinates.fZ", uemtch_poca_fCoordinates_fZ, &b_uemtch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("uemtch.mom.fCoordinates.fX", uemtch_mom_fCoordinates_fX, &b_uemtch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("uemtch.mom.fCoordinates.fY", uemtch_mom_fCoordinates_fY, &b_uemtch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("uemtch.mom.fCoordinates.fZ", uemtch_mom_fCoordinates_fZ, &b_uemtch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("uemtch.cdepth", uemtch_cdepth, &b_uemtch_cdepth);
   fChain->SetBranchAddress("uemtch.trkdepth", uemtch_trkdepth, &b_uemtch_trkdepth);
   fChain->SetBranchAddress("uemtch.dphidot", uemtch_dphidot, &b_uemtch_dphidot);
   fChain->SetBranchAddress("uemtch.doca", uemtch_doca, &b_uemtch_doca);
   fChain->SetBranchAddress("uemtch.dt", uemtch_dt, &b_uemtch_dt);
   fChain->SetBranchAddress("uemtch.ptoca", uemtch_ptoca, &b_uemtch_ptoca);
   fChain->SetBranchAddress("uemtch.tocavar", uemtch_tocavar, &b_uemtch_tocavar);
   fChain->SetBranchAddress("uemtch.tresid", uemtch_tresid, &b_uemtch_tresid);
   fChain->SetBranchAddress("uemtch.tresidmvar", uemtch_tresidmvar, &b_uemtch_tresidmvar);
   fChain->SetBranchAddress("uemtch.tresidpvar", uemtch_tresidpvar, &b_uemtch_tresidpvar);
   fChain->SetBranchAddress("uemtch.ctime", uemtch_ctime, &b_uemtch_ctime);
   fChain->SetBranchAddress("uemtch.ctimeerr", uemtch_ctimeerr, &b_uemtch_ctimeerr);
   fChain->SetBranchAddress("uemtch.csize", uemtch_csize, &b_uemtch_csize);
   fChain->SetBranchAddress("uemtch.edep", uemtch_edep, &b_uemtch_edep);
   fChain->SetBranchAddress("uemtch.edeperr", uemtch_edeperr, &b_uemtch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_uemtrkqual_result);
   fChain->SetBranchAddress("uep", &uep_, &b_uep_);
   fChain->SetBranchAddress("uep.status", uep_status, &b_uep_status);
   fChain->SetBranchAddress("uep.goodfit", uep_goodfit, &b_uep_goodfit);
   fChain->SetBranchAddress("uep.seedalg", uep_seedalg, &b_uep_seedalg);
   fChain->SetBranchAddress("uep.fitalg", uep_fitalg, &b_uep_fitalg);
   fChain->SetBranchAddress("uep.pdg", uep_pdg, &b_uep_pdg);
   fChain->SetBranchAddress("uep.nhits", uep_nhits, &b_uep_nhits);
   fChain->SetBranchAddress("uep.ndof", uep_ndof, &b_uep_ndof);
   fChain->SetBranchAddress("uep.nactive", uep_nactive, &b_uep_nactive);
   fChain->SetBranchAddress("uep.ndouble", uep_ndouble, &b_uep_ndouble);
   fChain->SetBranchAddress("uep.ndactive", uep_ndactive, &b_uep_ndactive);
   fChain->SetBranchAddress("uep.nplanes", uep_nplanes, &b_uep_nplanes);
   fChain->SetBranchAddress("uep.planespan", uep_planespan, &b_uep_planespan);
   fChain->SetBranchAddress("uep.nnullambig", uep_nnullambig, &b_uep_nnullambig);
   fChain->SetBranchAddress("uep.nmat", uep_nmat, &b_uep_nmat);
   fChain->SetBranchAddress("uep.nmatactive", uep_nmatactive, &b_uep_nmatactive);
   fChain->SetBranchAddress("uep.nesel", uep_nesel, &b_uep_nesel);
   fChain->SetBranchAddress("uep.nrsel", uep_nrsel, &b_uep_nrsel);
   fChain->SetBranchAddress("uep.ntsel", uep_ntsel, &b_uep_ntsel);
   fChain->SetBranchAddress("uep.nbkg", uep_nbkg, &b_uep_nbkg);
   fChain->SetBranchAddress("uep.nsel", uep_nsel, &b_uep_nsel);
   fChain->SetBranchAddress("uep.nseg", uep_nseg, &b_uep_nseg);
   fChain->SetBranchAddress("uep.chisq", uep_chisq, &b_uep_chisq);
   fChain->SetBranchAddress("uep.fitcon", uep_fitcon, &b_uep_fitcon);
   fChain->SetBranchAddress("uep.radlen", uep_radlen, &b_uep_radlen);
   fChain->SetBranchAddress("uep.firsthit", uep_firsthit, &b_uep_firsthit);
   fChain->SetBranchAddress("uep.lasthit", uep_lasthit, &b_uep_lasthit);
   fChain->SetBranchAddress("uep.maxgap", uep_maxgap, &b_uep_maxgap);
   fChain->SetBranchAddress("uep.avggap", uep_avggap, &b_uep_avggap);
   fChain->SetBranchAddress("uep.avgedep", uep_avgedep, &b_uep_avgedep);
   fChain->SetBranchAddress("uepfit", &uepfit, &b_uepfit);
   fChain->SetBranchAddress("ueplh", &ueplh, &b_ueplh);
   fChain->SetBranchAddress("ueptch", &ueptch_, &b_ueptch_);
   fChain->SetBranchAddress("ueptch.active", ueptch_active, &b_ueptch_active);
   fChain->SetBranchAddress("ueptch.did", ueptch_did, &b_ueptch_did);
   fChain->SetBranchAddress("ueptch.poca.fCoordinates.fX", ueptch_poca_fCoordinates_fX, &b_ueptch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("ueptch.poca.fCoordinates.fY", ueptch_poca_fCoordinates_fY, &b_ueptch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("ueptch.poca.fCoordinates.fZ", ueptch_poca_fCoordinates_fZ, &b_ueptch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("ueptch.mom.fCoordinates.fX", ueptch_mom_fCoordinates_fX, &b_ueptch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("ueptch.mom.fCoordinates.fY", ueptch_mom_fCoordinates_fY, &b_ueptch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("ueptch.mom.fCoordinates.fZ", ueptch_mom_fCoordinates_fZ, &b_ueptch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("ueptch.cdepth", ueptch_cdepth, &b_ueptch_cdepth);
   fChain->SetBranchAddress("ueptch.trkdepth", ueptch_trkdepth, &b_ueptch_trkdepth);
   fChain->SetBranchAddress("ueptch.dphidot", ueptch_dphidot, &b_ueptch_dphidot);
   fChain->SetBranchAddress("ueptch.doca", ueptch_doca, &b_ueptch_doca);
   fChain->SetBranchAddress("ueptch.dt", ueptch_dt, &b_ueptch_dt);
   fChain->SetBranchAddress("ueptch.ptoca", ueptch_ptoca, &b_ueptch_ptoca);
   fChain->SetBranchAddress("ueptch.tocavar", ueptch_tocavar, &b_ueptch_tocavar);
   fChain->SetBranchAddress("ueptch.tresid", ueptch_tresid, &b_ueptch_tresid);
   fChain->SetBranchAddress("ueptch.tresidmvar", ueptch_tresidmvar, &b_ueptch_tresidmvar);
   fChain->SetBranchAddress("ueptch.tresidpvar", ueptch_tresidpvar, &b_ueptch_tresidpvar);
   fChain->SetBranchAddress("ueptch.ctime", ueptch_ctime, &b_ueptch_ctime);
   fChain->SetBranchAddress("ueptch.ctimeerr", ueptch_ctimeerr, &b_ueptch_ctimeerr);
   fChain->SetBranchAddress("ueptch.csize", ueptch_csize, &b_ueptch_csize);
   fChain->SetBranchAddress("ueptch.edep", ueptch_edep, &b_ueptch_edep);
   fChain->SetBranchAddress("ueptch.edeperr", ueptch_edeperr, &b_ueptch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_ueptrkqual_result);
   fChain->SetBranchAddress("dmm", &dmm_, &b_dmm_);
   fChain->SetBranchAddress("dmm.status", dmm_status, &b_dmm_status);
   fChain->SetBranchAddress("dmm.goodfit", dmm_goodfit, &b_dmm_goodfit);
   fChain->SetBranchAddress("dmm.seedalg", dmm_seedalg, &b_dmm_seedalg);
   fChain->SetBranchAddress("dmm.fitalg", dmm_fitalg, &b_dmm_fitalg);
   fChain->SetBranchAddress("dmm.pdg", dmm_pdg, &b_dmm_pdg);
   fChain->SetBranchAddress("dmm.nhits", dmm_nhits, &b_dmm_nhits);
   fChain->SetBranchAddress("dmm.ndof", dmm_ndof, &b_dmm_ndof);
   fChain->SetBranchAddress("dmm.nactive", dmm_nactive, &b_dmm_nactive);
   fChain->SetBranchAddress("dmm.ndouble", dmm_ndouble, &b_dmm_ndouble);
   fChain->SetBranchAddress("dmm.ndactive", dmm_ndactive, &b_dmm_ndactive);
   fChain->SetBranchAddress("dmm.nplanes", dmm_nplanes, &b_dmm_nplanes);
   fChain->SetBranchAddress("dmm.planespan", dmm_planespan, &b_dmm_planespan);
   fChain->SetBranchAddress("dmm.nnullambig", dmm_nnullambig, &b_dmm_nnullambig);
   fChain->SetBranchAddress("dmm.nmat", dmm_nmat, &b_dmm_nmat);
   fChain->SetBranchAddress("dmm.nmatactive", dmm_nmatactive, &b_dmm_nmatactive);
   fChain->SetBranchAddress("dmm.nesel", dmm_nesel, &b_dmm_nesel);
   fChain->SetBranchAddress("dmm.nrsel", dmm_nrsel, &b_dmm_nrsel);
   fChain->SetBranchAddress("dmm.ntsel", dmm_ntsel, &b_dmm_ntsel);
   fChain->SetBranchAddress("dmm.nbkg", dmm_nbkg, &b_dmm_nbkg);
   fChain->SetBranchAddress("dmm.nsel", dmm_nsel, &b_dmm_nsel);
   fChain->SetBranchAddress("dmm.nseg", dmm_nseg, &b_dmm_nseg);
   fChain->SetBranchAddress("dmm.chisq", dmm_chisq, &b_dmm_chisq);
   fChain->SetBranchAddress("dmm.fitcon", dmm_fitcon, &b_dmm_fitcon);
   fChain->SetBranchAddress("dmm.radlen", dmm_radlen, &b_dmm_radlen);
   fChain->SetBranchAddress("dmm.firsthit", dmm_firsthit, &b_dmm_firsthit);
   fChain->SetBranchAddress("dmm.lasthit", dmm_lasthit, &b_dmm_lasthit);
   fChain->SetBranchAddress("dmm.maxgap", dmm_maxgap, &b_dmm_maxgap);
   fChain->SetBranchAddress("dmm.avggap", dmm_avggap, &b_dmm_avggap);
   fChain->SetBranchAddress("dmm.avgedep", dmm_avgedep, &b_dmm_avgedep);
   fChain->SetBranchAddress("dmmfit", &dmmfit, &b_dmmfit);
   fChain->SetBranchAddress("dmmlh", &dmmlh, &b_dmmlh);
   fChain->SetBranchAddress("dmmtch", &dmmtch_, &b_dmmtch_);
   fChain->SetBranchAddress("dmmtch.active", dmmtch_active, &b_dmmtch_active);
   fChain->SetBranchAddress("dmmtch.did", dmmtch_did, &b_dmmtch_did);
   fChain->SetBranchAddress("dmmtch.poca.fCoordinates.fX", dmmtch_poca_fCoordinates_fX, &b_dmmtch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("dmmtch.poca.fCoordinates.fY", dmmtch_poca_fCoordinates_fY, &b_dmmtch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("dmmtch.poca.fCoordinates.fZ", dmmtch_poca_fCoordinates_fZ, &b_dmmtch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("dmmtch.mom.fCoordinates.fX", dmmtch_mom_fCoordinates_fX, &b_dmmtch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("dmmtch.mom.fCoordinates.fY", dmmtch_mom_fCoordinates_fY, &b_dmmtch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("dmmtch.mom.fCoordinates.fZ", dmmtch_mom_fCoordinates_fZ, &b_dmmtch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("dmmtch.cdepth", dmmtch_cdepth, &b_dmmtch_cdepth);
   fChain->SetBranchAddress("dmmtch.trkdepth", dmmtch_trkdepth, &b_dmmtch_trkdepth);
   fChain->SetBranchAddress("dmmtch.dphidot", dmmtch_dphidot, &b_dmmtch_dphidot);
   fChain->SetBranchAddress("dmmtch.doca", dmmtch_doca, &b_dmmtch_doca);
   fChain->SetBranchAddress("dmmtch.dt", dmmtch_dt, &b_dmmtch_dt);
   fChain->SetBranchAddress("dmmtch.ptoca", dmmtch_ptoca, &b_dmmtch_ptoca);
   fChain->SetBranchAddress("dmmtch.tocavar", dmmtch_tocavar, &b_dmmtch_tocavar);
   fChain->SetBranchAddress("dmmtch.tresid", dmmtch_tresid, &b_dmmtch_tresid);
   fChain->SetBranchAddress("dmmtch.tresidmvar", dmmtch_tresidmvar, &b_dmmtch_tresidmvar);
   fChain->SetBranchAddress("dmmtch.tresidpvar", dmmtch_tresidpvar, &b_dmmtch_tresidpvar);
   fChain->SetBranchAddress("dmmtch.ctime", dmmtch_ctime, &b_dmmtch_ctime);
   fChain->SetBranchAddress("dmmtch.ctimeerr", dmmtch_ctimeerr, &b_dmmtch_ctimeerr);
   fChain->SetBranchAddress("dmmtch.csize", dmmtch_csize, &b_dmmtch_csize);
   fChain->SetBranchAddress("dmmtch.edep", dmmtch_edep, &b_dmmtch_edep);
   fChain->SetBranchAddress("dmmtch.edeperr", dmmtch_edeperr, &b_dmmtch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_dmmtrkqual_result);
   fChain->SetBranchAddress("dmp", &dmp_, &b_dmp_);
   fChain->SetBranchAddress("dmp.status", dmp_status, &b_dmp_status);
   fChain->SetBranchAddress("dmp.goodfit", dmp_goodfit, &b_dmp_goodfit);
   fChain->SetBranchAddress("dmp.seedalg", dmp_seedalg, &b_dmp_seedalg);
   fChain->SetBranchAddress("dmp.fitalg", dmp_fitalg, &b_dmp_fitalg);
   fChain->SetBranchAddress("dmp.pdg", dmp_pdg, &b_dmp_pdg);
   fChain->SetBranchAddress("dmp.nhits", dmp_nhits, &b_dmp_nhits);
   fChain->SetBranchAddress("dmp.ndof", dmp_ndof, &b_dmp_ndof);
   fChain->SetBranchAddress("dmp.nactive", dmp_nactive, &b_dmp_nactive);
   fChain->SetBranchAddress("dmp.ndouble", dmp_ndouble, &b_dmp_ndouble);
   fChain->SetBranchAddress("dmp.ndactive", dmp_ndactive, &b_dmp_ndactive);
   fChain->SetBranchAddress("dmp.nplanes", dmp_nplanes, &b_dmp_nplanes);
   fChain->SetBranchAddress("dmp.planespan", dmp_planespan, &b_dmp_planespan);
   fChain->SetBranchAddress("dmp.nnullambig", dmp_nnullambig, &b_dmp_nnullambig);
   fChain->SetBranchAddress("dmp.nmat", dmp_nmat, &b_dmp_nmat);
   fChain->SetBranchAddress("dmp.nmatactive", dmp_nmatactive, &b_dmp_nmatactive);
   fChain->SetBranchAddress("dmp.nesel", dmp_nesel, &b_dmp_nesel);
   fChain->SetBranchAddress("dmp.nrsel", dmp_nrsel, &b_dmp_nrsel);
   fChain->SetBranchAddress("dmp.ntsel", dmp_ntsel, &b_dmp_ntsel);
   fChain->SetBranchAddress("dmp.nbkg", dmp_nbkg, &b_dmp_nbkg);
   fChain->SetBranchAddress("dmp.nsel", dmp_nsel, &b_dmp_nsel);
   fChain->SetBranchAddress("dmp.nseg", dmp_nseg, &b_dmp_nseg);
   fChain->SetBranchAddress("dmp.chisq", dmp_chisq, &b_dmp_chisq);
   fChain->SetBranchAddress("dmp.fitcon", dmp_fitcon, &b_dmp_fitcon);
   fChain->SetBranchAddress("dmp.radlen", dmp_radlen, &b_dmp_radlen);
   fChain->SetBranchAddress("dmp.firsthit", dmp_firsthit, &b_dmp_firsthit);
   fChain->SetBranchAddress("dmp.lasthit", dmp_lasthit, &b_dmp_lasthit);
   fChain->SetBranchAddress("dmp.maxgap", dmp_maxgap, &b_dmp_maxgap);
   fChain->SetBranchAddress("dmp.avggap", dmp_avggap, &b_dmp_avggap);
   fChain->SetBranchAddress("dmp.avgedep", dmp_avgedep, &b_dmp_avgedep);
   fChain->SetBranchAddress("dmpfit", &dmpfit, &b_dmpfit);
   fChain->SetBranchAddress("dmplh", &dmplh, &b_dmplh);
   fChain->SetBranchAddress("dmptch", &dmptch_, &b_dmptch_);
   fChain->SetBranchAddress("dmptch.active", dmptch_active, &b_dmptch_active);
   fChain->SetBranchAddress("dmptch.did", dmptch_did, &b_dmptch_did);
   fChain->SetBranchAddress("dmptch.poca.fCoordinates.fX", dmptch_poca_fCoordinates_fX, &b_dmptch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("dmptch.poca.fCoordinates.fY", dmptch_poca_fCoordinates_fY, &b_dmptch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("dmptch.poca.fCoordinates.fZ", dmptch_poca_fCoordinates_fZ, &b_dmptch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("dmptch.mom.fCoordinates.fX", dmptch_mom_fCoordinates_fX, &b_dmptch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("dmptch.mom.fCoordinates.fY", dmptch_mom_fCoordinates_fY, &b_dmptch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("dmptch.mom.fCoordinates.fZ", dmptch_mom_fCoordinates_fZ, &b_dmptch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("dmptch.cdepth", dmptch_cdepth, &b_dmptch_cdepth);
   fChain->SetBranchAddress("dmptch.trkdepth", dmptch_trkdepth, &b_dmptch_trkdepth);
   fChain->SetBranchAddress("dmptch.dphidot", dmptch_dphidot, &b_dmptch_dphidot);
   fChain->SetBranchAddress("dmptch.doca", dmptch_doca, &b_dmptch_doca);
   fChain->SetBranchAddress("dmptch.dt", dmptch_dt, &b_dmptch_dt);
   fChain->SetBranchAddress("dmptch.ptoca", dmptch_ptoca, &b_dmptch_ptoca);
   fChain->SetBranchAddress("dmptch.tocavar", dmptch_tocavar, &b_dmptch_tocavar);
   fChain->SetBranchAddress("dmptch.tresid", dmptch_tresid, &b_dmptch_tresid);
   fChain->SetBranchAddress("dmptch.tresidmvar", dmptch_tresidmvar, &b_dmptch_tresidmvar);
   fChain->SetBranchAddress("dmptch.tresidpvar", dmptch_tresidpvar, &b_dmptch_tresidpvar);
   fChain->SetBranchAddress("dmptch.ctime", dmptch_ctime, &b_dmptch_ctime);
   fChain->SetBranchAddress("dmptch.ctimeerr", dmptch_ctimeerr, &b_dmptch_ctimeerr);
   fChain->SetBranchAddress("dmptch.csize", dmptch_csize, &b_dmptch_csize);
   fChain->SetBranchAddress("dmptch.edep", dmptch_edep, &b_dmptch_edep);
   fChain->SetBranchAddress("dmptch.edeperr", dmptch_edeperr, &b_dmptch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_dmptrkqual_result);
   fChain->SetBranchAddress("umm", &umm_, &b_umm_);
   fChain->SetBranchAddress("umm.status", &umm_status, &b_umm_status);
   fChain->SetBranchAddress("umm.goodfit", &umm_goodfit, &b_umm_goodfit);
   fChain->SetBranchAddress("umm.seedalg", &umm_seedalg, &b_umm_seedalg);
   fChain->SetBranchAddress("umm.fitalg", &umm_fitalg, &b_umm_fitalg);
   fChain->SetBranchAddress("umm.pdg", &umm_pdg, &b_umm_pdg);
   fChain->SetBranchAddress("umm.nhits", &umm_nhits, &b_umm_nhits);
   fChain->SetBranchAddress("umm.ndof", &umm_ndof, &b_umm_ndof);
   fChain->SetBranchAddress("umm.nactive", &umm_nactive, &b_umm_nactive);
   fChain->SetBranchAddress("umm.ndouble", &umm_ndouble, &b_umm_ndouble);
   fChain->SetBranchAddress("umm.ndactive", &umm_ndactive, &b_umm_ndactive);
   fChain->SetBranchAddress("umm.nplanes", &umm_nplanes, &b_umm_nplanes);
   fChain->SetBranchAddress("umm.planespan", &umm_planespan, &b_umm_planespan);
   fChain->SetBranchAddress("umm.nnullambig", &umm_nnullambig, &b_umm_nnullambig);
   fChain->SetBranchAddress("umm.nmat", &umm_nmat, &b_umm_nmat);
   fChain->SetBranchAddress("umm.nmatactive", &umm_nmatactive, &b_umm_nmatactive);
   fChain->SetBranchAddress("umm.nesel", &umm_nesel, &b_umm_nesel);
   fChain->SetBranchAddress("umm.nrsel", &umm_nrsel, &b_umm_nrsel);
   fChain->SetBranchAddress("umm.ntsel", &umm_ntsel, &b_umm_ntsel);
   fChain->SetBranchAddress("umm.nbkg", &umm_nbkg, &b_umm_nbkg);
   fChain->SetBranchAddress("umm.nsel", &umm_nsel, &b_umm_nsel);
   fChain->SetBranchAddress("umm.nseg", &umm_nseg, &b_umm_nseg);
   fChain->SetBranchAddress("umm.chisq", &umm_chisq, &b_umm_chisq);
   fChain->SetBranchAddress("umm.fitcon", &umm_fitcon, &b_umm_fitcon);
   fChain->SetBranchAddress("umm.radlen", &umm_radlen, &b_umm_radlen);
   fChain->SetBranchAddress("umm.firsthit", &umm_firsthit, &b_umm_firsthit);
   fChain->SetBranchAddress("umm.lasthit", &umm_lasthit, &b_umm_lasthit);
   fChain->SetBranchAddress("umm.maxgap", &umm_maxgap, &b_umm_maxgap);
   fChain->SetBranchAddress("umm.avggap", &umm_avggap, &b_umm_avggap);
   fChain->SetBranchAddress("umm.avgedep", &umm_avgedep, &b_umm_avgedep);
   fChain->SetBranchAddress("ummfit", &ummfit, &b_ummfit);
   fChain->SetBranchAddress("ummlh", &ummlh, &b_ummlh);
   fChain->SetBranchAddress("ummtch", &ummtch_, &b_ummtch_);
   fChain->SetBranchAddress("ummtch.active", &ummtch_active, &b_ummtch_active);
   fChain->SetBranchAddress("ummtch.did", &ummtch_did, &b_ummtch_did);
   fChain->SetBranchAddress("ummtch.poca.fCoordinates.fX", &ummtch_poca_fCoordinates_fX, &b_ummtch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("ummtch.poca.fCoordinates.fY", &ummtch_poca_fCoordinates_fY, &b_ummtch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("ummtch.poca.fCoordinates.fZ", &ummtch_poca_fCoordinates_fZ, &b_ummtch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("ummtch.mom.fCoordinates.fX", &ummtch_mom_fCoordinates_fX, &b_ummtch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("ummtch.mom.fCoordinates.fY", &ummtch_mom_fCoordinates_fY, &b_ummtch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("ummtch.mom.fCoordinates.fZ", &ummtch_mom_fCoordinates_fZ, &b_ummtch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("ummtch.cdepth", &ummtch_cdepth, &b_ummtch_cdepth);
   fChain->SetBranchAddress("ummtch.trkdepth", &ummtch_trkdepth, &b_ummtch_trkdepth);
   fChain->SetBranchAddress("ummtch.dphidot", &ummtch_dphidot, &b_ummtch_dphidot);
   fChain->SetBranchAddress("ummtch.doca", &ummtch_doca, &b_ummtch_doca);
   fChain->SetBranchAddress("ummtch.dt", &ummtch_dt, &b_ummtch_dt);
   fChain->SetBranchAddress("ummtch.ptoca", &ummtch_ptoca, &b_ummtch_ptoca);
   fChain->SetBranchAddress("ummtch.tocavar", &ummtch_tocavar, &b_ummtch_tocavar);
   fChain->SetBranchAddress("ummtch.tresid", &ummtch_tresid, &b_ummtch_tresid);
   fChain->SetBranchAddress("ummtch.tresidmvar", &ummtch_tresidmvar, &b_ummtch_tresidmvar);
   fChain->SetBranchAddress("ummtch.tresidpvar", &ummtch_tresidpvar, &b_ummtch_tresidpvar);
   fChain->SetBranchAddress("ummtch.ctime", &ummtch_ctime, &b_ummtch_ctime);
   fChain->SetBranchAddress("ummtch.ctimeerr", &ummtch_ctimeerr, &b_ummtch_ctimeerr);
   fChain->SetBranchAddress("ummtch.csize", &ummtch_csize, &b_ummtch_csize);
   fChain->SetBranchAddress("ummtch.edep", &ummtch_edep, &b_ummtch_edep);
   fChain->SetBranchAddress("ummtch.edeperr", &ummtch_edeperr, &b_ummtch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_ummtrkqual_result);
   fChain->SetBranchAddress("ump", &ump_, &b_ump_);
   fChain->SetBranchAddress("ump.status", ump_status, &b_ump_status);
   fChain->SetBranchAddress("ump.goodfit", ump_goodfit, &b_ump_goodfit);
   fChain->SetBranchAddress("ump.seedalg", ump_seedalg, &b_ump_seedalg);
   fChain->SetBranchAddress("ump.fitalg", ump_fitalg, &b_ump_fitalg);
   fChain->SetBranchAddress("ump.pdg", ump_pdg, &b_ump_pdg);
   fChain->SetBranchAddress("ump.nhits", ump_nhits, &b_ump_nhits);
   fChain->SetBranchAddress("ump.ndof", ump_ndof, &b_ump_ndof);
   fChain->SetBranchAddress("ump.nactive", ump_nactive, &b_ump_nactive);
   fChain->SetBranchAddress("ump.ndouble", ump_ndouble, &b_ump_ndouble);
   fChain->SetBranchAddress("ump.ndactive", ump_ndactive, &b_ump_ndactive);
   fChain->SetBranchAddress("ump.nplanes", ump_nplanes, &b_ump_nplanes);
   fChain->SetBranchAddress("ump.planespan", ump_planespan, &b_ump_planespan);
   fChain->SetBranchAddress("ump.nnullambig", ump_nnullambig, &b_ump_nnullambig);
   fChain->SetBranchAddress("ump.nmat", ump_nmat, &b_ump_nmat);
   fChain->SetBranchAddress("ump.nmatactive", ump_nmatactive, &b_ump_nmatactive);
   fChain->SetBranchAddress("ump.nesel", ump_nesel, &b_ump_nesel);
   fChain->SetBranchAddress("ump.nrsel", ump_nrsel, &b_ump_nrsel);
   fChain->SetBranchAddress("ump.ntsel", ump_ntsel, &b_ump_ntsel);
   fChain->SetBranchAddress("ump.nbkg", ump_nbkg, &b_ump_nbkg);
   fChain->SetBranchAddress("ump.nsel", ump_nsel, &b_ump_nsel);
   fChain->SetBranchAddress("ump.nseg", ump_nseg, &b_ump_nseg);
   fChain->SetBranchAddress("ump.chisq", ump_chisq, &b_ump_chisq);
   fChain->SetBranchAddress("ump.fitcon", ump_fitcon, &b_ump_fitcon);
   fChain->SetBranchAddress("ump.radlen", ump_radlen, &b_ump_radlen);
   fChain->SetBranchAddress("ump.firsthit", ump_firsthit, &b_ump_firsthit);
   fChain->SetBranchAddress("ump.lasthit", ump_lasthit, &b_ump_lasthit);
   fChain->SetBranchAddress("ump.maxgap", ump_maxgap, &b_ump_maxgap);
   fChain->SetBranchAddress("ump.avggap", ump_avggap, &b_ump_avggap);
   fChain->SetBranchAddress("ump.avgedep", ump_avgedep, &b_ump_avgedep);
   fChain->SetBranchAddress("umpfit", &umpfit, &b_umpfit);
   fChain->SetBranchAddress("umplh", &umplh, &b_umplh);
   fChain->SetBranchAddress("umptch", &umptch_, &b_umptch_);
   fChain->SetBranchAddress("umptch.active", umptch_active, &b_umptch_active);
   fChain->SetBranchAddress("umptch.did", umptch_did, &b_umptch_did);
   fChain->SetBranchAddress("umptch.poca.fCoordinates.fX", umptch_poca_fCoordinates_fX, &b_umptch_poca_fCoordinates_fX);
   fChain->SetBranchAddress("umptch.poca.fCoordinates.fY", umptch_poca_fCoordinates_fY, &b_umptch_poca_fCoordinates_fY);
   fChain->SetBranchAddress("umptch.poca.fCoordinates.fZ", umptch_poca_fCoordinates_fZ, &b_umptch_poca_fCoordinates_fZ);
   fChain->SetBranchAddress("umptch.mom.fCoordinates.fX", umptch_mom_fCoordinates_fX, &b_umptch_mom_fCoordinates_fX);
   fChain->SetBranchAddress("umptch.mom.fCoordinates.fY", umptch_mom_fCoordinates_fY, &b_umptch_mom_fCoordinates_fY);
   fChain->SetBranchAddress("umptch.mom.fCoordinates.fZ", umptch_mom_fCoordinates_fZ, &b_umptch_mom_fCoordinates_fZ);
   fChain->SetBranchAddress("umptch.cdepth", umptch_cdepth, &b_umptch_cdepth);
   fChain->SetBranchAddress("umptch.trkdepth", umptch_trkdepth, &b_umptch_trkdepth);
   fChain->SetBranchAddress("umptch.dphidot", umptch_dphidot, &b_umptch_dphidot);
   fChain->SetBranchAddress("umptch.doca", umptch_doca, &b_umptch_doca);
   fChain->SetBranchAddress("umptch.dt", umptch_dt, &b_umptch_dt);
   fChain->SetBranchAddress("umptch.ptoca", umptch_ptoca, &b_umptch_ptoca);
   fChain->SetBranchAddress("umptch.tocavar", umptch_tocavar, &b_umptch_tocavar);
   fChain->SetBranchAddress("umptch.tresid", umptch_tresid, &b_umptch_tresid);
   fChain->SetBranchAddress("umptch.tresidmvar", umptch_tresidmvar, &b_umptch_tresidmvar);
   fChain->SetBranchAddress("umptch.tresidpvar", umptch_tresidpvar, &b_umptch_tresidpvar);
   fChain->SetBranchAddress("umptch.ctime", umptch_ctime, &b_umptch_ctime);
   fChain->SetBranchAddress("umptch.ctimeerr", umptch_ctimeerr, &b_umptch_ctimeerr);
   fChain->SetBranchAddress("umptch.csize", umptch_csize, &b_umptch_csize);
   fChain->SetBranchAddress("umptch.edep", umptch_edep, &b_umptch_edep);
   fChain->SetBranchAddress("umptch.edeperr", umptch_edeperr, &b_umptch_edeperr);
//    fChain->SetBranchAddress("result", &result, &b_umptrkqual_result);
   fChain->SetBranchAddress("crvsummary.totalPEs", &crvsummary_totalPEs, &b_crvsummary_totalPEs);
   fChain->SetBranchAddress("crvsummary.nHitCounters", &crvsummary_nHitCounters, &b_crvsummary_nHitCounters);
   fChain->SetBranchAddress("crvcoincs", &crvcoincs_, &b_crvcoincs_);
   fChain->SetBranchAddress("crvcoincs.sectorType", &crvcoincs_sectorType, &b_crvcoincs_sectorType);
   fChain->SetBranchAddress("crvcoincs.pos.fCoordinates.fX", &crvcoincs_pos_fCoordinates_fX, &b_crvcoincs_pos_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincs.pos.fCoordinates.fY", &crvcoincs_pos_fCoordinates_fY, &b_crvcoincs_pos_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincs.pos.fCoordinates.fZ", &crvcoincs_pos_fCoordinates_fZ, &b_crvcoincs_pos_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincs.timeStart", &crvcoincs_timeStart, &b_crvcoincs_timeStart);
   fChain->SetBranchAddress("crvcoincs.timeEnd", &crvcoincs_timeEnd, &b_crvcoincs_timeEnd);
   fChain->SetBranchAddress("crvcoincs.time", &crvcoincs_time, &b_crvcoincs_time);
   fChain->SetBranchAddress("crvcoincs.PEs", &crvcoincs_PEs, &b_crvcoincs_PEs);
   fChain->SetBranchAddress("crvcoincs.PEsPerLayer[4]", &crvcoincs_PEsPerLayer, &b_crvcoincs_PEsPerLayer);
   fChain->SetBranchAddress("crvcoincs.nHits", &crvcoincs_nHits, &b_crvcoincs_nHits);
   fChain->SetBranchAddress("crvcoincs.nLayers", &crvcoincs_nLayers, &b_crvcoincs_nLayers);
   fChain->SetBranchAddress("crvcoincs.angle", &crvcoincs_angle, &b_crvcoincs_angle);
   fChain->SetBranchAddress("crvsummarymc.totalEnergyDeposited", &crvsummarymc_totalEnergyDeposited, &b_crvsummarymc_totalEnergyDeposited);
   fChain->SetBranchAddress("crvsummarymc.minPathLayer", &crvsummarymc_minPathLayer, &b_crvsummarymc_minPathLayer);
   fChain->SetBranchAddress("crvsummarymc.maxPathLayer", &crvsummarymc_maxPathLayer, &b_crvsummarymc_maxPathLayer);
   fChain->SetBranchAddress("crvsummarymc.nHitCounters", &crvsummarymc_nHitCounters, &b_crvsummarymc_nHitCounters);
   fChain->SetBranchAddress("crvsummarymc.pos.fCoordinates.fX", &crvsummarymc_pos_fCoordinates_fX, &b_crvsummarymc_pos_fCoordinates_fX);
   fChain->SetBranchAddress("crvsummarymc.pos.fCoordinates.fY", &crvsummarymc_pos_fCoordinates_fY, &b_crvsummarymc_pos_fCoordinates_fY);
   fChain->SetBranchAddress("crvsummarymc.pos.fCoordinates.fZ", &crvsummarymc_pos_fCoordinates_fZ, &b_crvsummarymc_pos_fCoordinates_fZ);
   fChain->SetBranchAddress("crvsummarymc.sectorNumber", &crvsummarymc_sectorNumber, &b_crvsummarymc_sectorNumber);
   fChain->SetBranchAddress("crvsummarymc.sectorType", &crvsummarymc_sectorType, &b_crvsummarymc_sectorType);
   fChain->SetBranchAddress("crvsummarymc.pdgId", &crvsummarymc_pdgId, &b_crvsummarymc_pdgId);
   fChain->SetBranchAddress("crvcoincsmc", &crvcoincsmc_, &b_crvcoincsmc_);
   fChain->SetBranchAddress("crvcoincsmc.valid", &crvcoincsmc_valid, &b_crvcoincsmc_valid);
   fChain->SetBranchAddress("crvcoincsmc.pdgId", &crvcoincsmc_pdgId, &b_crvcoincsmc_pdgId);
   fChain->SetBranchAddress("crvcoincsmc.primaryPdgId", &crvcoincsmc_primaryPdgId, &b_crvcoincsmc_primaryPdgId);
   fChain->SetBranchAddress("crvcoincsmc.primaryE", &crvcoincsmc_primaryE, &b_crvcoincsmc_primaryE);
   fChain->SetBranchAddress("crvcoincsmc.primary.fCoordinates.fX", &crvcoincsmc_primary_fCoordinates_fX, &b_crvcoincsmc_primary_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmc.primary.fCoordinates.fY", &crvcoincsmc_primary_fCoordinates_fY, &b_crvcoincsmc_primary_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmc.primary.fCoordinates.fZ", &crvcoincsmc_primary_fCoordinates_fZ, &b_crvcoincsmc_primary_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmc.parentPdgId", &crvcoincsmc_parentPdgId, &b_crvcoincsmc_parentPdgId);
   fChain->SetBranchAddress("crvcoincsmc.parentE", &crvcoincsmc_parentE, &b_crvcoincsmc_parentE);
   fChain->SetBranchAddress("crvcoincsmc.parent.fCoordinates.fX", &crvcoincsmc_parent_fCoordinates_fX, &b_crvcoincsmc_parent_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmc.parent.fCoordinates.fY", &crvcoincsmc_parent_fCoordinates_fY, &b_crvcoincsmc_parent_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmc.parent.fCoordinates.fZ", &crvcoincsmc_parent_fCoordinates_fZ, &b_crvcoincsmc_parent_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmc.gparentPdgId", &crvcoincsmc_gparentPdgId, &b_crvcoincsmc_gparentPdgId);
   fChain->SetBranchAddress("crvcoincsmc.gparentE", &crvcoincsmc_gparentE, &b_crvcoincsmc_gparentE);
   fChain->SetBranchAddress("crvcoincsmc.gparent.fCoordinates.fX", &crvcoincsmc_gparent_fCoordinates_fX, &b_crvcoincsmc_gparent_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmc.gparent.fCoordinates.fY", &crvcoincsmc_gparent_fCoordinates_fY, &b_crvcoincsmc_gparent_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmc.gparent.fCoordinates.fZ", &crvcoincsmc_gparent_fCoordinates_fZ, &b_crvcoincsmc_gparent_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmc.pos.fCoordinates.fX", &crvcoincsmc_pos_fCoordinates_fX, &b_crvcoincsmc_pos_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmc.pos.fCoordinates.fY", &crvcoincsmc_pos_fCoordinates_fY, &b_crvcoincsmc_pos_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmc.pos.fCoordinates.fZ", &crvcoincsmc_pos_fCoordinates_fZ, &b_crvcoincsmc_pos_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmc.time", &crvcoincsmc_time, &b_crvcoincsmc_time);
   fChain->SetBranchAddress("crvcoincsmc.depositedEnergy", &crvcoincsmc_depositedEnergy, &b_crvcoincsmc_depositedEnergy);
   fChain->SetBranchAddress("crvcoincsmcplane", &crvcoincsmcplane_, &b_crvcoincsmcplane_);
   fChain->SetBranchAddress("crvcoincsmcplane.pdgId", &crvcoincsmcplane_pdgId, &b_crvcoincsmcplane_pdgId);
   fChain->SetBranchAddress("crvcoincsmcplane.primaryPdgId", &crvcoincsmcplane_primaryPdgId, &b_crvcoincsmcplane_primaryPdgId);
   fChain->SetBranchAddress("crvcoincsmcplane.primaryE", &crvcoincsmcplane_primaryE, &b_crvcoincsmcplane_primaryE);
   fChain->SetBranchAddress("crvcoincsmcplane.primary.fCoordinates.fX", &crvcoincsmcplane_primary_fCoordinates_fX, &b_crvcoincsmcplane_primary_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmcplane.primary.fCoordinates.fY", &crvcoincsmcplane_primary_fCoordinates_fY, &b_crvcoincsmcplane_primary_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmcplane.primary.fCoordinates.fZ", &crvcoincsmcplane_primary_fCoordinates_fZ, &b_crvcoincsmcplane_primary_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmcplane.pos.fCoordinates.fX", &crvcoincsmcplane_pos_fCoordinates_fX, &b_crvcoincsmcplane_pos_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmcplane.pos.fCoordinates.fY", &crvcoincsmcplane_pos_fCoordinates_fY, &b_crvcoincsmcplane_pos_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmcplane.pos.fCoordinates.fZ", &crvcoincsmcplane_pos_fCoordinates_fZ, &b_crvcoincsmcplane_pos_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmcplane.dir.fCoordinates.fX", &crvcoincsmcplane_dir_fCoordinates_fX, &b_crvcoincsmcplane_dir_fCoordinates_fX);
   fChain->SetBranchAddress("crvcoincsmcplane.dir.fCoordinates.fY", &crvcoincsmcplane_dir_fCoordinates_fY, &b_crvcoincsmcplane_dir_fCoordinates_fY);
   fChain->SetBranchAddress("crvcoincsmcplane.dir.fCoordinates.fZ", &crvcoincsmcplane_dir_fCoordinates_fZ, &b_crvcoincsmcplane_dir_fCoordinates_fZ);
   fChain->SetBranchAddress("crvcoincsmcplane.time", &crvcoincsmcplane_time, &b_crvcoincsmcplane_time);
   fChain->SetBranchAddress("crvcoincsmcplane.kineticEnergy", &crvcoincsmcplane_kineticEnergy, &b_crvcoincsmcplane_kineticEnergy);
   fChain->SetBranchAddress("crvcoincsmcplane.dataSource", &crvcoincsmcplane_dataSource, &b_crvcoincsmcplane_dataSource);
   fChain->SetBranchAddress("evtwt.", &evtwt__nwts, &b_evtwt_);
   Notify();
}

Bool_t trkana::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void trkana::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t trkana::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef trkana_cxx
