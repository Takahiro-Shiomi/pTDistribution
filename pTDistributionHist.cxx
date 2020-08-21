#include "pTDistribution.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include <vector>
#include <iostream>

using namespace std;

void pTDistribution::InitHist(){
    h_off=new TH1D("h_off",";p^{offline}_{T};Events",90,0,30);
    for(int i=0;i!=6;i++){
        h_rpc[i]=new TH1D(Form("h_rpc%d",i),";p^{offline}_{T} [GeV];Events",90,0,30);
    }
    for(int i=0;i!=15;i++){
        h_tgc[i]=new TH1D(Form("h_tgc%d",i),";p^{offline}_{T} [GeV];Events",90,0,30);
    }
}

void pTDistribution::EndHist(){
    if(h_off!=0){delete h_off;}
    for(int i=0;i<6;i++){
        if(h_rpc[i]!=0){delete h_rpc[i];}
    }
    for(int i=0;i<15;i++){
        if(h_tgc[i]!=0){delete h_tgc[i];}
    }
}

