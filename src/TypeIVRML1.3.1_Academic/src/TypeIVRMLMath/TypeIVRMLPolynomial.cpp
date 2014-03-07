
































#include <TypeIVRMLPolynomial.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>


BkjIW::rO2fB::rO2fB(){_Bp69=0.0;yTfgT=0.0;PG51e=0.0;FTf8f=0.0;Mlr3t=0.0;d6snH=
(0xe38+47-0xe67);}

BkjIW::rO2fB::~rO2fB(){}


void BkjIW::rO2fB::TL5H9(const double&FIIgF,const double&ievOa,const double&
umT1c,const double&r7FrR,const double&WE0dX){_Bp69=r7FrR;yTfgT=umT1c;PG51e=ievOa
;FTf8f=FIIgF;Mlr3t=WE0dX;if(FTf8f!=0.0){d6snH=(0x16+6659-0x1a16);return;}if(
PG51e!=0.0){d6snH=(0x105a+5274-0x24f2);return;}if(yTfgT!=0.0){d6snH=
(0x203+3828-0x10f6);return;}d6snH=(0x15a8+154-0x1642);return;}

void BkjIW::rO2fB::qkMx3(double*FIIgF,double*ievOa,double*umT1c,double*r7FrR,
double*WE0dX)const{*FIIgF=this->FTf8f;*ievOa=this->PG51e;*umT1c=this->yTfgT;*
r7FrR=this->_Bp69;*WE0dX=this->Mlr3t;return;}


double BkjIW::rO2fB::cPb5F(const double&YfEuF)const{return((d6snH==
(0x14c1+1284-0x19c2))?(FTf8f*(YfEuF-Mlr3t)*(YfEuF-Mlr3t)*(YfEuF-Mlr3t)+PG51e*(
YfEuF-Mlr3t)*(YfEuF-Mlr3t)+yTfgT*(YfEuF-Mlr3t)+_Bp69):((d6snH==
(0x209+1314-0x729))?(PG51e*(YfEuF-Mlr3t)*(YfEuF-Mlr3t)+yTfgT*(YfEuF-Mlr3t)+_Bp69
):((d6snH==(0x1110+756-0x1403))?(yTfgT*(YfEuF-Mlr3t)+_Bp69):(_Bp69))));}

void BkjIW::rO2fB::wyYal(unsigned int*Z1XcN,double*PylFK,double*jHan_,double*
P8xiE)const{

if((this->d6snH==(0x1b34+2449-0x24c5))||((this->d6snH==(0x16b7+1955-0x1e59))&&(
this->yTfgT==0.0))||((this->d6snH==(0xaea+3247-0x1797))&&(this->PG51e==0.0)&&(
this->yTfgT==0.0))||((this->d6snH==(0xdfc+2636-0x1845))&&(this->FTf8f==0.0)&&(
this->PG51e==0.0)&&(this->yTfgT==0.0))){*PylFK=0.0;*jHan_=0.0;*P8xiE=0.0;*Z1XcN=
(0x1057+5754-0x26d1);}

if((this->d6snH==(0x192+2659-0xbf4))||((this->d6snH==(0x650+8354-0x26f0))&&(this
->PG51e==0.0))||((this->d6snH==(0x7b5+5055-0x1b71))&&(this->FTf8f==0.0)&&(this->
PG51e==0.0))){*PylFK=-this->_Bp69/this->yTfgT+this->Mlr3t;*jHan_=0.0;*P8xiE=0.0;
*Z1XcN=(0x18e0+1397-0x1e54);return;}

if((this->d6snH==(0x1271+3243-0x1f1a))||((this->d6snH==(0xc06+2752-0x16c3))&&(
this->FTf8f==0.0))){double ACLwR=this->_Bp69/this->PG51e,JC5lm=this->yTfgT/this
->PG51e,E4Dq2=0.25*lJXU0(JC5lm)-ACLwR;if(E4Dq2<zvn1B){
*PylFK=0.0;*jHan_=0.0;*P8xiE=0.0;*Z1XcN=(0x201+2458-0xb9b);}else{
E4Dq2=BkjIW::mdAxL(E4Dq2);*PylFK=-0.5*JC5lm+E4Dq2+this->Mlr3t;*jHan_=-0.5*JC5lm-
E4Dq2+this->Mlr3t;*P8xiE=0.0;*Z1XcN=(0x2472+602-0x26ca);}return;}

if(this->d6snH==(0x5ca+3156-0x121b)){
*PylFK=0.0;*jHan_=0.0;*P8xiE=0.0;*Z1XcN=(0xc5b+1222-0x1121);return;}return;}
