#include "/home/shiomi/RootUtils/RootUtils/TLegend_addfunc.h"
#include "/home/shiomi/RootUtils/RootUtils/TCanvas_opt.h"
#include "TStyle.h"
#include "TF1.h"
#include "TLegend.h"
#include "/home/shiomi/RootUtils/AtlasUtils.C"

using namespace std;

void datasetText()
{
  myText(0.6, 0.82, 1, "MC Simulation");
}
void datasetText1()
{
  myText(0.6, 0.76, 1, "5GeV<p^{offline}_{T}<10GeV");
}

void Draw()
{

    TFile *file = new TFile("./pTDistribution_Endcap_Run3_20200821_NoFullOpen.root", "read");
    TH1D *h_tgc = (TH1D*)file->Get("h_tgc9");

    double Constant = h_tgc->GetBinContent(h_tgc->GetMaximumBin());
    TF1 *f0 = new TF1("f0","([0]/(sqrt(2*TMath::Pi())*[2]*x))*exp(-pow(log(x/[1]),2)/2*pow([2],2))",2,10);
    f0->SetParameters(Constant,12,3);
    f0->SetLineColor(kRed+1);
    f0->SetFillColor(kRed+1);
    f0->SetFillStyle(3015);

    TCanvas *c1 = new TCanvas("c1","c1",1200,800);
    h_tgc->Draw();
    h_tgc->SetLineColor(kAzure-4);
    h_tgc->SetFillColor(kAzure-4);
    h_tgc->SetFillStyle(3015);
    h_tgc->Fit("f0","","",0,30);

    ATLASLabel(0.6,0.88,"Work In Progress");
    datasetText();
    //datasetText1();
    //TLegend* legend =new TLegend(0.75,0.70,1.0,0.18);
    //TLegend* legend =new TLegend(0.67,0.70,0.92,0.18);
    //legend->SetHeader("   p_{T} Threshold");

    c1->Print("./../pdf/hist_tgc_cw10.png");
}

