#include "pTDistribution.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <typeinfo>
#include "TVector2.h"

using namespace std;

Int_t pTDistribution::RPC_Run3(float offline_pt)
{
    int pT=99999999;
    float dR=100;
    for(int j=0;j!=muctpi_ndatawords;j++){
        if(muctpi_source->at(j)!=0){continue;}
        int RPC_pt=muctpi_thrNumber->at(j);
        float RPC_eta=muctpi_eta->at(j);
        float RPC_phi=muctpi_phi->at(j);

        float delta_eta=(extEta-RPC_eta);
        float delta_phi=TVector2::Phi_mpi_pi(extPhi-RPC_phi);
        float RPC_dR=sqrt(delta_eta*delta_eta + delta_phi*delta_phi);
        if(RPC_dR<dR){
            dR=RPC_dR;
            pT=RPC_pt;
        }
    }
    if(dR<=0.1){return pT;}
    else{return 0;}
}
