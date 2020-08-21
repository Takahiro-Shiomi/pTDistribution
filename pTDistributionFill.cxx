#include "pTDistribution.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

void pTDistribution::FillHist()
{
    //Offline Start
    for(int i=0;i!=muon_n;i++){
        if(muon_author->at(i)!=1 || muon_Type->at(i)!=0)continue;
        float offline_pt=muon_pt->at(i);
        if(!OfflineTGC(i, ext_mu_size->at(i))){continue;} 
        //if(!OfflineRPC(i, ext_mu_size->at(i))){continue;} 
        h_off->Fill(offline_pt/1000);

        //Run-3 Start
        int pT = TGC_Run3(offline_pt/1000);
        //int pT = RPC_Run3(offline_pt/1000);
        //Run3 End
        //TGC
        if(pT>=1&&pT<=15){
            for(int j=1;j<16;j++){
                if(pT==j){
                    h_tgc[j-1]->Fill(offline_pt/1000);
                }
            }
        }
        //RPC
        /*
        if(pT>=1&&pT<=6){
            for(int j=1;j<7;j++){
                if(pT==j){
                    h_rpc[j-1]->Fill(offline_pt/1000);
                }
            }
        }
        */
    }
}
