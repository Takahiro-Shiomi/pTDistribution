//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Aug 21 13:28:37 2020 by ROOT version 6.20/06
// from TTree physics/physics
// found on file: /gpfs/fs7001/shiomi/ATLAS/Residual/Ntuple/L1TGCNtupleRun3/run/CW_MC_BE_Thre_SingleMuon_inEXTBarrel_Run3_0624forPublicPlot_Histgram.root
//////////////////////////////////////////////////////////

#ifndef pTDistribution_h
#define pTDistribution_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>
#include <iostream>
#include "TH1D.h"

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

using namespace std;

class pTDistribution {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           eventnumber;
   Int_t           bcid;
   Int_t           muon_n;
   vector<float>   *muon_pt;
   vector<float>   *muon_eta;
   vector<float>   *muon_phi;
   vector<float>   *muon_m;
   vector<int>     *muon_charge;
   vector<int>     *muon_author;
   vector<int>     *muon_Type;
   Int_t           ext_mu_n;
   vector<int>     *ext_mu_type;
   vector<int>     *ext_mu_index;
   vector<int>     *ext_mu_size;
   vector<vector<int> > *ext_mu_targetVec;
   vector<vector<float> > *ext_mu_targetDistanceVec;
   vector<vector<float> > *ext_mu_targetEtaVec;
   vector<vector<float> > *ext_mu_targetPhiVec;
   vector<vector<float> > *ext_mu_targetDeltaEtaVec;
   vector<vector<float> > *ext_mu_targetDeltaPhiVec;
   vector<vector<float> > *ext_mu_targetPxVec;
   vector<vector<float> > *ext_mu_targetPyVec;
   vector<vector<float> > *ext_mu_targetPzVec;
   Int_t           tgc_coin_n;
   vector<float>   *tgc_coin_x_In;
   vector<float>   *tgc_coin_y_In;
   vector<float>   *tgc_coin_z_In;
   vector<float>   *tgc_coin_x_Out;
   vector<float>   *tgc_coin_y_Out;
   vector<float>   *tgc_coin_z_Out;
   vector<float>   *tgc_coin_width_In;
   vector<float>   *tgc_coin_width_Out;
   vector<float>   *tgc_coin_width_R;
   vector<float>   *tgc_coin_width_Phi;
   vector<int>     *tgc_coin_isAside;
   vector<int>     *tgc_coin_isForward;
   vector<int>     *tgc_coin_isStrip;
   vector<int>     *tgc_coin_isInner;
   vector<int>     *tgc_coin_type;
   vector<int>     *tgc_coin_trackletId;
   vector<int>     *tgc_coin_trackletIdStrip;
   vector<int>     *tgc_coin_phi;
   vector<int>     *tgc_coin_roi;
   vector<int>     *tgc_coin_pt;
   vector<int>     *tgc_coin_delta;
   vector<int>     *tgc_coin_sub;
   vector<int>     *tgc_coin_veto;
   vector<int>     *tgc_coin_bunch;
   vector<int>     *tgc_coin_inner;
   Int_t           muctpi_ndatawords;
   vector<float>   *muctpi_eta;
   vector<float>   *muctpi_phi;
   vector<short>   *muctpi_source;
   vector<short>   *muctpi_hemisphere;
   vector<short>   *muctpi_bcid;
   vector<short>   *muctpi_sectorID;
   vector<short>   *muctpi_thrNumber;
   vector<short>   *muctpi_roi;
   vector<short>   *muctpi_veto;
   vector<short>   *muctpi_charge;
   vector<short>   *muctpi_candidateVetoed;
   Int_t           HLT_info_n;
   vector<string>  *HLT_info_chain;
   vector<int>     *HLT_info_isPassed;
   vector<vector<int> > *HLT_info_typeVec;
   vector<vector<float> > *HLT_info_ptVec;
   vector<vector<float> > *HLT_info_etaVec;
   vector<vector<float> > *HLT_info_phiVec;
   Int_t           mc_n;
   vector<float>   *mc_pt;
   vector<float>   *mc_eta;
   vector<float>   *mc_phi;
   vector<float>   *mc_m;
   vector<int>     *mc_charge;
   Int_t           TGC_Run3_n;
   vector<int>     *TGC_Run3_pt;
   vector<int>     *TGC_Run3_type;
   vector<int>     *TGC_Run3_station;
   vector<int>     *TGC_Run3_DR;
   vector<int>     *TGC_Run3_DPhi;
   vector<int>     *TGC_Run3_TypeDPhi;
   vector<int>     *TGC_Run3_TypeDR;
   vector<int>     *TGC_Run3_Side;
   vector<int>     *TGC_Run3_RoI;
   vector<int>     *TGC_Run3_PhiSector;
   vector<bool>    *TGC_Run3_IsEndcap;
   vector<int>     *TGC_Run3_TrackletIdWire;
   vector<int>     *TGC_Run3_TrackletIdStrip;
   vector<float>   *TGC_Run3_x;
   vector<float>   *TGC_Run3_y;
   vector<float>   *TGC_Run3_z;
   vector<float>   *TGC_Run3_R;
   vector<float>   *TGC_Run3_Phi;

   // List of branches
   TBranch        *b_eventnumber;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_muon_n;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_m;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_author;   //!
   TBranch        *b_muon_Type;   //!
   TBranch        *b_ext_mu_n;   //!
   TBranch        *b_ext_mu_type;   //!
   TBranch        *b_ext_mu_index;   //!
   TBranch        *b_ext_mu_size;   //!
   TBranch        *b_ext_mu_targetVec;   //!
   TBranch        *b_ext_mu_targetDistanceVec;   //!
   TBranch        *b_ext_mu_targetEtaVec;   //!
   TBranch        *b_ext_mu_targetPhiVec;   //!
   TBranch        *b_ext_mu_targetDeltaEtaVec;   //!
   TBranch        *b_ext_mu_targetDeltaPhiVec;   //!
   TBranch        *b_ext_mu_targetPxVec;   //!
   TBranch        *b_ext_mu_targetPyVec;   //!
   TBranch        *b_ext_mu_targetPzVec;   //!
   TBranch        *b_tgc_coin_n;   //!
   TBranch        *b_tgc_coin_x_In;   //!
   TBranch        *b_tgc_coin_y_In;   //!
   TBranch        *b_tgc_coin_z_In;   //!
   TBranch        *b_tgc_coin_x_Out;   //!
   TBranch        *b_tgc_coin_y_Out;   //!
   TBranch        *b_tgc_coin_z_Out;   //!
   TBranch        *b_tgc_coin_width_In;   //!
   TBranch        *b_tgc_coin_width_Out;   //!
   TBranch        *b_tgc_coin_width_R;   //!
   TBranch        *b_tgc_coin_width_Phi;   //!
   TBranch        *b_tgc_coin_isAside;   //!
   TBranch        *b_tgc_coin_isForward;   //!
   TBranch        *b_tgc_coin_isStrip;   //!
   TBranch        *b_tgc_coin_isInner;   //!
   TBranch        *b_tgc_coin_type;   //!
   TBranch        *b_tgc_coin_trackletId;   //!
   TBranch        *b_tgc_coin_trackletIdStrip;   //!
   TBranch        *b_tgc_coin_phi;   //!
   TBranch        *b_tgc_coin_roi;   //!
   TBranch        *b_tgc_coin_pt;   //!
   TBranch        *b_tgc_coin_delta;   //!
   TBranch        *b_tgc_coin_sub;   //!
   TBranch        *b_tgc_coin_veto;   //!
   TBranch        *b_tgc_coin_bunch;   //!
   TBranch        *b_tgc_coin_inner;   //!
   TBranch        *b_muctpi_ndatawords;   //!
   TBranch        *b_muctpi_eta;   //!
   TBranch        *b_muctpi_phi;   //!
   TBranch        *b_muctpi_source;   //!
   TBranch        *b_muctpi_hemisphere;   //!
   TBranch        *b_muctpi_bcid;   //!
   TBranch        *b_muctpi_sectorID;   //!
   TBranch        *b_muctpi_thrNumber;   //!
   TBranch        *b_muctpi_roi;   //!
   TBranch        *b_muctpi_veto;   //!
   TBranch        *b_muctpi_charge;   //!
   TBranch        *b_muctpi_candidateVetoed;   //!
   TBranch        *b_HLT_info_n;   //!
   TBranch        *b_HLT_info_chain;   //!
   TBranch        *b_HLT_info_isPassed;   //!
   TBranch        *b_HLT_info_typeVec;   //!
   TBranch        *b_HLT_info_ptVec;   //!
   TBranch        *b_HLT_info_etaVec;   //!
   TBranch        *b_HLT_info_phiVec;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_m;   //!
   TBranch        *b_mc_charge;   //!
   TBranch        *b_TGC_Run3_n;   //!
   TBranch        *b_TGC_Run3_pt;   //!
   TBranch        *b_TGC_Run3_type;   //!
   TBranch        *b_TGC_Run3_station;   //!
   TBranch        *b_TGC_Run3_DR;   //!
   TBranch        *b_TGC_Run3_DPhi;   //!
   TBranch        *b_TGC_Run3_TypeDPhi;   //!
   TBranch        *b_TGC_Run3_TypeDR;   //!
   TBranch        *b_TGC_Run3_Side;   //!
   TBranch        *b_TGC_Run3_RoI;   //!
   TBranch        *b_TGC_Run3_PhiSector;   //!
   TBranch        *b_TGC_Run3_IsEndcap;   //!
   TBranch        *b_TGC_Run3_TrackletIdWire;   //!
   TBranch        *b_TGC_Run3_TrackletIdStrip;   //!
   TBranch        *b_TGC_Run3_x;   //!
   TBranch        *b_TGC_Run3_y;   //!
   TBranch        *b_TGC_Run3_z;   //!
   TBranch        *b_TGC_Run3_R;   //!
   TBranch        *b_TGC_Run3_Phi;   //!

   //Parameter
   float extEta;
   float extPhi;

   //Histgram
   TH1D *h_off;
   TH1D *h_rpc[6];
   TH1D *h_tgc[15];

   pTDistribution(TTree *tree=0);
   virtual ~pTDistribution();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     InitHist();
   virtual void     EndHist();
   virtual void     DrawHist(TString pdf);
   virtual void     FillHist();
   virtual Int_t    RPC_Run3(float offline_pt);
   virtual Int_t    TGC_Run3(float offline_pt);
   virtual Bool_t   OfflineRPC(int i, int j);
   virtual Bool_t   OfflineTGC(int i, int j);
   virtual void     Loop(int Nevents);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef pTDistribution_cxx
pTDistribution::pTDistribution(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/gpfs/fs7001/shiomi/ATLAS/Residual/Ntuple/L1TGCNtupleRun3/run/CW_MC_BE_Thre_SingleMuon_inEXTBarrel_Run3_0624forPublicPlot_Histgram.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/gpfs/fs7001/shiomi/ATLAS/Residual/Ntuple/L1TGCNtupleRun3/run/CW_MC_BE_Thre_SingleMuon_inEXTBarrel_Run3_0624forPublicPlot_Histgram.root");
      }
      f->GetObject("physics",tree);

   }
   Init(tree);
}

pTDistribution::~pTDistribution()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t pTDistribution::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t pTDistribution::LoadTree(Long64_t entry)
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

void pTDistribution::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   muon_pt = 0;
   muon_eta = 0;
   muon_phi = 0;
   muon_m = 0;
   muon_charge = 0;
   muon_author = 0;
   muon_Type = 0;
   ext_mu_type = 0;
   ext_mu_index = 0;
   ext_mu_size = 0;
   ext_mu_targetVec = 0;
   ext_mu_targetDistanceVec = 0;
   ext_mu_targetEtaVec = 0;
   ext_mu_targetPhiVec = 0;
   ext_mu_targetDeltaEtaVec = 0;
   ext_mu_targetDeltaPhiVec = 0;
   ext_mu_targetPxVec = 0;
   ext_mu_targetPyVec = 0;
   ext_mu_targetPzVec = 0;
   tgc_coin_x_In = 0;
   tgc_coin_y_In = 0;
   tgc_coin_z_In = 0;
   tgc_coin_x_Out = 0;
   tgc_coin_y_Out = 0;
   tgc_coin_z_Out = 0;
   tgc_coin_width_In = 0;
   tgc_coin_width_Out = 0;
   tgc_coin_width_R = 0;
   tgc_coin_width_Phi = 0;
   tgc_coin_isAside = 0;
   tgc_coin_isForward = 0;
   tgc_coin_isStrip = 0;
   tgc_coin_isInner = 0;
   tgc_coin_type = 0;
   tgc_coin_trackletId = 0;
   tgc_coin_trackletIdStrip = 0;
   tgc_coin_phi = 0;
   tgc_coin_roi = 0;
   tgc_coin_pt = 0;
   tgc_coin_delta = 0;
   tgc_coin_sub = 0;
   tgc_coin_veto = 0;
   tgc_coin_bunch = 0;
   tgc_coin_inner = 0;
   muctpi_eta = 0;
   muctpi_phi = 0;
   muctpi_source = 0;
   muctpi_hemisphere = 0;
   muctpi_bcid = 0;
   muctpi_sectorID = 0;
   muctpi_thrNumber = 0;
   muctpi_roi = 0;
   muctpi_veto = 0;
   muctpi_charge = 0;
   muctpi_candidateVetoed = 0;
   HLT_info_chain = 0;
   HLT_info_isPassed = 0;
   HLT_info_typeVec = 0;
   HLT_info_ptVec = 0;
   HLT_info_etaVec = 0;
   HLT_info_phiVec = 0;
   mc_pt = 0;
   mc_eta = 0;
   mc_phi = 0;
   mc_m = 0;
   mc_charge = 0;
   TGC_Run3_pt = 0;
   TGC_Run3_type = 0;
   TGC_Run3_station = 0;
   TGC_Run3_DR = 0;
   TGC_Run3_DPhi = 0;
   TGC_Run3_TypeDPhi = 0;
   TGC_Run3_TypeDR = 0;
   TGC_Run3_Side = 0;
   TGC_Run3_RoI = 0;
   TGC_Run3_PhiSector = 0;
   TGC_Run3_IsEndcap = 0;
   TGC_Run3_TrackletIdWire = 0;
   TGC_Run3_TrackletIdStrip = 0;
   TGC_Run3_x = 0;
   TGC_Run3_y = 0;
   TGC_Run3_z = 0;
   TGC_Run3_R = 0;
   TGC_Run3_Phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("eventnumber", &eventnumber, &b_eventnumber);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("muon_n", &muon_n, &b_muon_n);
   fChain->SetBranchAddress("muon_pt", &muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", &muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_m", &muon_m, &b_muon_m);
   fChain->SetBranchAddress("muon_charge", &muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_author", &muon_author, &b_muon_author);
   fChain->SetBranchAddress("muon_Type", &muon_Type, &b_muon_Type);
   fChain->SetBranchAddress("ext_mu_n", &ext_mu_n, &b_ext_mu_n);
   fChain->SetBranchAddress("ext_mu_type", &ext_mu_type, &b_ext_mu_type);
   fChain->SetBranchAddress("ext_mu_index", &ext_mu_index, &b_ext_mu_index);
   fChain->SetBranchAddress("ext_mu_size", &ext_mu_size, &b_ext_mu_size);
   fChain->SetBranchAddress("ext_mu_targetVec", &ext_mu_targetVec, &b_ext_mu_targetVec);
   fChain->SetBranchAddress("ext_mu_targetDistanceVec", &ext_mu_targetDistanceVec, &b_ext_mu_targetDistanceVec);
   fChain->SetBranchAddress("ext_mu_targetEtaVec", &ext_mu_targetEtaVec, &b_ext_mu_targetEtaVec);
   fChain->SetBranchAddress("ext_mu_targetPhiVec", &ext_mu_targetPhiVec, &b_ext_mu_targetPhiVec);
   fChain->SetBranchAddress("ext_mu_targetDeltaEtaVec", &ext_mu_targetDeltaEtaVec, &b_ext_mu_targetDeltaEtaVec);
   fChain->SetBranchAddress("ext_mu_targetDeltaPhiVec", &ext_mu_targetDeltaPhiVec, &b_ext_mu_targetDeltaPhiVec);
   fChain->SetBranchAddress("ext_mu_targetPxVec", &ext_mu_targetPxVec, &b_ext_mu_targetPxVec);
   fChain->SetBranchAddress("ext_mu_targetPyVec", &ext_mu_targetPyVec, &b_ext_mu_targetPyVec);
   fChain->SetBranchAddress("ext_mu_targetPzVec", &ext_mu_targetPzVec, &b_ext_mu_targetPzVec);
   fChain->SetBranchAddress("tgc_coin_n", &tgc_coin_n, &b_tgc_coin_n);
   fChain->SetBranchAddress("tgc_coin_x_In", &tgc_coin_x_In, &b_tgc_coin_x_In);
   fChain->SetBranchAddress("tgc_coin_y_In", &tgc_coin_y_In, &b_tgc_coin_y_In);
   fChain->SetBranchAddress("tgc_coin_z_In", &tgc_coin_z_In, &b_tgc_coin_z_In);
   fChain->SetBranchAddress("tgc_coin_x_Out", &tgc_coin_x_Out, &b_tgc_coin_x_Out);
   fChain->SetBranchAddress("tgc_coin_y_Out", &tgc_coin_y_Out, &b_tgc_coin_y_Out);
   fChain->SetBranchAddress("tgc_coin_z_Out", &tgc_coin_z_Out, &b_tgc_coin_z_Out);
   fChain->SetBranchAddress("tgc_coin_width_In", &tgc_coin_width_In, &b_tgc_coin_width_In);
   fChain->SetBranchAddress("tgc_coin_width_Out", &tgc_coin_width_Out, &b_tgc_coin_width_Out);
   fChain->SetBranchAddress("tgc_coin_width_R", &tgc_coin_width_R, &b_tgc_coin_width_R);
   fChain->SetBranchAddress("tgc_coin_width_Phi", &tgc_coin_width_Phi, &b_tgc_coin_width_Phi);
   fChain->SetBranchAddress("tgc_coin_isAside", &tgc_coin_isAside, &b_tgc_coin_isAside);
   fChain->SetBranchAddress("tgc_coin_isForward", &tgc_coin_isForward, &b_tgc_coin_isForward);
   fChain->SetBranchAddress("tgc_coin_isStrip", &tgc_coin_isStrip, &b_tgc_coin_isStrip);
   fChain->SetBranchAddress("tgc_coin_isInner", &tgc_coin_isInner, &b_tgc_coin_isInner);
   fChain->SetBranchAddress("tgc_coin_type", &tgc_coin_type, &b_tgc_coin_type);
   fChain->SetBranchAddress("tgc_coin_trackletId", &tgc_coin_trackletId, &b_tgc_coin_trackletId);
   fChain->SetBranchAddress("tgc_coin_trackletIdStrip", &tgc_coin_trackletIdStrip, &b_tgc_coin_trackletIdStrip);
   fChain->SetBranchAddress("tgc_coin_phi", &tgc_coin_phi, &b_tgc_coin_phi);
   fChain->SetBranchAddress("tgc_coin_roi", &tgc_coin_roi, &b_tgc_coin_roi);
   fChain->SetBranchAddress("tgc_coin_pt", &tgc_coin_pt, &b_tgc_coin_pt);
   fChain->SetBranchAddress("tgc_coin_delta", &tgc_coin_delta, &b_tgc_coin_delta);
   fChain->SetBranchAddress("tgc_coin_sub", &tgc_coin_sub, &b_tgc_coin_sub);
   fChain->SetBranchAddress("tgc_coin_veto", &tgc_coin_veto, &b_tgc_coin_veto);
   fChain->SetBranchAddress("tgc_coin_bunch", &tgc_coin_bunch, &b_tgc_coin_bunch);
   fChain->SetBranchAddress("tgc_coin_inner", &tgc_coin_inner, &b_tgc_coin_inner);
   fChain->SetBranchAddress("muctpi_ndatawords", &muctpi_ndatawords, &b_muctpi_ndatawords);
   fChain->SetBranchAddress("muctpi_eta", &muctpi_eta, &b_muctpi_eta);
   fChain->SetBranchAddress("muctpi_phi", &muctpi_phi, &b_muctpi_phi);
   fChain->SetBranchAddress("muctpi_source", &muctpi_source, &b_muctpi_source);
   fChain->SetBranchAddress("muctpi_hemisphere", &muctpi_hemisphere, &b_muctpi_hemisphere);
   fChain->SetBranchAddress("muctpi_bcid", &muctpi_bcid, &b_muctpi_bcid);
   fChain->SetBranchAddress("muctpi_sectorID", &muctpi_sectorID, &b_muctpi_sectorID);
   fChain->SetBranchAddress("muctpi_thrNumber", &muctpi_thrNumber, &b_muctpi_thrNumber);
   fChain->SetBranchAddress("muctpi_roi", &muctpi_roi, &b_muctpi_roi);
   fChain->SetBranchAddress("muctpi_veto", &muctpi_veto, &b_muctpi_veto);
   fChain->SetBranchAddress("muctpi_charge", &muctpi_charge, &b_muctpi_charge);
   fChain->SetBranchAddress("muctpi_candidateVetoed", &muctpi_candidateVetoed, &b_muctpi_candidateVetoed);
   fChain->SetBranchAddress("HLT_info_n", &HLT_info_n, &b_HLT_info_n);
   fChain->SetBranchAddress("HLT_info_chain", &HLT_info_chain, &b_HLT_info_chain);
   fChain->SetBranchAddress("HLT_info_isPassed", &HLT_info_isPassed, &b_HLT_info_isPassed);
   fChain->SetBranchAddress("HLT_info_typeVec", &HLT_info_typeVec, &b_HLT_info_typeVec);
   fChain->SetBranchAddress("HLT_info_ptVec", &HLT_info_ptVec, &b_HLT_info_ptVec);
   fChain->SetBranchAddress("HLT_info_etaVec", &HLT_info_etaVec, &b_HLT_info_etaVec);
   fChain->SetBranchAddress("HLT_info_phiVec", &HLT_info_phiVec, &b_HLT_info_phiVec);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_m", &mc_m, &b_mc_m);
   fChain->SetBranchAddress("mc_charge", &mc_charge, &b_mc_charge);
   fChain->SetBranchAddress("TGC_Run3_n", &TGC_Run3_n, &b_TGC_Run3_n);
   fChain->SetBranchAddress("TGC_Run3_pt", &TGC_Run3_pt, &b_TGC_Run3_pt);
   fChain->SetBranchAddress("TGC_Run3_type", &TGC_Run3_type, &b_TGC_Run3_type);
   fChain->SetBranchAddress("TGC_Run3_station", &TGC_Run3_station, &b_TGC_Run3_station);
   fChain->SetBranchAddress("TGC_Run3_DR", &TGC_Run3_DR, &b_TGC_Run3_DR);
   fChain->SetBranchAddress("TGC_Run3_DPhi", &TGC_Run3_DPhi, &b_TGC_Run3_DPhi);
   fChain->SetBranchAddress("TGC_Run3_TypeDPhi", &TGC_Run3_TypeDPhi, &b_TGC_Run3_TypeDPhi);
   fChain->SetBranchAddress("TGC_Run3_TypeDR", &TGC_Run3_TypeDR, &b_TGC_Run3_TypeDR);
   fChain->SetBranchAddress("TGC_Run3_Side", &TGC_Run3_Side, &b_TGC_Run3_Side);
   fChain->SetBranchAddress("TGC_Run3_RoI", &TGC_Run3_RoI, &b_TGC_Run3_RoI);
   fChain->SetBranchAddress("TGC_Run3_PhiSector", &TGC_Run3_PhiSector, &b_TGC_Run3_PhiSector);
   fChain->SetBranchAddress("TGC_Run3_IsEndcap", &TGC_Run3_IsEndcap, &b_TGC_Run3_IsEndcap);
   fChain->SetBranchAddress("TGC_Run3_TrackletIdWire", &TGC_Run3_TrackletIdWire, &b_TGC_Run3_TrackletIdWire);
   fChain->SetBranchAddress("TGC_Run3_TrackletIdStrip", &TGC_Run3_TrackletIdStrip, &b_TGC_Run3_TrackletIdStrip);
   fChain->SetBranchAddress("TGC_Run3_x", &TGC_Run3_x, &b_TGC_Run3_x);
   fChain->SetBranchAddress("TGC_Run3_y", &TGC_Run3_y, &b_TGC_Run3_y);
   fChain->SetBranchAddress("TGC_Run3_z", &TGC_Run3_z, &b_TGC_Run3_z);
   fChain->SetBranchAddress("TGC_Run3_R", &TGC_Run3_R, &b_TGC_Run3_R);
   fChain->SetBranchAddress("TGC_Run3_Phi", &TGC_Run3_Phi, &b_TGC_Run3_Phi);
   Notify();
   InitHist();
}

Bool_t pTDistribution::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void pTDistribution::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t pTDistribution::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef pTDistribution_cxx
