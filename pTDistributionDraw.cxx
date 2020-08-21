#include "pTDistribution.h"
#include "/home/shiomi/RootUtils/RootUtils/TLegend_addfunc.h"
#include "/home/shiomi/RootUtils/RootUtils/TCanvas_opt.h"
#include "TStyle.h"
#include "TF1.h"
#include "TLegend.h"
#include <TH2.h>
#include <THStack.h>
#include <TCanvas.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

void pTDistribution::DrawHist(TString pdf)
{
    TCanvas_opt *c1 = new TCanvas_opt();
    gStyle->SetOptStat(0);
    //c1->SetGrid();
    c1->SetTopMargin(0.20);
    c1->Print(pdf + "[", "pdf");

    h_off->Draw();
    c1->Print(pdf,"pdf");

    for(int i=0;i!=6;i++){
        h_rpc[i]->Draw();
        c1->Print(pdf,"pdf");
    }

    for(int i=0;i!=15;i++){
        h_tgc[i]->Draw();
        c1->Print(pdf,"pdf");
    }


    /*
    double Mean[6];
    double Sigma[6];
    double Constant[6];
    double Integral[6];
    for(int i=0;i!=6;i++){
        Mean[i]=(double)(h_rpc[i]->GetMaximumBin())/3;
        Sigma[i]=abs(h_rpc[i]->GetStdDev());
        Constant[i]=h_rpc[i]->GetBinContent(h_rpc[i]->GetMaximumBin());
        Integral[i]=h_rpc[i]->Integral();
    }
    TF1 *f0 = new TF1("f0","([0]/(sqrt(2*TMath::Pi())*[2]*x))*exp(-pow(log(x/[1]),2)/2*pow([2],2))",3,7);
    f0->SetParameters(Constant[0],4.6,5);
    f0->SetLineColor(kOrange);
    f0->SetFillColor(kOrange+1);
    f0->SetFillStyle(3015);

    TF1 *f1 = new TF1("f1","([0]/(sqrt(2*TMath::Pi())*[2]*x))*exp(-pow(log(x/[1]),2)/2*pow([2],2))",4,9);
    f1->SetParameters(Constant[1],5.8,5);
    f1->SetLineColor(kOrange);
    f1->SetFillColor(kOrange+1);
    f1->SetFillStyle(3015);

    //TF1 *f2 = new TF1("f2","([0]/(sqrt(2*TMath::Pi())*[2]*x))*exp(-pow(log(x/[1]),2)/2*pow([2],2))",4,9);
    TF1 *f2 = new TF1("f2","gaus",4,8);
    f2->SetParameters(4500,7.1,3);
    f2->SetLineColor(kOrange);
    f2->SetFillColor(kOrange+1);
    f2->SetFillStyle(3015);

    TF1 *f3 = new TF1("f3","([0]/(sqrt(2*TMath::Pi())*[2]*x))*exp(-pow(log(x/[1]),2)/2*pow([2],2))",5,13);
    f3->SetParameters(Constant[3],8.0,5);
    f3->SetLineColor(kOrange);
    f3->SetFillColor(kOrange+1);
    f3->SetFillStyle(3015);

    TF1 *f4 = new TF1("f4","([0]/(sqrt(2*TMath::Pi())*[2]*x))*exp(-pow(log(x/[1]),2)/2*pow([2],2))",7,21);
    f4->SetParameters(Constant[4],12,5);
    f4->SetLineColor(kOrange);
    f4->SetFillColor(kOrange+1);
    f4->SetFillStyle(3015);


    h_rpc[0]->Draw();
    h_rpc[0]->SetLineColor(kAzure);
    h_rpc[0]->Fit("f0","","",3,7);
    c1->Print(pdf,"pdf");

    h_rpc[1]->Draw();
    h_rpc[1]->SetLineColor(kAzure);
    h_rpc[1]->Fit("f1","","",4,9);
    c1->Print(pdf,"pdf");
    
    h_rpc[2]->Draw();
    h_rpc[2]->SetLineColor(kAzure);
    h_rpc[2]->Fit("f2","","",4,8);
    c1->Print(pdf,"pdf");
    
    h_rpc[3]->Draw();
    h_rpc[3]->SetLineColor(kAzure);
    h_rpc[3]->Fit("f3","","",5,13);
    c1->Print(pdf,"pdf");

    h_rpc[4]->Draw();
    h_rpc[4]->SetLineColor(kAzure);
    h_rpc[4]->Fit("f4","","",7,21);
    c1->Print(pdf,"pdf");

    h_rpc[5]->Draw();
    h_rpc[5]->SetLineColor(kAzure);
    c1->Print(pdf,"pdf");
    
    
    THStack *hs = new THStack("hs","");
    for(int i=0;i!=6;i++){
        h_rpc[i]->SetFillColor(kYellow);
        h_rpc[i]->SetLineColor(kBlack);
        hs->Add(h_rpc[i]);
    } 
    c1->Clear();
    h_off->Draw();
    hs->Draw("same");
    h_off->SetFillColor(kGreen);
    c1->Print(pdf,"pdf");
    */

    c1 -> Print( pdf + "]", "pdf" );
    delete c1;
}
