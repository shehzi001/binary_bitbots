































#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <math.h>


void BkjIW::UzANC(double*fab0A,double*M0ljj){double Wf3h1=*fab0A,oq_C2=*M0ljj,
Ii_Ca=kJJBB*(oq_C2-Wf3h1)+v1pqM;*fab0A+=Ii_Ca;*M0ljj-=Ii_Ca;if(*fab0A<=*M0ljj){
return;}else{*fab0A=Wf3h1;*M0ljj=oq_C2;}return;}

void BkjIW::KT8lW(double*fab0A,double*M0ljj){double Wf3h1=*fab0A,oq_C2=*M0ljj;*
fab0A=(Wf3h1-v1pqM-kJJBB*(oq_C2+Wf3h1))/(1.0-2.0*kJJBB);*M0ljj=(oq_C2+v1pqM-
kJJBB*(oq_C2+Wf3h1))/(1.0-2.0*kJJBB);if(*fab0A>*M0ljj){*fab0A=Wf3h1;*M0ljj=oq_C2
;}if(ErhpP(*fab0A)!=ErhpP(*M0ljj)){if(fabs(*M0ljj)>fabs(*fab0A)){*fab0A=0.0;}
else{*M0ljj=0.0;}}return;}

double BkjIW::nVxxa(const double&ZjvIm){unsigned int i=(0x167b+700-0x1937);
double ReturnValue=1.0,Time=ZjvIm;if(Time>50.0){Time*=0.1;for(i=
(0x3b2+979-0x785);i<(0x1ac9+217-0x1b96);i++){if(Time>10.0){Time*=0.1;ReturnValue
*=4.0;}else{break;}}return(ReturnValue);}else{return(0.0);}}

unsigned int BkjIW::AkYML(const RMLBoolVector&AcIVe){unsigned int i=
(0x13e0+1538-0x19e2),lsv47=(0x44b+662-0x6e1);for(i=(0x103c+4351-0x213b);i<AcIVe.
VectorDimension;i++){if(AcIVe.VecData[i]){lsv47++;}}return(lsv47);}
