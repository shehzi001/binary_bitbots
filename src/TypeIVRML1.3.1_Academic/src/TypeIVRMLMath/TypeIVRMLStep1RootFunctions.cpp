



































#include <TypeIVRMLStep1RootFunctions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep1Decisions.h>
#include <math.h>
#ifdef WIN32
#pragma\
 warning( disable : 4100 )	// to suppress the C4100 compiler warning (unreferenced formal parameter)
#endif


void BkjIW::wEEQc(const double&gdHj5,const double&twQI8,const double&S7nLL,const
 double&mkefz,const double&_6T77,const double&rmc9U,double*iqugE,double*YtA02){
if(pbAzH(twQI8,gdHj5,S7nLL,mkefz,_6T77)){
*iqugE=(lJXU0(twQI8)+2.0*_6T77*(mkefz-S7nLL))/(2.0*gdHj5*_6T77);}else{*iqugE=0.0
;}
*YtA02=(lJXU0(twQI8)-2.0*lJXU0(gdHj5)+2.0*_6T77*(rmc9U-S7nLL))/(2.0*gdHj5*_6T77)
;if(*YtA02<0.0){*YtA02=0.0;}if(*iqugE<0.0){*iqugE=0.0;}UzANC(iqugE,YtA02);}

double BkjIW::bZTw5(const double&yZ3xv,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double j50Ec=0.0,Qogm3=0.0,mkC6P=0.0,hK7pX=0.0,gxGoz=0.0,
GLBrq=0.0,aYWrc=0.0,H8XdD=0.0,xWGRL=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;
H8XdD=_6T77*S7nLL;xWGRL=gdHj5*gdHj5;aYWrc=xWGRL*xWGRL;GLBrq=_6T77*_6T77;j50Ec=
yZ3xv*yZ3xv;hK7pX=S7nLL*S7nLL;gxGoz=mkefz*mkefz;return(
0.41666666666666666666666666666666666667e-1*(0.3e1*mkC6P+0.8e1*Qogm3*twQI8*gdHj5
-0.24e2*twQI8*gdHj5*H8XdD-0.6e1*Qogm3*(0.7e1*xWGRL+0.4e1*gdHj5*_6T77*yZ3xv+0.2e1
*H8XdD)+0.48e2*aYWrc+0.72e2*xWGRL*gdHj5*_6T77*yZ3xv+0.24e2*gdHj5*GLBrq*(VGBoE-
0.1e1*b3twg+0.2e1*yZ3xv*S7nLL)+0.12e2*xWGRL*_6T77*(0.2e1*_6T77*j50Ec+0.7e1*S7nLL
+mkefz)+0.12e2*GLBrq*(hK7pX-0.1e1*gxGoz))/gdHj5/GLBrq);}

double BkjIW::cXyBU(const double&yZ3xv,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double GdPqm=0.0,Qogm3=0.0;Qogm3=twQI8*twQI8;GdPqm=gdHj5*
gdHj5;return((-0.1e1*Qogm3+0.3e1*GdPqm+0.2e1*gdHj5*_6T77*yZ3xv+0.2e1*_6T77*S7nLL
)/_6T77);}

double BkjIW::mXRuj(const double&yZ3xv,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,hkIV6=0.0;Qogm3=twQI8*twQI8;hkIV6=gdHj5*
gdHj5;return(-0.5e0*(Qogm3+0.2e1*twQI8*gdHj5-0.8e1*hkIV6-0.4e1*gdHj5*_6T77*yZ3xv
-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz)/gdHj5/_6T77);}

void BkjIW::uAHWQ(const double&gdHj5,const double&twQI8,const double&S7nLL,const
 double&mkefz,const double&_6T77,const double&rmc9U,double*TQbbm,double*CdUgB){
double IIVB1=0.0;IIVB1=S7nLL+(lJXU0(gdHj5)-0.5*lJXU0(twQI8))/_6T77;
if(IIVB1>mkefz){
*CdUgB=-mdAxL(_6T77*(IIVB1-mkefz));}else{*CdUgB=0.0;}
*TQbbm=-mdAxL(_6T77*(rmc9U-mkefz));if(*TQbbm<-gdHj5){*TQbbm=-gdHj5;}if(*CdUgB>
0.0){*CdUgB=0.0;}UzANC(TQbbm,CdUgB);return;}

double BkjIW::hb_uG(const double&yP0aV,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,H8XdD=0.0,xWGRL=0.0,vHzX3=0.0,mkC6P=0.0,
JsUoY=0.0,o9ErS=0.0,jQLaG=0.0,van7F=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;
H8XdD=_6T77*S7nLL;xWGRL=gdHj5*gdHj5;jQLaG=yP0aV*yP0aV;van7F=jQLaG*jQLaG;vHzX3=
_6T77*_6T77;JsUoY=S7nLL*S7nLL;o9ErS=mkefz*mkefz;return(
0.41666666666666666666666666666667e-1*(-0.3e1*mkC6P+0.8e1*Qogm3*twQI8*gdHj5-
0.24e2*twQI8*gdHj5*H8XdD-0.6e1*Qogm3*(xWGRL-0.2e1*H8XdD)+0.12e2*van7F+0.24e2*
jQLaG*_6T77*mkefz-0.24e2*gdHj5*(jQLaG*yP0aV+vHzX3*(-0.1e1*VGBoE+b3twg)+0.2e1*
yP0aV*_6T77*mkefz)+0.12e2*vHzX3*(-0.1e1*JsUoY+o9ErS)+0.12e2*xWGRL*(jQLaG+_6T77*(
S7nLL+mkefz)))/gdHj5/vHzX3);}

double BkjIW::_WRKy(const double&yP0aV,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,hkIV6=0.0,oZTgR=0.0;Qogm3=gdHj5*gdHj5;hkIV6
=yP0aV*yP0aV;oZTgR=_6T77*_6T77;return((0.1e1*Qogm3*yP0aV-0.3e1*gdHj5*hkIV6+0.2e1
*hkIV6*yP0aV-0.2e1*gdHj5*_6T77*mkefz+0.2e1*yP0aV*_6T77*mkefz)/gdHj5/oZTgR);}

double BkjIW::XGqSK(const double&yP0aV,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double hkIV6=0.0,H8XdD=0.0,Qogm3=0.0;Qogm3=twQI8*twQI8;hkIV6
=gdHj5*gdHj5;H8XdD=yP0aV*yP0aV;return(0.5e0*(Qogm3-0.2e1*twQI8*gdHj5+0.2e1*hkIV6
-0.4e1*gdHj5*yP0aV+0.2e1*H8XdD-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz)/gdHj5/_6T77)
;}

void BkjIW::FvvwK(const double&gdHj5,const double&twQI8,const double&S7nLL,const
 double&mkefz,const double&_6T77,const double&rmc9U,double*xFJxR,double*UHdwp){
double U7YXo=0.0;U7YXo=S7nLL+(lJXU0(twQI8)-2.0*lJXU0(gdHj5))/(2.0*_6T77);if(
U7YXo>mkefz){*xFJxR=twQI8;}else{
*xFJxR=mdAxL(0.5*(lJXU0(twQI8)+2.0*lJXU0(gdHj5)+2.0*_6T77*(mkefz-S7nLL)));}
*UHdwp=mdAxL(0.5*(lJXU0(twQI8)+2.0*_6T77*(rmc9U-S7nLL)));if(*UHdwp>gdHj5){*UHdwp
=gdHj5;}if(*xFJxR<0.0){*xFJxR=0.0;}UzANC(xFJxR,UHdwp);return;}

double BkjIW::pf4Ta(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double MaOvd=0.0,Qogm3=0.0,mkC6P=0.0,j50Ec=0.0,wnP82=0.0,
xWGRL=0.0,noAZe=0.0,ZnLLn=0.0,H8XdD=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;
H8XdD=_6T77*S7nLL;xWGRL=gdHj5*gdHj5;noAZe=UndtT*UndtT;ZnLLn=noAZe*noAZe;wnP82=
_6T77*_6T77;j50Ec=S7nLL*S7nLL;MaOvd=mkefz*mkefz;return(
0.41666666666666666666666666666667e-1*(0.3e1*mkC6P+0.8e1*Qogm3*twQI8*gdHj5-
0.24e2*twQI8*gdHj5*H8XdD-0.6e1*Qogm3*(xWGRL+0.4e1*gdHj5*UndtT+0.2e1*noAZe+0.2e1*
H8XdD)+0.12e2*ZnLLn+0.24e2*noAZe*_6T77*S7nLL+0.24e2*gdHj5*(noAZe*UndtT+wnP82*(
VGBoE-0.1e1*b3twg)+0.2e1*UndtT*_6T77*S7nLL)+0.12e2*wnP82*(j50Ec-0.1e1*MaOvd)+
0.12e2*xWGRL*(noAZe+_6T77*(S7nLL+mkefz)))/gdHj5/wnP82);}

double BkjIW::feOXP(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,vHzX3=0.0,yXDWE=0.0,PtThk=0.0;Qogm3=twQI8*
twQI8;PtThk=gdHj5*gdHj5;yXDWE=UndtT*UndtT;vHzX3=_6T77*_6T77;return((Qogm3*(-
0.1e1*gdHj5-0.1e1*UndtT)+0.1e1*PtThk*UndtT+0.3e1*gdHj5*yXDWE+0.2e1*yXDWE*UndtT+
0.2e1*gdHj5*_6T77*S7nLL+0.2e1*UndtT*_6T77*S7nLL)/gdHj5/vHzX3);}

double BkjIW::OjQVJ(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,hkIV6=0.0,H8XdD=0.0;Qogm3=twQI8*twQI8;hkIV6
=gdHj5*gdHj5;H8XdD=UndtT*UndtT;return(-0.5e0*(Qogm3+0.2e1*twQI8*gdHj5-0.2e1*
hkIV6-0.4e1*gdHj5*UndtT-0.2e1*H8XdD-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz)/gdHj5/
_6T77);}

void BkjIW::GKo70(const double&gdHj5,const double&twQI8,const double&S7nLL,const
 double&mkefz,const double&_6T77,const double&rmc9U,double*xFJxR,double*UHdwp){
double amxuU=0.0,PMMH6=0.0,OC6bN=0.0;amxuU=S7nLL+0.5*lJXU0(twQI8)/_6T77;if(amxuU
>mkefz){*xFJxR=twQI8;}else{
*xFJxR=mdAxL(0.5*(lJXU0(twQI8)+2.0*_6T77*(mkefz-S7nLL)));}
PMMH6=mdAxL(0.5*(lJXU0(_6T77)*(lJXU0(twQI8)+2.0*lJXU0(gdHj5))+_NEO8(_6T77)*(
mkefz-S7nLL)))/_6T77;if(PMMH6>gdHj5){PMMH6=gdHj5;}
OC6bN=mdAxL(0.5*(lJXU0(twQI8)+2.0*_6T77*(rmc9U-S7nLL)));if(OC6bN>gdHj5){OC6bN=
gdHj5;}if(OC6bN<PMMH6){*UHdwp=OC6bN;}else{*UHdwp=PMMH6;}if(*xFJxR<0.0){*xFJxR=
0.0;}UzANC(xFJxR,UHdwp);return;}

double BkjIW::Pudeu(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double jQLaG=0.0,Qogm3=0.0,yXDWE=0.0,MaOvd=0.0;Qogm3=twQI8*
twQI8;yXDWE=UndtT*UndtT;jQLaG=mdAxL(-0.2e1*Qogm3+0.4e1*yXDWE+0.4e1*_6T77*S7nLL-
0.4e1*_6T77*mkefz);MaOvd=_6T77*_6T77;return(
0.8333333333333333333333333333333333333333333333333e-1*(0.4e1*Qogm3*twQI8-0.12e2
*twQI8*_6T77*S7nLL-0.3e1*Qogm3*(0.4e1*UndtT+jQLaG)+0.12e2*yXDWE*UndtT+0.24e2*
UndtT*_6T77*S7nLL+0.6e1*_6T77*(0.2e1*_6T77*(VGBoE-0.1e1*b3twg)+(S7nLL+mkefz)*
jQLaG)+0.6e1*yXDWE*jQLaG)/MaOvd);}

double BkjIW::njmTh(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double GLBrq=0.0,Qogm3=0.0,hkIV6=0.0,yXDWE=0.0,yZ3xv=0.0,
van7F=0.0;Qogm3=UndtT*UndtT;hkIV6=UndtT*_6T77;yXDWE=twQI8*twQI8;yZ3xv=_6T77*
S7nLL;van7F=mdAxL(-0.2e1*yXDWE+0.4e1*Qogm3+0.4e1*yZ3xv-0.4e1*_6T77*mkefz);GLBrq=
_6T77*_6T77;return((0.6e1*Qogm3*UndtT+0.6e1*hkIV6*S7nLL-0.2e1*hkIV6*mkefz+0.3e1*
Qogm3*van7F+0.2e1*yZ3xv*van7F+yXDWE*(-0.3e1*UndtT-0.1e1*van7F))/GLBrq/van7F);}

double BkjIW::N_eGz(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double yZ3xv=0.0,GdPqm=0.0,W9Kuq=0.0;GdPqm=twQI8*twQI8;W9Kuq
=UndtT*UndtT;yZ3xv=mdAxL(-0.2e1*GdPqm+0.4e1*W9Kuq+0.4e1*_6T77*S7nLL-0.4e1*_6T77*
mkefz);return((-0.1e1*twQI8+0.2e1*UndtT+yZ3xv)/_6T77);}

void BkjIW::aXdEM(const double&gdHj5,const double&twQI8,const double&S7nLL,const
 double&mkefz,const double&_6T77,const double&rmc9U,double*xFJxR,double*UHdwp){
double t4YDp=0.0;*UHdwp=twQI8;t4YDp=S7nLL+(0.5*lJXU0(twQI8)+lJXU0(gdHj5))/_6T77;
if(t4YDp<mkefz){*xFJxR=0.0;}else{
*xFJxR=mdAxL(0.5*(lJXU0(twQI8)+2.0*lJXU0(gdHj5)+2.0*_6T77*(S7nLL-mkefz)));}if(*
xFJxR<0.0){*xFJxR=0.0;}if(*UHdwp<0.0){*UHdwp=0.0;}UzANC(xFJxR,UHdwp);return;}

double BkjIW::vyuDp(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double wnP82=0.0,Qogm3=0.0,mkC6P=0.0,j50Ec=0.0,MaOvd=0.0,
xWGRL=0.0,ZnLLn=0.0,noAZe=0.0,H8XdD=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;
H8XdD=_6T77*S7nLL;xWGRL=gdHj5*gdHj5;noAZe=UndtT*UndtT;ZnLLn=noAZe*noAZe;wnP82=
_6T77*_6T77;j50Ec=S7nLL*S7nLL;MaOvd=mkefz*mkefz;return(
0.416666666666666666666666666666666667e-1*(-0.3e1*mkC6P+0.8e1*Qogm3*twQI8*gdHj5+
0.24e2*twQI8*gdHj5*H8XdD+0.6e1*Qogm3*(xWGRL-0.4e1*gdHj5*UndtT+0.2e1*noAZe-0.2e1*
H8XdD)-0.12e2*ZnLLn+0.24e2*noAZe*_6T77*S7nLL+0.24e2*gdHj5*(noAZe*UndtT+wnP82*(
VGBoE-0.1e1*b3twg)-0.2e1*UndtT*_6T77*S7nLL)-0.12e2*wnP82*(j50Ec-0.1e1*MaOvd)-
0.12e2*xWGRL*(noAZe-0.1e1*_6T77*(S7nLL+mkefz)))/gdHj5/wnP82);}

double BkjIW::sypVN(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,hkIV6=0.0,yXDWE=0.0,vHzX3=0.0;Qogm3=gdHj5*
gdHj5;hkIV6=UndtT*UndtT;yXDWE=twQI8*twQI8;vHzX3=_6T77*_6T77;return((-0.1e1*Qogm3
*UndtT+0.3e1*gdHj5*hkIV6-0.2e1*hkIV6*UndtT+yXDWE*(-0.1e1*gdHj5+0.1e1*UndtT)-
0.2e1*gdHj5*_6T77*S7nLL+0.2e1*UndtT*_6T77*S7nLL)/gdHj5/vHzX3);}

double BkjIW::SGNTA(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,noAZe=0.0,GdPqm=0.0,OUFFp=0.0;Qogm3=twQI8*
twQI8;GdPqm=gdHj5*gdHj5;OUFFp=UndtT*UndtT;noAZe=_6T77*_6T77;return((0.1e1*Qogm3-
0.1e1*GdPqm+0.6e1*gdHj5*UndtT-0.6e1*OUFFp+0.2e1*_6T77*S7nLL)/gdHj5/noAZe);}

double BkjIW::ZUHlg(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double W9Kuq=0.0,yXDWE=0.0,Qogm3=0.0;Qogm3=twQI8*twQI8;W9Kuq
=gdHj5*gdHj5;yXDWE=UndtT*UndtT;return(0.5e0*(-0.1e1*Qogm3+0.2e1*twQI8*gdHj5+
0.2e1*W9Kuq-0.4e1*gdHj5*UndtT+0.2e1*yXDWE-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz)/
gdHj5/_6T77);}

void BkjIW::oWl1f(const double&gdHj5,const double&twQI8,const double&S7nLL,const
 double&mkefz,const double&_6T77,const double&rmc9U,double*xFJxR,double*UHdwp){
double IIVB1=0.0;IIVB1=S7nLL+(lJXU0(gdHj5)-0.5*lJXU0(twQI8))/_6T77;if(IIVB1>
mkefz){*UHdwp=twQI8;}else{
*UHdwp=mdAxL(0.5*(lJXU0(twQI8)+2.0*lJXU0(gdHj5)+2.0*_6T77*(S7nLL-mkefz)));}*
xFJxR=0.0;UzANC(xFJxR,UHdwp);return;}

double BkjIW::oDY5u(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double MaOvd=0.0,Qogm3=0.0,yXDWE=0.0,jQLaG=0.0;Qogm3=twQI8*
twQI8;yXDWE=UndtT*UndtT;jQLaG=mdAxL(-0.2e1*Qogm3+0.4e1*yXDWE-0.4e1*_6T77*S7nLL+
0.4e1*_6T77*mkefz);MaOvd=_6T77*_6T77;return(
0.8333333333333333333333333333333333333333e-1*(0.4e1*Qogm3*twQI8+0.12e2*twQI8*
_6T77*S7nLL+0.3e1*Qogm3*(-0.4e1*UndtT+jQLaG)+0.12e2*yXDWE*UndtT-0.24e2*UndtT*
_6T77*S7nLL-0.6e1*yXDWE*jQLaG+0.6e1*_6T77*(0.2e1*_6T77*(VGBoE-0.1e1*b3twg)+(
S7nLL+mkefz)*jQLaG))/MaOvd);}

double BkjIW::yT7D7(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double GLBrq=0.0,Qogm3=0.0,yXDWE=0.0,van7F=0.0,hkIV6=0.0,
yZ3xv=0.0;Qogm3=UndtT*UndtT;hkIV6=UndtT*_6T77;yXDWE=twQI8*twQI8;yZ3xv=_6T77*
S7nLL;van7F=mdAxL(-0.2e1*yXDWE+0.4e1*Qogm3-0.4e1*yZ3xv+0.4e1*_6T77*mkefz);GLBrq=
_6T77*_6T77;return((-0.6e1*Qogm3*UndtT+0.6e1*hkIV6*S7nLL-0.2e1*hkIV6*mkefz+0.3e1
*Qogm3*van7F-0.2e1*yZ3xv*van7F+yXDWE*(0.3e1*UndtT-0.1e1*van7F))/GLBrq/van7F);}

double BkjIW::M3TyU(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double Qogm3=0.0,Labnu=0.0,van7F=0.0,URT0J=0.0,mkC6P=0.0,
ZnLLn=0.0,saOT4=0.0,UAO43=0.0,CQMLR=0.0,hkIV6=0.0,ic3dh=0.0,W9Kuq=0.0;Qogm3=
twQI8*twQI8;mkC6P=Qogm3*Qogm3;hkIV6=UndtT*UndtT;W9Kuq=hkIV6*hkIV6;Labnu=_6T77*
S7nLL;van7F=_6T77*mkefz;URT0J=-0.2e1*Qogm3+0.4e1*hkIV6-0.4e1*Labnu+0.4e1*van7F;
ZnLLn=mdAxL(URT0J);saOT4=_6T77*_6T77;UAO43=S7nLL*S7nLL;CQMLR=mkefz*mkefz;ic3dh=
mdAxL(URT0J);return((-0.6e1*mkC6P-0.48e2*W9Kuq+hkIV6*_6T77*(0.72e2*S7nLL-0.72e2*
mkefz)+0.24e2*hkIV6*UndtT*ZnLLn+UndtT*_6T77*(-0.24e2*S7nLL+0.24e2*mkefz)*ZnLLn+
saOT4*(-0.24e2*UAO43+0.32e2*S7nLL*mkefz-0.8e1*CQMLR)+Qogm3*(0.36e2*hkIV6-0.24e2*
Labnu+0.16e2*van7F-0.12e2*UndtT*ZnLLn))/saOT4/ic3dh/URT0J);}

double BkjIW::O3Ygw(const double&UndtT,const double&twQI8,const double&S7nLL,
const double&mkefz,const double&VGBoE,const double&b3twg,const double&_6T77,
const double&gdHj5){double xWGRL=0.0,mkC6P=0.0,hkIV6=0.0;mkC6P=twQI8*twQI8;hkIV6
=UndtT*UndtT;xWGRL=mdAxL(-0.2e1*mkC6P+0.4e1*hkIV6-0.4e1*_6T77*S7nLL+0.4e1*_6T77*
mkefz);return((twQI8-0.2e1*UndtT+xWGRL)/_6T77);}
