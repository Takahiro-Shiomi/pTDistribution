#define pTDistribution_cxx
#include "pTDistribution.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[]){
    cout << "---start---" << endl;

    TChain *tree1 = new TChain("physics", "physics");

    TString PdfLabel = argv[1];
    tree1->Add(argv[2]);
    Int_t limit_entry = atoi(argv[3]);

    TFile *fout = new TFile(Form("./rootfile/%s.root", PdfLabel.Data()), "recreate");

    //////////////Core Bigin/////////////

    pTDistribution turnoncurve(tree1);
    turnoncurve.Loop(limit_entry);
    cout << "[INFO]: Loop SUCCESS" << endl;
    turnoncurve.DrawHist("./pdf/DrawHist_" + PdfLabel + ".pdf");
    fout -> Write();
    turnoncurve.EndHist();
    cout << "[INFO]: End SUCCESS" << endl;

    //////////////Core End////////////////

    return 0;
}


void pTDistribution::Loop(int Nevents)
{
    if (fChain == 0) return;

    int nLoop = (Nevents == -1) ? fChain->GetEntries() : Nevents;
    //Long64_t nentries = fChain->GetEntriesFast();
    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nLoop;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;
        if(jentry%1000000==0){
            std::cout<<"JOBS....."<<(double)jentry/100000<<"%....COMPLETE"<<std::endl;
        }
        FillHist();
    }
}
