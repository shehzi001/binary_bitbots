


































#include <TypeIVRMLStep2RootFunctions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep1Decisions.h>
#ifdef WIN32
#pragma\
 warning( disable : 4100 )	// to suppress the C4100 compiler warning (unreferenced formal parameter)
#endif


void BkjIW::mJ3yJ(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*iqugE,double*YtA02){double Rht3r=0.0;*iqugE=0.0;
*YtA02=-(2.0*lJXU0(gdHj5)-lJXU0(twQI8)+2.0*_6T77*(S7nLL-mkefz))/(2.0*gdHj5*_6T77
);Rht3r=JQoMY-(2.0*gdHj5-twQI8)/_6T77;if(*YtA02<0.0){*YtA02=0.0;}if(*YtA02>Rht3r
){*YtA02=Rht3r;}UzANC(iqugE,YtA02);return;}

double BkjIW::MZ2jd(const double&yZ3xv,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double vHzX3=0.0,gn_Vb=0.0,UAO43=0.0,
ICmzV=0.0,aYWrc=0.0,_0IXh=0.0,UAWHP=0.0,tY4E8=0.0,FgmGX=0.0,hK7pX=0.0,gxGoz=0.0,
hTABS=0.0,sg7EJ=0.0,fnUex=0.0,WFK_p=0.0,i1EXt=0.0,Labnu=0.0,oZTgR=0.0,URT0J=0.0,
Qogm3=0.0,mkC6P=0.0,CQMLR=0.0,B8jft=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;
i1EXt=gdHj5*gdHj5;Labnu=gdHj5*_6T77;oZTgR=JQoMY*JQoMY;URT0J=oZTgR*_6T77;aYWrc=
yZ3xv*yZ3xv;_0IXh=_6T77*aYWrc;vHzX3=0.4e1*S7nLL;gn_Vb=0.4e1*mkefz;UAO43=i1EXt*
gdHj5;ICmzV=JQoMY*_6T77;CQMLR=_6T77*yZ3xv;tY4E8=ICmzV*yZ3xv;FgmGX=_6T77*_6T77;
hK7pX=0.1e1*b3twg;gxGoz=yZ3xv*S7nLL;hTABS=JQoMY*mkefz;fnUex=yZ3xv*mkefz;WFK_p=
0.1e1*fnUex;UAWHP=i1EXt*i1EXt;sg7EJ=pow(S7nLL-0.1e1*mkefz,0.2e1);B8jft=(twQI8-
0.2e1*gdHj5+_6T77*(JQoMY-0.1e1*yZ3xv));if(B8jft==0.0){B8jft=CshoR;}return(
0.41666666666666666666666666666666666667e-1*(0.5e1*mkC6P-0.4e1*Qogm3*twQI8*(
0.4e1*gdHj5+_6T77*(JQoMY+0.2e1*yZ3xv))+0.6e1*Qogm3*(0.4e1*i1EXt+0.4e1*Labnu*
yZ3xv+_6T77*(-0.1e1*URT0J+_0IXh-vHzX3+gn_Vb))-0.12e2*twQI8*(0.2e1*UAO43+i1EXt*(-
0.2e1*ICmzV+0.3e1*CQMLR)+Labnu*(-0.2e1*tY4E8+_0IXh-vHzX3+gn_Vb)-0.2e1*FgmGX*(
VGBoE-hK7pX+gxGoz+hTABS-WFK_p))+0.12e2*UAWHP+0.24e2*UAO43*_6T77*(-0.1e1*JQoMY+
yZ3xv)+0.12e2*i1EXt*_6T77*(URT0J-0.3e1*tY4E8+_0IXh-0.2e1*S7nLL+0.2e1*mkefz)+
0.12e2*gdHj5*FgmGX*(-0.4e1*VGBoE+0.4e1*b3twg+URT0J*yZ3xv-0.1e1*ICmzV*aYWrc-0.2e1
*gxGoz-0.4e1*hTABS+0.2e1*fnUex)+0.12e2*FgmGX*(sg7EJ+URT0J*(S7nLL+mkefz)+0.2e1*
ICmzV*(VGBoE-hK7pX-WFK_p)+CQMLR*(-0.2e1*VGBoE+0.2e1*b3twg-0.1e1*gxGoz+fnUex)))/
FgmGX/B8jft);}

void BkjIW::TBVIO(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*xFJxR,double*UHdwp){double MPee5=0.0,M8djz=0.0;
*UHdwp=mdAxL((double)(0.5*(lJXU0(twQI8*_6T77)+2.0*_NEO8(_6T77)*(mkefz-S7nLL))))/
_6T77;M8djz=0.5*(twQI8+JQoMY*_6T77);if(*UHdwp>M8djz){*UHdwp=M8djz;}if(*UHdwp>
gdHj5){*UHdwp=gdHj5;}
MPee5=(2.0*twQI8*JQoMY*_6T77-lJXU0(twQI8))/(2.0*_6T77);if(MPee5>(mkefz-S7nLL)){*
xFJxR=twQI8;}else{
*xFJxR=0.5*(twQI8+JQoMY*_6T77-mdAxL((double)(2.0*twQI8*JQoMY*_6T77+lJXU0(JQoMY*
_6T77)+4.0*_6T77*(S7nLL-mkefz)-lJXU0(twQI8))));}if(*xFJxR<0.0){*xFJxR=0.0;}UzANC
(xFJxR,UHdwp);return;}

double BkjIW::TtGPk(const double&UndtT,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double bM3Dr=0.0,yZ3xv=0.0,i1EXt=0.0,
ICmzV=0.0,fPSYY=0.0,CQMLR=0.0,Qogm3=0.0,_0IXh=0.0,kelfk=0.0,mkC6P=0.0,PtThk=0.0,
CiR9Z=0.0,B8jft=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;PtThk=JQoMY*_6T77;bM3Dr=
UndtT*UndtT;yZ3xv=JQoMY*JQoMY;i1EXt=yZ3xv*_6T77;_0IXh=bM3Dr*UndtT;kelfk=_6T77*
_6T77;ICmzV=0.1e1*b3twg;CQMLR=VGBoE-ICmzV+JQoMY*mkefz;fPSYY=bM3Dr*bM3Dr;CiR9Z=
pow(S7nLL-0.1e1*mkefz,0.2e1);B8jft=(twQI8-0.2e1*UndtT+PtThk);if(B8jft==0.0){
B8jft=CshoR;}return(0.416666666666666666666666666666666666666666666667e-1*(0.5e1
*mkC6P-0.4e1*Qogm3*twQI8*(0.4e1*UndtT+PtThk)+0.6e1*Qogm3*(0.4e1*bM3Dr-0.1e1*
_6T77*(i1EXt+0.4e1*S7nLL-0.4e1*mkefz))-0.24e2*twQI8*(_0IXh-0.1e1*bM3Dr*JQoMY*
_6T77+0.2e1*UndtT*_6T77*(-0.1e1*S7nLL+mkefz)-0.1e1*kelfk*CQMLR)+0.12e2*fPSYY-
0.24e2*_0IXh*JQoMY*_6T77+0.12e2*bM3Dr*_6T77*(i1EXt-0.2e1*S7nLL+0.2e1*mkefz)-
0.48e2*UndtT*kelfk*CQMLR+0.12e2*kelfk*(0.2e1*PtThk*(VGBoE-ICmzV)+CiR9Z+i1EXt*(
S7nLL+mkefz)))/kelfk/B8jft);}

void BkjIW::l7EBq(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*NPtvy,double*qCk0G){double B8jft=0.0;B8jft=(2.0*twQI8-4.0*
gdHj5+2.0*JQoMY*_6T77);if(B8jft==0.0){B8jft=CshoR;}
*qCk0G=(lJXU0(twQI8)-2.0*lJXU0(gdHj5)+2.0*_6T77*(mkefz-S7nLL))/B8jft;if(*qCk0G>
gdHj5){*qCk0G=gdHj5;}*NPtvy=twQI8;UzANC(NPtvy,qCk0G);return;}

double BkjIW::zeNBV(const double&YlsMh,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double wnP82=0.0,Qogm3=0.0,saOT4=0.0,
van7F=0.0,mkC6P=0.0,URT0J=0.0,hkIV6=0.0,GFa13=0.0,WZdBS=0.0,ICmzV=0.0,Labnu=0.0,
H8XdD=0.0,B8jft=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;hkIV6=Qogm3*twQI8;H8XdD=
0.1e1*b3twg;Labnu=pow(S7nLL-0.1e1*mkefz,0.2e1);van7F=gdHj5*gdHj5;URT0J=-0.1e1*
S7nLL+mkefz;wnP82=0.2e1*gdHj5*JQoMY*_6T77;saOT4=van7F-wnP82+0.2e1*_6T77*URT0J;
ICmzV=YlsMh*YlsMh;WZdBS=JQoMY*JQoMY;GFa13=_6T77*_6T77;B8jft=(YlsMh-0.1e1*gdHj5);
if(B8jft==0.0){B8jft=B67U4;}return(-0.41666666666666666666666666666666666667e-1*
(0.3e1*mkC6P-0.4e1*hkIV6*gdHj5+0.12e2*_6T77*(0.2e1*gdHj5*_6T77*(VGBoE-H8XdD+
JQoMY*S7nLL)+_6T77*Labnu+van7F*URT0J)+0.6e1*Qogm3*saOT4+0.6e1*ICmzV*(Qogm3-0.2e1
*twQI8*gdHj5+0.2e1*van7F-wnP82-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz)-0.4e1*YlsMh*
(0.2e1*hkIV6-0.3e1*Qogm3*gdHj5+0.3e1*twQI8*saOT4+0.3e1*_6T77*(van7F*JQoMY-0.1e1*
gdHj5*WZdBS*_6T77+0.2e1*_6T77*(VGBoE-H8XdD+JQoMY*mkefz))))/B8jft/GFa13);}

void BkjIW::RpIXV(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*xFJxR,double*UHdwp){double M8djz=0.0;
*UHdwp=twQI8+mdAxL((double)((0.5*_6T77)*(2.0*(mkefz-S7nLL)+lJXU0(twQI8)/_6T77-
2.0*twQI8*JQoMY)));M8djz=0.5*(twQI8+JQoMY*_6T77);if(*UHdwp>M8djz){*UHdwp=M8djz;}
if(*UHdwp>gdHj5){*UHdwp=gdHj5;}
*xFJxR=0.5*(twQI8+JQoMY*_6T77-mdAxL((double)(2.0*twQI8*JQoMY*_6T77+lJXU0(JQoMY*
_6T77)+4.0*_6T77*(S7nLL-mkefz)-lJXU0(twQI8))));if(*xFJxR<0.0){*xFJxR=0.0;}UzANC(
xFJxR,UHdwp);return;}

double BkjIW::Jh7fU(const double&UndtT,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double Qogm3=0.0,mkC6P=0.0,hkIV6=0.0,
W9Kuq=0.0,PtThk=0.0,bM3Dr=0.0,yZ3xv=0.0,jQLaG=0.0,vHzX3=0.0,pTjgH=0.0,hK7pX=0.0,
B8jft=0.0;Qogm3=UndtT*UndtT;mkC6P=Qogm3*Qogm3;hkIV6=twQI8*twQI8;W9Kuq=hkIV6*
hkIV6;PtThk=hkIV6*twQI8;bM3Dr=JQoMY*JQoMY;yZ3xv=_6T77*_6T77;jQLaG=JQoMY*_6T77;
vHzX3=0.1e1*b3twg;pTjgH=pow(S7nLL-0.1e1*mkefz,0.2e1);hK7pX=bM3Dr*_6T77;B8jft=(-
0.2e1*UndtT+twQI8+jQLaG);if(B8jft==0.0){B8jft=CshoR;}return(-
0.41666666666666666666666666666666666667e-1*(0.12e2*mkC6P+W9Kuq+0.4e1*PtThk*
JQoMY*_6T77+0.6e1*hkIV6*bM3Dr*yZ3xv-0.24e2*Qogm3*UndtT*(twQI8+jQLaG)-0.8e1*UndtT
*(PtThk+0.3e1*hkIV6*JQoMY*_6T77-0.6e1*yZ3xv*(VGBoE-vHzX3+JQoMY*S7nLL))-0.24e2*
twQI8*yZ3xv*(VGBoE-vHzX3+JQoMY*mkefz)-0.12e2*yZ3xv*(0.2e1*jQLaG*(VGBoE-vHzX3)-
0.1e1*pTjgH+hK7pX*(S7nLL+mkefz))+0.12e2*Qogm3*(0.2e1*hkIV6+0.2e1*twQI8*JQoMY*
_6T77+_6T77*(hK7pX-0.2e1*S7nLL+0.2e1*mkefz)))/yZ3xv/B8jft);}

void BkjIW::kWifK(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*xFJxR,double*UHdwp){double i1EXt=0.0,noAZe=0.0,jQLaG=0.0,
Qogm3=0.0,OUFFp=0.0,GdPqm=0.0,PtThk=0.0,aYWrc=0.0,oZTgR=0.0,xWGRL=0.0,tPJ7V=0.0,
yH0yU=0.0,GYP9n=0.0,Ct8M4=0.0,B8jft=0.0;

Qogm3=twQI8*twQI8;GdPqm=JQoMY*_6T77;B8jft=(0.4e1*twQI8+0.4e1*GdPqm);if(B8jft==
0.0){PtThk=kiQzO;}else{PtThk=0.1e1/B8jft;}OUFFp=Qogm3*PtThk;xWGRL=twQI8*JQoMY*
_6T77*PtThk;i1EXt=JQoMY*JQoMY;noAZe=_6T77*_6T77;jQLaG=i1EXt*noAZe*PtThk;oZTgR=
_6T77*S7nLL*PtThk;aYWrc=_6T77*mkefz*PtThk;tPJ7V=twQI8-0.1e1*OUFFp-0.2e1*xWGRL+
jQLaG-0.4e1*oZTgR+0.4e1*aYWrc;GYP9n=-(0.5e0*twQI8-0.5e0*GdPqm-0.10e1*OUFFp-
0.20e1*xWGRL+0.10e1*jQLaG-0.40e1*oZTgR+0.40e1*aYWrc);yH0yU=0.5*(twQI8+JQoMY*
_6T77);Ct8M4=0.5*(twQI8-JQoMY*_6T77);if(Ct8M4>0.0){Ct8M4=0.0;}if(tPJ7V>yH0yU){
tPJ7V=yH0yU;}if(tPJ7V>gdHj5){tPJ7V=gdHj5;}if(GYP9n<Ct8M4){GYP9n=Ct8M4;}if(GYP9n<
-gdHj5){GYP9n=-gdHj5;}
if(pbAzH(twQI8,gdHj5,S7nLL,mkefz,_6T77)){
*UHdwp=tPJ7V;if((0.5*lJXU0(twQI8)/_6T77)>(mkefz-S7nLL)){*xFJxR=twQI8;}else{
*xFJxR=(1.0/((double)mdAxL((double)2.0)))*((double)mdAxL(lJXU0(twQI8)+2.0*(mkefz
-S7nLL)*_6T77));}}else{
*xFJxR=twQI8;*UHdwp=(1.0/((double)mdAxL((double)2.0)))*((double)mdAxL(lJXU0(
twQI8)+2.0*lJXU0(GYP9n)+2.0*(mkefz-S7nLL)*_6T77));}if(*xFJxR<twQI8){*xFJxR=twQI8
;}UzANC(xFJxR,UHdwp);return;}

double BkjIW::Rj9UO(const double&UndtT,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double ZnLLn=0.0,yXDWE=0.0,GLBrq=0.0,
saOT4=0.0,noAZe=0.0,jQLaG=0.0,Qogm3=0.0,W9Kuq=0.0,pTjgH=0.0;Qogm3=twQI8*twQI8;
W9Kuq=UndtT*UndtT;yXDWE=_6T77*_6T77;noAZe=_6T77*S7nLL;jQLaG=_6T77*mkefz;ZnLLn=
mdAxL(yXDWE*(-0.1e1*Qogm3+0.2e1*W9Kuq+0.2e1*noAZe-0.2e1*jQLaG));GLBrq=mdAxL(-
0.2e1*Qogm3+0.4e1*W9Kuq+0.4e1*noAZe-0.4e1*jQLaG);saOT4=-0.8e1*JQoMY*yXDWE+
0.42426406871192851464e1*ZnLLn+_6T77*GLBrq;pTjgH=S7nLL-0.1e1*mkefz;return(
0.208333333333333333333333333333333333333333e-1*(-0.8e1*Qogm3*twQI8*_6T77+0.48e2
*twQI8*W9Kuq*_6T77+0.3e1*saOT4*Qogm3-0.48e2*W9Kuq*UndtT*_6T77-0.6e1*_6T77*(-
0.8e1*yXDWE*(VGBoE-0.1e1*b3twg+JQoMY*S7nLL)+_6T77*pTjgH*GLBrq+
0.42426406871192851464e1*ZnLLn*pTjgH)-0.6e1*W9Kuq*saOT4)/yXDWE/_6T77);}

void BkjIW::LbUaV(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*xFJxR,double*UHdwp){double FI57V=0.0,Gj_Bc=0.0,vJv2W=0.0,
WBuXo=0.0,asQhv=0.0
,EToJ3=0.0
,KtmYS=0.0
,vWB88=0.0
,jTaOv=0.0
,gSnht=0.0,c8NiT=0.0,isa7_=0.0,c0qNE=0.0,M8djz=0.0;
FI57V=mdAxL((double)(0.5*(1.0*lJXU0(twQI8)-2.0*_6T77*S7nLL+2.0*_6T77*mkefz)));
M8djz=0.5*(twQI8+JQoMY*_6T77);if(FI57V>M8djz){FI57V=M8djz;}
if(FI57V>gdHj5){*UHdwp=gdHj5;}else{*UHdwp=FI57V;}




Gj_Bc=(0.5*lJXU0(twQI8)+lJXU0(gdHj5))/_6T77;if(Gj_Bc>(mkefz-S7nLL)){*xFJxR=twQI8
;}else{*xFJxR=mdAxL((double)(0.5*(lJXU0(twQI8)-2.0*lJXU0(gdHj5)-2.0*_6T77*S7nLL+
2.0*_6T77*mkefz)));}if(*xFJxR<twQI8){*xFJxR=twQI8;}
jTaOv=(mdAxL(_6T77)*mdAxL(lJXU0(twQI8)/_6T77-2.0*S7nLL+2.0*mkefz))/2.0;
asQhv=(jTaOv-twQI8)/_6T77;
EToJ3=KtmYS=vWB88=jTaOv/_6T77;;if((asQhv+EToJ3+KtmYS+vWB88)>JQoMY){vJv2W=0.25*
twQI8+0.25*JQoMY*_6T77-0.25*mdAxL(3.0*lJXU0(twQI8)-2.0*twQI8*JQoMY*_6T77+_6T77*(
8.0*(mkefz-S7nLL)-lJXU0(JQoMY)*_6T77));WBuXo=0.25*twQI8+0.25*JQoMY*_6T77+0.25*
mdAxL(3.0*lJXU0(twQI8)-2.0*twQI8*JQoMY*_6T77+_6T77*(8.0*(mkefz-S7nLL)-lJXU0(
JQoMY)*_6T77));if(vJv2W<twQI8){vJv2W=twQI8;}if(WBuXo<twQI8){WBuXo=twQI8;}gSnht=
m9XAw(*xFJxR,JQoMY,twQI8,S7nLL,mkefz,VGBoE,b3twg,_6T77,gdHj5);c8NiT=m9XAw(vJv2W,
JQoMY,twQI8,S7nLL,mkefz,VGBoE,b3twg,_6T77,gdHj5);isa7_=m9XAw(WBuXo,JQoMY,twQI8,
S7nLL,mkefz,VGBoE,b3twg,_6T77,gdHj5);c0qNE=m9XAw(*UHdwp,JQoMY,twQI8,S7nLL,mkefz,
VGBoE,b3twg,_6T77,gdHj5);if(((fabs(gSnht)<fabs(c8NiT))&&(fabs(gSnht)<fabs(isa7_)
)&&(fabs(gSnht)<fabs(c0qNE)))||((fabs(c8NiT)<fabs(gSnht))&&(fabs(c8NiT)<fabs(
isa7_))&&(fabs(c8NiT)<fabs(c0qNE)))){*UHdwp=vJv2W;}else{*xFJxR=WBuXo;}}UzANC(
xFJxR,UHdwp);return;}

double BkjIW::m9XAw(const double&UndtT,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double hkIV6=0.0,Labnu=0.0,van7F=0.0,
Qogm3=0.0,MaOvd=0.0;Qogm3=twQI8*twQI8;hkIV6=UndtT*UndtT;Labnu=mdAxL(Qogm3-0.2e1*
hkIV6-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz);van7F=-0.2e1*JQoMY*_6T77+
0.14142135623730950488e1*Labnu;MaOvd=_6T77*_6T77;return(
0.8333333333333333333333333333333333333333e-1*(-0.2e1*Qogm3*twQI8+0.12e2*twQI8*
hkIV6+0.3e1*Qogm3*van7F-0.12e2*hkIV6*UndtT-0.6e1*hkIV6*van7F-0.6e1*_6T77*(-0.2e1
*_6T77*(VGBoE-0.1e1*b3twg+JQoMY*S7nLL)+0.14142135623730950488e1*(S7nLL-0.1e1*
mkefz)*Labnu))/MaOvd);}

void BkjIW::nVEbT(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*xFJxR,double*UHdwp){double Gj_Bc=0.0,mkC6P=0.0,noAZe=0.0,
M8djz=0.0;




Gj_Bc=(0.5*lJXU0(twQI8)-lJXU0(gdHj5))/_6T77;if(Gj_Bc>(mkefz-S7nLL)){*xFJxR=twQI8
;}else{*xFJxR=mdAxL((double)(0.5*(1.0*lJXU0(twQI8)+2.0*lJXU0(gdHj5)-2.0*_6T77*
S7nLL+2.0*_6T77*mkefz)));}



mkC6P=twQI8*twQI8;noAZe=mdAxL(0.1e1*mkC6P+0.2e1*twQI8*gdHj5+0.2e1*gdHj5*JQoMY*
_6T77-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz);*UHdwp=-0.1e1*gdHj5+mdAxL(0.5)*noAZe;
M8djz=0.5*(twQI8+(JQoMY-2.0*gdHj5/_6T77)*_6T77);if(M8djz>gdHj5){M8djz=gdHj5;}if(
*UHdwp>M8djz){*UHdwp=M8djz;}if(*xFJxR<0.0){*xFJxR=0.0;}UzANC(xFJxR,UHdwp);return
;}

double BkjIW::fkuCH(const double&UndtT,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double H8XdD=0.0,xWGRL=0.0,DEv7M=0.0,
i1EXt=0.0,tY4E8=0.0,jQLaG=0.0,van7F=0.0,Qogm3=0.0,mkC6P=0.0,pTjgH=0.0,WFK_p=0.0,
WZdBS=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;H8XdD=UndtT*UndtT;xWGRL=H8XdD*
H8XdD;i1EXt=H8XdD*_6T77;jQLaG=_6T77*_6T77;van7F=S7nLL*S7nLL;tY4E8=mkefz*mkefz;
pTjgH=gdHj5*gdHj5;WFK_p=_6T77*S7nLL;WZdBS=_6T77*mkefz;DEv7M=-0.125e0*mkC6P-
0.16666666666666666666666666666666666667e0*Qogm3*twQI8*gdHj5+0.1e1*twQI8*gdHj5*
H8XdD-0.5e0*xWGRL-0.1e1*i1EXt*S7nLL-0.5e0*van7F*jQLaG+gdHj5*(-0.1e1*H8XdD*UndtT+
0.1e1*H8XdD*JQoMY*_6T77+jQLaG*(0.1e1*VGBoE-0.1e1*b3twg+0.1e1*JQoMY*S7nLL))+0.1e1
*i1EXt*mkefz+0.1e1*jQLaG*S7nLL*mkefz-0.5e0*jQLaG*tY4E8+Qogm3*(0.25e0*pTjgH+0.5e0
*H8XdD-0.5e0*gdHj5*JQoMY*_6T77+0.5e0*WFK_p-0.5e0*WZdBS)+pTjgH*(-0.5e0*H8XdD-
0.5e0*WFK_p+0.5e0*WZdBS);return(DEv7M/gdHj5/jQLaG);}

void BkjIW::ylIwh(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*xFJxR,double*UHdwp){bool dqYWb=false,m2qvt=false;double 
vs3c3=0.0,_04Qv=0.0,oavS2=0.0,sKNcA=0.0,u2gP_=0.0,mkC6P=0.0,GdPqm=0.0,Qogm3=0.0,
hkIV6=0.0,Labnu=0.0,W9Kuq=0.0,PtThk=0.0,H8XdD=0.0,M8djz=0.0;







Qogm3=twQI8*twQI8;mkC6P=0.1e1/_6T77;W9Kuq=gdHj5*gdHj5;vs3c3=-0.5e0*Qogm3*mkC6P+
0.2e1*W9Kuq*mkC6P;if(vs3c3>(mkefz-S7nLL)){dqYWb=false;Qogm3=twQI8*twQI8;GdPqm=
gdHj5*gdHj5;sKNcA=mdAxL((double)(0.5*(0.1e1*Qogm3-0.2e1*GdPqm-0.2e1*_6T77*S7nLL+
0.2e1*_6T77*mkefz)));}else{dqYWb=true;sKNcA=gdHj5;}


if(dqYWb){




Qogm3=0.1e1/_6T77;hkIV6=twQI8*twQI8;W9Kuq=0.1e1/gdHj5;_04Qv=-0.1e1*twQI8*Qogm3+
0.5e0*hkIV6*W9Kuq*Qogm3+0.2e1*gdHj5*Qogm3-0.1e1*S7nLL*W9Kuq+0.1e1*mkefz*W9Kuq;if
(_04Qv>JQoMY){m2qvt=true;}else{m2qvt=false;}}else{Qogm3=0.1e1/_6T77;PtThk=twQI8*
twQI8;H8XdD=gdHj5*gdHj5;Labnu=mdAxL(0.1e1*PtThk-0.2e1*H8XdD-0.2e1*_6T77*S7nLL+
0.2e1*_6T77*mkefz);oavS2=-0.1e1*twQI8*Qogm3+0.2e1*gdHj5*Qogm3+mdAxL((double)2.0)
*Labnu*Qogm3;if(oavS2>JQoMY){m2qvt=true;}else{m2qvt=false;}}if(m2qvt){Qogm3=
twQI8*twQI8;W9Kuq=gdHj5*gdHj5;Labnu=mdAxL((double)(0.5*(0.1e1*Qogm3-0.2e1*twQI8*
gdHj5+0.4e1*W9Kuq-0.2e1*gdHj5*JQoMY*_6T77-0.2e1*_6T77*S7nLL+0.2e1*_6T77*mkefz)))
;u2gP_=gdHj5-Labnu;}else{u2gP_=gdHj5;}M8djz=0.5*(twQI8+(JQoMY-2.0*gdHj5/_6T77)*
_6T77);if(M8djz>gdHj5){M8djz=gdHj5;}if(sKNcA<gdHj5){*UHdwp=sKNcA;}else{*UHdwp=
gdHj5;}if(u2gP_<*UHdwp){*UHdwp=u2gP_;}if(*UHdwp>M8djz){*UHdwp=M8djz;}*xFJxR=
twQI8;if(*xFJxR<0.0){*xFJxR=0.0;}UzANC(xFJxR,UHdwp);return;}

double BkjIW::DfW27(const double&UndtT,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double Qogm3=0.0,mkC6P=0.0,H8XdD=0.0,
xWGRL=0.0,i1EXt=0.0,jQLaG=0.0,van7F=0.0,tY4E8=0.0,pTjgH=0.0,FgmGX=0.0,gxGoz=0.0,
fnUex=0.0,sQJ6X=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;H8XdD=UndtT*UndtT;xWGRL=
H8XdD*H8XdD;i1EXt=H8XdD*_6T77;jQLaG=_6T77*_6T77;van7F=S7nLL*S7nLL;tY4E8=mkefz*
mkefz;pTjgH=gdHj5*gdHj5;FgmGX=0.5e0*H8XdD;gxGoz=0.5e0*_6T77*S7nLL;fnUex=0.5e0*
_6T77*mkefz;sQJ6X=0.125e0*mkC6P-0.16666666666666666666666666666666667e0*Qogm3*
twQI8*gdHj5+0.1e1*twQI8*gdHj5*H8XdD+0.5e0*xWGRL+0.1e1*i1EXt*S7nLL+0.5e0*van7F*
jQLaG+gdHj5*(-0.1e1*H8XdD*UndtT+0.1e1*H8XdD*JQoMY*_6T77+jQLaG*(0.1e1*VGBoE-0.1e1
*b3twg+0.1e1*JQoMY*S7nLL))-0.1e1*i1EXt*mkefz-0.1e1*jQLaG*S7nLL*mkefz+0.5e0*jQLaG
*tY4E8+pTjgH*(-FgmGX-gxGoz+fnUex)+Qogm3*(0.25e0*pTjgH-FgmGX-0.5e0*gdHj5*JQoMY*
_6T77-gxGoz+fnUex);return(sQJ6X/gdHj5/jQLaG);}

void BkjIW::Q9C_h(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*TQbbm,double*CdUgB){double ZQkEx=0.0,SjwO1=0.0;ZQkEx=(lJXU0(
gdHj5)-0.5*lJXU0(twQI8))/_6T77;if(ZQkEx>(mkefz-S7nLL)){*CdUgB=-mdAxL((double)((
ZQkEx-mkefz+S7nLL)*_6T77));}else{*CdUgB=0.0;}



*TQbbm=gdHj5-mdAxL((double)(twQI8*(-0.5*twQI8+gdHj5)+_6T77*(gdHj5*JQoMY+S7nLL-
mkefz)));SjwO1=-0.5*(JQoMY-(2.0*gdHj5-twQI8)/_6T77)*_6T77;if(SjwO1<-gdHj5){SjwO1
=-gdHj5;}if(*TQbbm<SjwO1){*TQbbm=SjwO1;}
if(*TQbbm>*CdUgB){*TQbbm=*CdUgB;}if(*TQbbm>0.0){*TQbbm=0.0;}UzANC(TQbbm,CdUgB);
return;}

double BkjIW::RISzg(const double&yP0aV,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double H8XdD=0.0,zNyDY=0.0,wGkHz=0.0,
Qogm3=0.0,GdPqm=0.0,hkIV6=0.0,OUFFp=0.0,yZ3xv=0.0,vHzX3=0.0,AXcaf=0.0,GLBrq=0.0,
FgmGX=0.0,WZdBS=0.0;Qogm3=twQI8*twQI8;GdPqm=_6T77*_6T77;hkIV6=0.1e1/GdPqm;OUFFp=
Qogm3*Qogm3;H8XdD=0.1e1/gdHj5;yZ3xv=yP0aV*yP0aV;vHzX3=_6T77*S7nLL;AXcaf=_6T77*
mkefz;GLBrq=-0.5e0*yZ3xv+0.5e0*vHzX3-0.5e0*AXcaf;FgmGX=yZ3xv*yZ3xv;WZdBS=S7nLL*
S7nLL;wGkHz=mkefz*mkefz;zNyDY=0.33333333333333333333333333333333333333e0*Qogm3*
twQI8*hkIV6-0.125e0*OUFFp*H8XdD*hkIV6+0.1e1*yZ3xv*yP0aV*hkIV6+0.1e1*yZ3xv*JQoMY/
_6T77+VGBoE-0.1e1*b3twg+JQoMY*mkefz+gdHj5*GLBrq*hkIV6+twQI8*(0.1e1*yZ3xv-0.1e1*
vHzX3+0.1e1*AXcaf)*hkIV6+Qogm3*(-0.25e0*gdHj5*hkIV6+GLBrq*H8XdD*hkIV6)+(-0.5e0*
FgmGX+yZ3xv*_6T77*(0.1e1*S7nLL-0.1e1*mkefz)+GdPqm*(-0.5e0*WZdBS+0.1e1*S7nLL*
mkefz-0.5e0*wGkHz))*H8XdD*hkIV6;return(zNyDY);}

void BkjIW::tDZWV(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*iqugE,double*YtA02){double XISrE=0.0,Rht3r=0.0;

*YtA02=(lJXU0(twQI8)/0.4e1+twQI8*gdHj5/0.2e1-0.2e1*lJXU0(gdHj5)+gdHj5*_6T77*
JQoMY/0.2e1-_6T77*S7nLL/0.2e1+_6T77*mkefz/0.2e1)/gdHj5/_6T77;Rht3r=JQoMY-(4.0*
gdHj5-twQI8)/_6T77;if(*YtA02>Rht3r){*YtA02=Rht3r;}

XISrE=0.5*lJXU0(twQI8)/_6T77;if((S7nLL-XISrE)<=(mkefz)){*iqugE=(mkefz-S7nLL+
XISrE)/gdHj5;}else{*iqugE=0.0;}if(*iqugE<0.0){*iqugE=0.0;}UzANC(iqugE,YtA02);
return;}

double BkjIW::GuUm1(const double&yZ3xv,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double wnP82=0.0,fnUex=0.0,H8XdD=0.0,
Qogm3=0.0,mkC6P=0.0,h1apy=0.0,xWGRL=0.0,noAZe=0.0,DEv7M=0.0,OUFFp=0.0;Qogm3=
twQI8*twQI8;mkC6P=Qogm3*Qogm3;OUFFp=gdHj5*gdHj5;H8XdD=OUFFp*OUFFp;xWGRL=JQoMY*
_6T77;noAZe=_6T77*yZ3xv;wnP82=yZ3xv*yZ3xv;fnUex=_6T77*_6T77;DEv7M=S7nLL*S7nLL;
h1apy=mkefz*mkefz;return((-0.125e0*mkC6P-
0.16666666666666666666666666666666666667e0*Qogm3*twQI8*gdHj5-0.2e1*H8XdD+OUFFp*
gdHj5*(0.1e1*xWGRL-0.3e1*noAZe)+twQI8*OUFFp*(0.1e1*gdHj5+0.1e1*noAZe)+OUFFp*
_6T77*(0.1e1*xWGRL*yZ3xv-0.1e1*_6T77*wnP82-0.15e1*S7nLL+0.15e1*mkefz)+Qogm3*(
0.75e0*OUFFp-0.5e0*gdHj5*JQoMY*_6T77+0.5e0*gdHj5*_6T77*yZ3xv+0.5e0*_6T77*S7nLL-
0.5e0*_6T77*mkefz)+gdHj5*fnUex*(0.1e1*VGBoE-0.1e1*b3twg+0.1e1*JQoMY*S7nLL-0.1e1*
yZ3xv*S7nLL+0.1e1*yZ3xv*mkefz)+fnUex*(-0.5e0*DEv7M+0.1e1*S7nLL*mkefz-0.5e0*h1apy
))/gdHj5/fnUex);}

void BkjIW::xWi_u(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*TQbbm,double*CdUgB){double rK3p8=0.0,zvLTS=0.0;*TQbbm=0.0;
rK3p8=(-0.5e0*lJXU0(twQI8)+twQI8*gdHj5+gdHj5*(-0.2e1*gdHj5+0.1e1*JQoMY*_6T77))/
_6T77;if(rK3p8<(mkefz-S7nLL)){
*CdUgB=gdHj5-mdAxL((double)(2.0*(0.25*lJXU0(twQI8)-0.5*twQI8*gdHj5+lJXU0(gdHj5)-
0.5*gdHj5*JQoMY*_6T77-0.5*_6T77*S7nLL+0.5*_6T77*mkefz)));}else{*CdUgB=gdHj5;}
zvLTS=0.5*(JQoMY-(2.0*gdHj5-twQI8)/_6T77)*_6T77;if(zvLTS>gdHj5){zvLTS=gdHj5;}if(
*CdUgB>zvLTS){*CdUgB=zvLTS;}UzANC(TQbbm,CdUgB);return;}

double BkjIW::ndbIr(const double&yP0aV,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double WZdBS=0.0,Qogm3=0.0,wGkHz=0.0,
vHzX3=0.0,FgmGX=0.0,AXcaf=0.0,GLBrq=0.0,GdPqm=0.0,hkIV6=0.0,OUFFp=0.0,H8XdD=0.0,
yZ3xv=0.0,zNyDY=0.0;Qogm3=twQI8*twQI8;GdPqm=_6T77*_6T77;hkIV6=0.1e1/GdPqm;OUFFp=
Qogm3*Qogm3;H8XdD=0.1e1/gdHj5;yZ3xv=yP0aV*yP0aV;vHzX3=_6T77*S7nLL;AXcaf=_6T77*
mkefz;GLBrq=0.5e0*yZ3xv+0.5e0*vHzX3-0.5e0*AXcaf;FgmGX=yZ3xv*yZ3xv;WZdBS=S7nLL*
S7nLL;wGkHz=mkefz*mkefz;zNyDY=0.3333333333333333333333333333333333333333e0*Qogm3
*twQI8*hkIV6-0.125e0*OUFFp*H8XdD*hkIV6+0.1e1*yZ3xv*yP0aV*hkIV6-0.1e1*yZ3xv*JQoMY
/_6T77+VGBoE-0.1e1*b3twg+JQoMY*mkefz+gdHj5*GLBrq*hkIV6+twQI8*(-0.1e1*yZ3xv-0.1e1
*vHzX3+0.1e1*AXcaf)*hkIV6+Qogm3*(-0.25e0*gdHj5*hkIV6+GLBrq*H8XdD*hkIV6)+(-0.5e0*
FgmGX+yZ3xv*_6T77*(-0.1e1*S7nLL+0.1e1*mkefz)+GdPqm*(-0.5e0*WZdBS+0.1e1*S7nLL*
mkefz-0.5e0*wGkHz))*H8XdD*hkIV6;return(zNyDY);}

void BkjIW::WAM8Y(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*iqugE,double*YtA02){double Aqoc7=0.0,B8jft=0.0,Rht3r=0.0;
B8jft=(0.5*(gdHj5-twQI8)+twQI8);if(B8jft==0.0){B8jft=CshoR;}Aqoc7=mkefz-S7nLL-
1.5*lJXU0(gdHj5)/_6T77+(gdHj5-twQI8)/_6T77*B8jft;Rht3r=JQoMY-(4.0*gdHj5-twQI8)/
_6T77;*iqugE=0.0;*YtA02=Aqoc7/gdHj5;if(*YtA02>Rht3r){*YtA02=Rht3r;}UzANC(iqugE,
YtA02);return;}

double BkjIW::UiDtI(const double&yZ3xv,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double OUFFp=0.0,Qogm3=0.0,mkC6P=0.0,
H8XdD=0.0,xWGRL=0.0,noAZe=0.0,hK7pX=0.0,sQJ6X=0.0,CiR9Z=0.0;Qogm3=twQI8*twQI8;
mkC6P=Qogm3*Qogm3;OUFFp=gdHj5*gdHj5;H8XdD=OUFFp*OUFFp;xWGRL=JQoMY*_6T77;noAZe=
_6T77*yZ3xv;hK7pX=_6T77*_6T77;sQJ6X=S7nLL*S7nLL;CiR9Z=mkefz*mkefz;return((
0.125e0*mkC6P-0.166666666666666666666666666666667e0*Qogm3*twQI8*gdHj5-0.1e1*
H8XdD+OUFFp*gdHj5*(0.1e1*xWGRL-0.1e1*noAZe)+twQI8*OUFFp*(0.1e1*gdHj5+0.1e1*noAZe
)+OUFFp*_6T77*(0.1e1*xWGRL*yZ3xv+0.5e0*S7nLL-0.5e0*mkefz)+Qogm3*(-0.25e0*OUFFp-
0.5e0*gdHj5*JQoMY*_6T77-0.5e0*gdHj5*_6T77*yZ3xv-0.5e0*_6T77*S7nLL+0.5e0*_6T77*
mkefz)+gdHj5*hK7pX*(0.1e1*VGBoE-0.1e1*b3twg+0.1e1*JQoMY*S7nLL+0.1e1*yZ3xv*S7nLL-
0.1e1*yZ3xv*mkefz)+hK7pX*(0.5e0*sQJ6X-0.1e1*S7nLL*mkefz+0.5e0*CiR9Z))/gdHj5/
hK7pX);}

void BkjIW::WTxW_(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*NPtvy,double*qCk0G){double hkIV6=0.0,i1EXt=0.0,noAZe=0.0,
aYWrc=0.0,CYEL6=0.0,RPnHg=0.0,PiBFe=0.0,B8jft=0.0;
RPnHg=(twQI8+2.0*mdAxL(0.5*(2.0*_6T77*(mkefz-S7nLL)-lJXU0(twQI8))))/_6T77;if(
RPnHg<JQoMY){
CYEL6=mdAxL(0.5*(lJXU0(twQI8)-2.0*_6T77*(mkefz-S7nLL)));if(CYEL6>gdHj5){
hkIV6=twQI8*twQI8;i1EXt=JQoMY*JQoMY;noAZe=_6T77*_6T77;aYWrc=mdAxL(-hkIV6+0.4e1*
twQI8*gdHj5-0.2e1*twQI8*JQoMY*_6T77-0.4e1*gdHj5*JQoMY*_6T77+i1EXt*noAZe-0.4e1*
_6T77*S7nLL+0.4e1*_6T77*mkefz);*NPtvy=twQI8/0.2e1+gdHj5-JQoMY*_6T77/0.2e1+aYWrc/
0.2e1;}else{*NPtvy=0.0;}}else{

B8jft=(4.0*(twQI8-JQoMY*_6T77));if(B8jft==0.0){B8jft=CshoR;}*NPtvy=(3.0*lJXU0(
twQI8)-2.0*twQI8*JQoMY*_6T77+lJXU0(JQoMY)*lJXU0(_6T77)+4.0*_6T77*(S7nLL-mkefz))/
B8jft;}PiBFe=twQI8*JQoMY-0.5*lJXU0(twQI8)/_6T77;if(PiBFe<=(mkefz-S7nLL)){*qCk0G=
twQI8;}else{B8jft=(2.0*(twQI8-JQoMY*_6T77));if(B8jft==0.0){B8jft=CshoR;}
*qCk0G=(2.0*_6T77*(S7nLL-mkefz)+lJXU0(twQI8))/B8jft;}if(*NPtvy<0.0){*NPtvy=0.0;}
UzANC(NPtvy,qCk0G);return;}

double BkjIW::BymT1(const double&YlsMh,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double pTjgH=0.0,Qogm3=0.0,mkC6P=0.0,
GdPqm=0.0,gn_Vb=0.0,SMkYE=0.0,oZTgR=0.0,UAO43=0.0,xWGRL=0.0,_8jKZ=0.0,wnP82=0.0,
_0IXh=0.0,M219F=0.0,PtThk=0.0;Qogm3=YlsMh*YlsMh;mkC6P=_6T77*_6T77;GdPqm=0.1e1/
mkC6P;PtThk=0.1e1/_6T77;xWGRL=twQI8*twQI8;oZTgR=YlsMh*twQI8;_0IXh=YlsMh*JQoMY*
_6T77;gn_Vb=_6T77*S7nLL;wnP82=_6T77*mkefz;UAO43=mdAxL((0.2e1*oZTgR-0.1e1*xWGRL-
0.2e1*_0IXh-0.2e1*gn_Vb+0.2e1*wnP82)*GdPqm);pTjgH=mdAxL(0.225e1*oZTgR-0.1125e1*
xWGRL-0.225e1*_0IXh-0.225e1*gn_Vb+0.225e1*wnP82);M219F=_6T77*UAO43;SMkYE=JQoMY*
JQoMY;_8jKZ=Qogm3*(0.5e0*GdPqm*twQI8-0.5e0*PtThk*JQoMY)-
0.1666666666666666666666666666666667e0*xWGRL*twQI8*GdPqm+VGBoE-0.1e1*b3twg+0.1e1
*JQoMY*S7nLL-0.17677669529663689318e0*S7nLL*UAO43+0.17677669529663689318e0*mkefz
*UAO43-0.5e0*S7nLL*pTjgH*PtThk+0.5e0*mkefz*pTjgH*PtThk+xWGRL*(0.5e0*JQoMY*_6T77-
0.88388347648318446592e-1*M219F-0.25e0*pTjgH)*GdPqm+YlsMh*(0.5e0*SMkYE-0.1e1*
S7nLL*PtThk+0.1e1*mkefz*PtThk+JQoMY*(-0.1e1*twQI8-0.17677669529663689318e0*M219F
-0.5e0*pTjgH)*PtThk+twQI8*(0.17677669529663689318e0*M219F+0.5e0*pTjgH)*GdPqm);
return(_8jKZ);}

void BkjIW::CE9bC(const double&gdHj5,const double&JQoMY,const double&twQI8,const
 double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,const 
double&_6T77,double*NPtvy,double*qCk0G){double t4YDp=0.0,X2sGQ=0.0,IkO5h=0.0,
W9Kuq=0.0,Labnu=0.0,jQLaG=0.0,gn_Vb=0.0,RibSS=0.0;t4YDp=(0.5*lJXU0(twQI8)+lJXU0(
gdHj5))/_6T77;if(t4YDp>(mkefz-S7nLL)){
*NPtvy=gdHj5-mdAxL(0.5*lJXU0(twQI8)-twQI8*gdHj5+gdHj5*JQoMY*_6T77+_6T77*(S7nLL-
mkefz));}else{X2sGQ=(twQI8+gdHj5)/_6T77+((-0.5*lJXU0(twQI8))/_6T77-S7nLL+mkefz)/
gdHj5;if(X2sGQ>JQoMY){
*NPtvy=gdHj5-mdAxL(0.5*lJXU0(twQI8)-twQI8*gdHj5+gdHj5*JQoMY*_6T77+_6T77*(S7nLL-
mkefz));}else{*NPtvy=0.0;}}
IkO5h=twQI8*JQoMY+(0.5*lJXU0(twQI8)-2.0*twQI8*gdHj5+lJXU0(gdHj5))/_6T77;if(IkO5h
<(mkefz-S7nLL)){*qCk0G=twQI8;}else{
W9Kuq=twQI8*twQI8;Labnu=JQoMY*JQoMY;jQLaG=_6T77*_6T77;gn_Vb=mdAxL(-0.1e1*W9Kuq+
0.4e1*twQI8*gdHj5-0.2e1*twQI8*JQoMY*_6T77-0.4e1*gdHj5*JQoMY*_6T77+0.1e1*Labnu*
jQLaG-0.4e1*_6T77*S7nLL+0.4e1*_6T77*mkefz);*qCk0G=0.50e0*twQI8+0.1e1*gdHj5-
0.50e0*JQoMY*_6T77+0.50e0*gn_Vb;}RibSS=0.5*(twQI8+2.0*gdHj5-JQoMY*_6T77);if(
RibSS<0.0){RibSS=0.0;}if(*NPtvy<RibSS){*NPtvy=RibSS;}UzANC(NPtvy,qCk0G);return;}

double BkjIW::xATia(const double&YlsMh,const double&JQoMY,const double&twQI8,
const double&S7nLL,const double&mkefz,const double&VGBoE,const double&b3twg,
const double&_6T77,const double&gdHj5){double bM3Dr=0.0,mkC6P=0.0,zi2EW=0.0,
hkIV6=0.0,tY4E8=0.0,xWGRL=0.0,saOT4=0.0,OUFFp=0.0,WFK_p=0.0,URT0J=0.0,Qogm3=0.0,
GLBrq=0.0,AXcaf=0.0,B8jft=0.0;Qogm3=twQI8*twQI8;mkC6P=Qogm3*Qogm3;hkIV6=Qogm3*
twQI8;OUFFp=YlsMh*YlsMh;bM3Dr=gdHj5*JQoMY;xWGRL=0.1e1*mkefz;URT0J=0.1e1*b3twg;
AXcaf=pow(S7nLL-xWGRL,0.2e1);GLBrq=gdHj5*gdHj5;saOT4=-0.1e1*S7nLL+mkefz;tY4E8=
GLBrq-0.2e1*bM3Dr*_6T77+0.2e1*_6T77*saOT4;WFK_p=JQoMY*JQoMY;zi2EW=_6T77*_6T77;
B8jft=(YlsMh-0.1e1*gdHj5);if(B8jft==0.0){B8jft=CshoR;}return(
0.4166666666666666666666666666666666667e-1*(-0.3e1*mkC6P+0.4e1*hkIV6*gdHj5-0.6e1
*OUFFp*(Qogm3-0.2e1*twQI8*gdHj5+0.2e1*_6T77*(bM3Dr+S7nLL-xWGRL))-0.12e2*_6T77*(
0.2e1*gdHj5*_6T77*(VGBoE-URT0J+JQoMY*S7nLL)+_6T77*AXcaf+GLBrq*saOT4)+0.6e1*Qogm3
*tY4E8+0.4e1*YlsMh*(0.2e1*hkIV6-0.3e1*Qogm3*gdHj5-0.3e1*twQI8*tY4E8+0.3e1*_6T77*
(GLBrq*JQoMY-0.1e1*gdHj5*WFK_p*_6T77+0.2e1*_6T77*(VGBoE-URT0J+JQoMY*mkefz))))/
B8jft/zi2EW);}
