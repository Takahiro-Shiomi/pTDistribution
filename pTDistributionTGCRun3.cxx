#include "pTDistribution.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <typeinfo>
#include "TVector3.h"
#include "TVector2.h"

using namespace std;

Int_t pTDistribution::TGC_Run3(float offline_pt)
{
    int pT=99999999;
    float dR=100;
    for(int j=0;j!=TGC_Run3_n;j++){
        if((*TGC_Run3_type)[j]!=2)continue;
        int TGC_pt=(*TGC_Run3_pt)[j];
        float TGC_x=TGC_Run3_x->at(j);
        float TGC_y=TGC_Run3_y->at(j);
        float TGC_z=TGC_Run3_z->at(j);
        TVector3 v1;
        v1.SetXYZ(TGC_x,TGC_y,TGC_z);
        float TGC_eta=v1.PseudoRapidity();
        float TGC_phi=v1.Phi();

        float delta_eta=(extEta-TGC_eta);
        float delta_phi=TVector2::Phi_mpi_pi(extPhi-TGC_phi);
        float TGC_dR=sqrt(delta_eta*delta_eta + delta_phi*delta_phi);
        if(TGC_dR<dR){
            dR=TGC_dR;
            pT=TGC_pt;
        }
    }
    if(dR<=0.03){return pT;}
    else{return 0;}
}
