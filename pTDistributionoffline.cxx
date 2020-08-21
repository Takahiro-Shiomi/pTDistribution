#include "pTDistribution.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <typeinfo>
#include "TMath.h"

using namespace std;

Bool_t pTDistribution::OfflineRPC(int i, int j)
{
    extEta=-100;
    extPhi=-100;

    float Eta=0;
    float Phi=0;
    int   can=0;
    bool  Flag=false;
    if(ext_mu_type->at(i)==1){
        for(int ext=0;ext<j;ext++){
            int extTarget=ext_mu_targetVec->at(i).at(ext);
            float extDistance=ext_mu_targetDistanceVec->at(i).at(ext);

            if(extTarget!=2)continue;
            if(abs(extDistance)<6500||abs(extDistance)>10500)continue;

            float exteta=ext_mu_targetEtaVec->at(i).at(ext);
            float extphi=ext_mu_targetPhiVec->at(i).at(ext);

            if(abs(exteta)>=1.06)continue;
            if(abs(extphi)>(TMath::Pi()))continue;
            Eta=Eta+exteta;
            Phi=Phi+extphi;
            can=can+1;
        }
    }
    if(can>=1){
        extEta=Eta/can;
        extPhi=Phi/can;
        if(abs(extEta)<1.06 && abs(extPhi)<=TMath::Pi()){Flag=true;}
    }
    return Flag;
}

Bool_t pTDistribution::OfflineTGC(int i, int j)
{
    extEta=-100;
    extPhi=-100;

    float Z=9999;
    bool  Flag=false;
    if(ext_mu_type->at(i)==1){
        for(int ext=0;ext<j;ext++){
            int extTarget=ext_mu_targetVec->at(i).at(ext);
            float extDistance=ext_mu_targetDistanceVec->at(i).at(ext);

            if(extTarget!=1)continue;
            if(abs(extDistance)<15000 || abs(extDistance)>15300)continue;

            float exteta=ext_mu_targetEtaVec->at(i).at(ext);
            float extphi=ext_mu_targetPhiVec->at(i).at(ext);

            if(abs(exteta)<1.05)continue;
            if(abs(extphi)>(TMath::Pi()))continue;
            if(abs(15280-abs(extDistance))<Z){
                Z=abs(15280-abs(extDistance));
                extEta=exteta;
                extPhi=extphi;
                Flag=true;
            }
        }
    }
    return Flag;
}
