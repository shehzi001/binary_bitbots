
































#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLStep2Decisions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLABK.h>
#include <TypeIVRMLStep2RootFunctions.h>
#include <math.h>








bool BkjIW::qHx8A(const double&OFgA6){return(NrRvN(OFgA6));}


bool BkjIW::VPqtN(const double&OFgA6,const double&TmpZN){
return(HNEb0(OFgA6,TmpZN));}


bool BkjIW::tih30(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){
return(N4I01(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::DMvKN(const double&qI8hj,const double&qXUgQ){
return(LePhM(qI8hj,qXUgQ));}


bool BkjIW::O0OTb(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(ZIX9f(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::GKTD_(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::QfzUF(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){

return(w49_J(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::SKE6h(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(NpVpV(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::VW58D(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(aBNZo(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::NMj7d(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&qXUgQ,const double&q5nqO){
return(Rj2f6(OFgA6,qI8hj,_DBry,qXUgQ,q5nqO));}


bool BkjIW::RZ47G(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::IoVyv(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&qXUgQ,const double&pJfW2,const double&SynchronizationTime){
double _fKak=0.0
,XtBZ5=0.0
,Y14Px=0.0
,LvUdr=0.0
,KqrR0=0.0
,qkwiy=0.0
,plg23=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=TmpZN/q5nqO;plg23=0.5*lJXU0(TmpZN)/q5nqO;
qkwiy=_DBry-X8_KU-KqrR0-plg23;XtBZ5=qkwiy/TmpZN;
LvUdr=SynchronizationTime-pJfW2-_fKak-XtBZ5-Y14Px;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*XtBZ5+0.5*Usbkk*lJXU0(XtBZ5);
X8_KU+=qkwiy;Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
X8_KU=_DBry;Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
if(_DBry>0.0){return(DJ64_<=qPN_6+qXUgQ*ClLiO*(1.0-(qXUgQ-_DBry)/qXUgQ));}else{
return(DJ64_<=qPN_6);}}


bool BkjIW::T1OKB(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){

double _fKak=0.0
,XtBZ5=0.0
,Y14Px=0.0
,T9V0j=0.0
,zFb7J=0.0
,KqrR0=0.0
,svvMZ=0.0
,plg23=0.0
,ZOoyF=0.0
,TOnIe=0.0;

_fKak=(TmpZN-OFgA6)/q5nqO;
Y14Px=T9V0j=zFb7J=TmpZN/q5nqO;KqrR0=OFgA6*_fKak+0.5*q5nqO*lJXU0(_fKak);plg23=0.5
*lJXU0(TmpZN)/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-qI8hj-KqrR0-plg23-ZOoyF-TOnIe;XtBZ5=svvMZ/TmpZN;return((pJfW2+_fKak+
XtBZ5+Y14Px+T9V0j+zFb7J)>=SynchronizationTime);}


bool BkjIW::Vdw1s(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){

double _fKak=0.0
,XtBZ5=0.0
,Y14Px=0.0
,LvUdr=0.0
,T9V0j=0.0
,zFb7J=0.0
,KqrR0=0.0
,qkwiy=0.0
,plg23=0.0
,ZOoyF=0.0
,TOnIe=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=T9V0j=zFb7J=TmpZN/q5nqO;plg23=0.5*lJXU0(TmpZN)/q5nqO;ZOoyF=TOnIe=-0.5*
lJXU0(TmpZN)/q5nqO;
qkwiy=_DBry-X8_KU-KqrR0-plg23-ZOoyF-TOnIe;XtBZ5=qkwiy/TmpZN;
LvUdr=SynchronizationTime-pJfW2-_fKak-XtBZ5-Y14Px-T9V0j-zFb7J;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*XtBZ5+0.5*Usbkk*lJXU0(XtBZ5);
X8_KU+=qkwiy;Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
X8_KU+=plg23;Usbkk=(0x148f+2318-0x1d9d);
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::Jdg2b(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
return(nq0A5(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::ckbBF(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double LLvD8=0.0
,_fKak=0.0
,XtBZ5=0.0
,Y14Px=0.0
,KqrR0=0.0
,qkwiy=0.0
,plg23=0.0
,X8_KU=qI8hj;

LLvD8=OFgA6/q5nqO;X8_KU+=OFgA6*LLvD8-0.5*q5nqO*lJXU0(LLvD8);

_fKak=Y14Px=TmpZN/q5nqO;KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;
qkwiy=_DBry-X8_KU-KqrR0-plg23;XtBZ5=qkwiy/TmpZN;return((pJfW2+LLvD8+_fKak+XtBZ5+
Y14Px)>=SynchronizationTime);}


bool BkjIW::cf56s(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double hTABS=0.0,MaOvd=0.0,Qogm3=
0.0,WFK_p=0.0,yZ3xv=0.0,IAx7K=0.0
,van7F=0.0,WZdBS=0.0,ZnLLn=0.0,hkIV6=0.0,PtThk=0.0,OUFFp=0.0,PB7aO=0.0;Qogm3=(
SynchronizationTime-pJfW2)*(SynchronizationTime-pJfW2);hkIV6=OFgA6*OFgA6;PtThk=
q5nqO*q5nqO;OUFFp=0.1e1/PtThk;yZ3xv=TmpZN*TmpZN;van7F=0.1e1/q5nqO;ZnLLn=OFgA6*
TmpZN;MaOvd=PtThk*q5nqO;hTABS=mdAxL(hkIV6*PtThk-0.2e1*ZnLLn*PtThk+0.4e1*yZ3xv*
PtThk-0.2e1*TmpZN*(SynchronizationTime-pJfW2)*MaOvd-0.2e1*MaOvd*qI8hj+0.2e1*
MaOvd*_DBry);WFK_p=mdAxL(0.2e1);WZdBS=0.1e1/MaOvd;PB7aO=hTABS*OUFFp;IAx7K=TmpZN*
Qogm3/0.2e1-hkIV6*OFgA6*OUFFp/0.6e1+hkIV6*TmpZN*OUFFp-0.3e1/0.2e1*OFgA6*yZ3xv*
OUFFp-hkIV6*(SynchronizationTime-pJfW2)*van7F/0.2e1+ZnLLn*(SynchronizationTime-
pJfW2)*van7F-0.3e1/0.2e1*yZ3xv*(SynchronizationTime-pJfW2)*van7F+Dk1wk+(
SynchronizationTime-pJfW2)*qI8hj-TmpZN*qI8hj*van7F+TmpZN*_DBry*van7F-hkIV6*hTABS
/WFK_p*WZdBS/0.2e1+WFK_p*OFgA6*TmpZN*hTABS*WZdBS/0.2e1+WFK_p*TmpZN*(
SynchronizationTime-pJfW2)*hTABS*OUFFp/0.2e1+WFK_p*qI8hj*PB7aO/0.2e1-WFK_p*_DBry
*PB7aO/0.2e1;return(IAx7K<=qPN_6);}


bool BkjIW::dnOyS(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){double X8_KU=
qI8hj,Usbkk=OFgA6,U2DcK=0.0
,kleeB=0.0;

kleeB=Usbkk/q5nqO;
U2DcK=SynchronizationTime-pJfW2-kleeB;
X8_KU+=Usbkk*U2DcK;Usbkk=Usbkk;
X8_KU+=Usbkk*kleeB-0.5*q5nqO*lJXU0(kleeB);return(X8_KU>_DBry);}


bool BkjIW::Xwv7U(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double Ijlxn=0.0
,NNpNV=0.0
,DyX4F=0.0
,LLvD8=0.0
,lg7Ml=0.0
,pQp7S=0.0
,knGOu=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Ijlxn=(q5nqO*(lJXU0(Usbkk)/q5nqO+2.0*X8_KU-2.0*_DBry))/(2.0*Usbkk+2.0*q5nqO*
pJfW2-2.0*q5nqO*SynchronizationTime);
NNpNV=(Usbkk-Ijlxn)/q5nqO;lg7Ml=Usbkk*NNpNV-0.5*q5nqO*lJXU0(NNpNV);
LLvD8=Ijlxn/q5nqO;knGOu=0.5*lJXU0(Ijlxn)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-NNpNV-LLvD8;pQp7S=Ijlxn*DyX4F;
DJ64_+=X8_KU*NNpNV+0.5*Usbkk*lJXU0(NNpNV)-q5nqO*_NEO8(NNpNV)/6.0;X8_KU+=lg7Ml;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::hpFOv(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double Ijlxn=0.0
,_fKak=0.0
,NNpNV=0.0
,DyX4F=0.0
,LLvD8=0.0
,KqrR0=0.0
,lg7Ml=0.0
,pQp7S=0.0
,knGOu=0.0
,B8jft=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;B8jft=(2.0*Usbkk-4.0*TmpZN-2.0*
q5nqO*pJfW2+2.0*q5nqO*SynchronizationTime);if(B8jft==0.0){B8jft=CshoR;}
Ijlxn=(q5nqO*((1.0*lJXU0(Usbkk))/q5nqO-(2.0*lJXU0(TmpZN))/q5nqO-2.0*X8_KU+2.0*
_DBry))/B8jft;if(Ijlxn>TmpZN){Ijlxn=TmpZN;}if(Ijlxn<0.0){Ijlxn=0.0;}
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
NNpNV=(TmpZN-Ijlxn)/q5nqO;lg7Ml=TmpZN*NNpNV-0.5*q5nqO*lJXU0(NNpNV);
LLvD8=Ijlxn/q5nqO;knGOu=0.5*lJXU0(Ijlxn)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-_fKak-NNpNV-LLvD8;pQp7S=DyX4F*Ijlxn;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*NNpNV+0.5*Usbkk*lJXU0(NNpNV)-q5nqO*_NEO8(NNpNV)/6.0;X8_KU+=lg7Ml;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::FC1BN(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double RRkLb=0.0
,_fKak=0.0
,LLvD8=0.0
,_XYni=0.0
,KqrR0=0.0
,knGOu=0.0;

_fKak=(TmpZN-OFgA6)/q5nqO;KqrR0=OFgA6*_fKak+0.5*q5nqO*lJXU0(_fKak);
LLvD8=TmpZN/q5nqO;knGOu=0.5*lJXU0(TmpZN)/q5nqO;
RRkLb=SynchronizationTime-pJfW2-_fKak-LLvD8;_XYni=OFgA6*RRkLb;return((qI8hj+
_XYni+KqrR0+knGOu)>_DBry);}


bool BkjIW::NSe3y(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double mDvwC=0.0;

mDvwC=(0.08333333333333333333333333333333333*_NEO8(OFgA6)+lJXU0(OFgA6)*(-0.5*
TmpZN-0.25*q5nqO*pJfW2+0.25*q5nqO*SynchronizationTime)+OFgA6*(0.5*lJXU0(TmpZN)+
0.5*q5nqO*qI8hj-0.5*q5nqO*_DBry)+q5nqO*(lJXU0(TmpZN)*(0.5*pJfW2-0.5*
SynchronizationTime)+TmpZN*(-1.0*qI8hj+1.0*_DBry)+q5nqO*(-0.5*pJfW2*qI8hj+0.5*
SynchronizationTime*qI8hj-0.5*pJfW2*_DBry+0.5*SynchronizationTime*_DBry)))/lJXU0
(q5nqO);return((Dk1wk+mDvwC)<=qPN_6);}


bool BkjIW::gots9(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double Ijlxn=0.0
,o4rjY=0.0
,DyX4F=0.0
,LLvD8=0.0
,aKoL7=0.0
,pQp7S=0.0
,knGOu=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Ijlxn=0.5*Usbkk-0.5*q5nqO*pJfW2+0.5*q5nqO*SynchronizationTime-0.25*q5nqO*mdAxL((
-4.0*lJXU0(Usbkk))/lJXU0(q5nqO)-(8.0*Usbkk*pJfW2)/q5nqO+4.0*lJXU0(pJfW2)+(8.0*
Usbkk*SynchronizationTime)/q5nqO-8.0*pJfW2*SynchronizationTime+4.0*lJXU0(
SynchronizationTime)+(16.0*X8_KU)/q5nqO-(16.0*_DBry)/q5nqO);
o4rjY=(Ijlxn-Usbkk)/q5nqO;aKoL7=Usbkk*o4rjY+0.5*q5nqO*lJXU0(o4rjY);
LLvD8=Ijlxn/q5nqO;knGOu=0.5*lJXU0(Ijlxn)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-o4rjY-LLvD8;pQp7S=Ijlxn*DyX4F;
DJ64_+=X8_KU*o4rjY+0.5*Usbkk*lJXU0(o4rjY)+q5nqO*_NEO8(o4rjY)/6.0;X8_KU+=aKoL7;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::xQKXn(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){return(FC1BN(OFgA6,TmpZN,qI8hj,_DBry,q5nqO,pJfW2,
SynchronizationTime));}


bool BkjIW::PhwYA(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double DyX4F=0.0
,bRoo6=0.0
,GFN9N=0.0
,pQp7S=0.0
,Nvuq4=0.0
,G0QXU=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
jTaOv=1.0*Usbkk+0.70710678118654752440084436210485*mdAxL(1.0*lJXU0(Usbkk)+2.0*
Usbkk*q5nqO*pJfW2-2.0*Usbkk*q5nqO*SynchronizationTime-2.0*q5nqO*X8_KU+2.0*q5nqO*
_DBry);
bRoo6=(jTaOv-Usbkk)/q5nqO;Nvuq4=Usbkk*bRoo6+0.5*q5nqO*lJXU0(bRoo6);
GFN9N=jTaOv/q5nqO;G0QXU=0.5*lJXU0(jTaOv)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-bRoo6-GFN9N;pQp7S=DyX4F*Usbkk;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Usbkk;
DJ64_+=X8_KU*bRoo6+0.5*Usbkk*lJXU0(bRoo6)+q5nqO*_NEO8(bRoo6)/6.0;X8_KU+=Nvuq4;
Usbkk=jTaOv;
DJ64_+=X8_KU*GFN9N+0.5*Usbkk*lJXU0(GFN9N)-q5nqO*_NEO8(GFN9N)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::ZHmZA(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double DyX4F=0.0
,BTPut=0.0
,V1Tsd=0.0
,HySer=0.0
,pQp7S=0.0
,ARpRF=0.0
,wpTRG=0.0
,D6cDH=0.0
,B8jft=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;B8jft=(2.0*Usbkk-2.0*TmpZN);if(
B8jft==0.0){B8jft=B67U4;}
V1Tsd=(lJXU0(Usbkk)/q5nqO-(4.0*Usbkk*TmpZN)/q5nqO+(2.0*lJXU0(TmpZN))/q5nqO-2.0*
Usbkk*pJfW2+2.0*Usbkk*SynchronizationTime+2.0*X8_KU-2.0*_DBry)/B8jft;wpTRG=V1Tsd
*TmpZN;
BTPut=(TmpZN-Usbkk)/q5nqO;ARpRF=Usbkk*BTPut+0.5*q5nqO*lJXU0(BTPut);
HySer=TmpZN/q5nqO;D6cDH=0.5*lJXU0(TmpZN)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-BTPut-V1Tsd-HySer;pQp7S=DyX4F*Usbkk;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Usbkk;
DJ64_+=X8_KU*BTPut+0.5*Usbkk*lJXU0(BTPut)+q5nqO*_NEO8(BTPut)/6.0;X8_KU+=ARpRF;
Usbkk=TmpZN;
DJ64_+=X8_KU*V1Tsd+0.5*Usbkk*lJXU0(V1Tsd);X8_KU+=wpTRG;Usbkk=TmpZN;
DJ64_+=X8_KU*HySer+0.5*Usbkk*lJXU0(HySer)-q5nqO*_NEO8(HySer)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::W7qxh(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double Ijlxn=0.0
,o4rjY=0.0
,DyX4F=0.0
,Qvajn=0.0
,Sw5ra=0.0
,aKoL7=0.0
,pQp7S=0.0
,S9rto=0.0
,sJ3q6=0.0
,B8jft=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;B8jft=(2.0*Usbkk-4.0*TmpZN-2.0*
q5nqO*pJfW2+2.0*q5nqO*SynchronizationTime);if(B8jft==0.0){B8jft=CshoR;}
Ijlxn=TmpZN+(1.0*lJXU0(Usbkk))/B8jft-(2.0*Usbkk*TmpZN)/B8jft+(2.0*pow(TmpZN,
(0x2d+6743-0x1a82)))/B8jft+(2.0*TmpZN*q5nqO*pJfW2)/B8jft-(2.0*TmpZN*q5nqO*
SynchronizationTime)/B8jft-(2.0*q5nqO*X8_KU)/B8jft+(2.0*q5nqO*_DBry)/B8jft;
o4rjY=(Ijlxn-Usbkk)/q5nqO;aKoL7=Usbkk*o4rjY+0.5*q5nqO*lJXU0(o4rjY);
Qvajn=(TmpZN-Ijlxn)/q5nqO;S9rto=Ijlxn*Qvajn+0.5*q5nqO*lJXU0(Qvajn);
Sw5ra=TmpZN/q5nqO;sJ3q6=0.5*lJXU0(TmpZN)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-o4rjY-Qvajn-Sw5ra;pQp7S=DyX4F*Ijlxn;
DJ64_+=X8_KU*o4rjY+0.5*Usbkk*lJXU0(o4rjY)+q5nqO*_NEO8(o4rjY)/6.0;X8_KU+=aKoL7;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*Qvajn+0.5*Usbkk*lJXU0(Qvajn)+q5nqO*_NEO8(Qvajn)/6.0;X8_KU+=S9rto;
Usbkk=TmpZN;
DJ64_+=X8_KU*Sw5ra+0.5*Usbkk*lJXU0(Sw5ra)-q5nqO*_NEO8(Sw5ra)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::eBQLV(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double LLvD8=0.0
,LvUdr=0.0
,BTPut=0.0
,V1Tsd=0.0
,HySer=0.0
,knGOu=0.0
,ARpRF=0.0
,wpTRG=0.0
,D6cDH=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
LLvD8=Usbkk/q5nqO;knGOu=Usbkk*LLvD8-0.5*lJXU0(LLvD8)*q5nqO;
BTPut=HySer=TmpZN/q5nqO;ARpRF=D6cDH=0.5*lJXU0(TmpZN)/q5nqO;
wpTRG=_DBry-X8_KU-knGOu-ARpRF-D6cDH;V1Tsd=wpTRG/TmpZN;
LvUdr=SynchronizationTime-pJfW2-LLvD8-BTPut-V1Tsd-HySer;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;X8_KU+=knGOu;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*BTPut+0.5*Usbkk*lJXU0(BTPut)+q5nqO*_NEO8(BTPut)/6.0;X8_KU+=ARpRF;
Usbkk=TmpZN;
DJ64_+=X8_KU*V1Tsd+0.5*Usbkk*lJXU0(V1Tsd);
X8_KU+=wpTRG;Usbkk=TmpZN;
DJ64_+=X8_KU*HySer+0.5*Usbkk*lJXU0(HySer)-q5nqO*_NEO8(HySer)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::z8RFA(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::BdpLC(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,QbGKS=0.0
,gMQcp=0.0
,L1lil=0.0
,KqrR0=0.0
,plg23=0.0
,qbPQ9=0.0
,w_Pf4=0.0
,yPn47=0.0;

_fKak=(TmpZN-OFgA6)/q5nqO;KqrR0=OFgA6*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=QbGKS=L1lil=TmpZN/q5nqO;plg23=qbPQ9=yPn47=0.5*lJXU0(TmpZN)/q5nqO;
w_Pf4=_DBry-qI8hj-KqrR0-plg23-qbPQ9-yPn47;gMQcp=w_Pf4/TmpZN;return((pJfW2+_fKak+
Y14Px+QbGKS+gMQcp+L1lil)>=SynchronizationTime);}


bool BkjIW::v3cWQ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
return(cf56s(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,pJfW2,SynchronizationTime
));}


bool BkjIW::UDQQD(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,QbGKS=0.0
,gMQcp=0.0
,L1lil=0.0
,g61Bh=0.0
,KyXX2=0.0
,qbPQ9=0.0
,w_Pf4=0.0
,yPn47=0.0
,jTaOv=0.0
,Fayok=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;Fayok=SynchronizationTime-pJfW2;
jTaOv=TmpZN-mdAxL(lJXU0(Usbkk)*lJXU0(q5nqO)-2.0*Usbkk*TmpZN*lJXU0(q5nqO)+4.0*
lJXU0(TmpZN)*lJXU0(q5nqO)-2.0*TmpZN*Fayok*_NEO8(q5nqO)-2.0*_NEO8(q5nqO)*X8_KU+
2.0*_NEO8(q5nqO)*_DBry)/(mdAxL(2.0)*q5nqO);
inQml=(jTaOv-Usbkk)/q5nqO;g61Bh=Usbkk*inQml+0.5*q5nqO*lJXU0(inQml);
fWp13=jTaOv/q5nqO;KyXX2=0.5*lJXU0(jTaOv)/q5nqO;
QbGKS=L1lil=TmpZN/q5nqO;qbPQ9=yPn47=0.5*lJXU0(TmpZN)/q5nqO;
gMQcp=(Usbkk-2.0*TmpZN-2.0*jTaOv+q5nqO*Fayok)/q5nqO;w_Pf4=gMQcp*TmpZN;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)+q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)-q5nqO*_NEO8(fWp13)/6.0;X8_KU+=KyXX2;
Usbkk=0.0;
DJ64_+=X8_KU*QbGKS+0.5*Usbkk*lJXU0(QbGKS)+q5nqO*_NEO8(QbGKS)/6.0;X8_KU+=qbPQ9;
Usbkk=TmpZN;
DJ64_+=X8_KU*gMQcp+0.5*Usbkk*lJXU0(gMQcp);
X8_KU+=w_Pf4;Usbkk=TmpZN;
DJ64_+=X8_KU*L1lil+0.5*Usbkk*lJXU0(L1lil)-q5nqO*_NEO8(L1lil)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::tgY5S(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,LvUdr=0.0
,QbGKS=0.0
,gMQcp=0.0
,L1lil=0.0
,KqrR0=0.0
,plg23=0.0
,qbPQ9=0.0
,w_Pf4=0.0
,yPn47=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=QbGKS=L1lil=TmpZN/q5nqO;plg23=qbPQ9=yPn47=0.5*lJXU0(TmpZN)/q5nqO;
w_Pf4=_DBry-X8_KU-KqrR0-plg23-qbPQ9-yPn47;gMQcp=w_Pf4/TmpZN;
LvUdr=SynchronizationTime-pJfW2-_fKak-Y14Px-QbGKS-gMQcp-L1lil;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;X8_KU+=plg23;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*QbGKS+0.5*Usbkk*lJXU0(QbGKS)+q5nqO*_NEO8(QbGKS)/6.0;X8_KU+=qbPQ9;
Usbkk=TmpZN;
DJ64_+=X8_KU*gMQcp+0.5*Usbkk*lJXU0(gMQcp);
X8_KU+=w_Pf4;Usbkk=TmpZN;
DJ64_+=X8_KU*L1lil+0.5*Usbkk*lJXU0(L1lil)-q5nqO*_NEO8(L1lil)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::jytVB(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double QbGKS=0.0
,gMQcp=0.0
,L1lil=0.0
,LvUdr=0.0
,_fKak=0.0
,Y14Px=0.0
,qbPQ9=0.0
,w_Pf4=0.0
,yPn47=0.0
,KqrR0=0.0
,plg23=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
QbGKS=(TmpZN-Usbkk)/q5nqO;qbPQ9=Usbkk*QbGKS+0.5*q5nqO*lJXU0(QbGKS);
L1lil=_fKak=Y14Px=TmpZN/q5nqO;yPn47=KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;
w_Pf4=_DBry-X8_KU-qbPQ9-yPn47-KqrR0-plg23;gMQcp=w_Pf4/TmpZN;
LvUdr=SynchronizationTime-pJfW2-QbGKS-gMQcp-L1lil-_fKak-Y14Px;
DJ64_+=X8_KU*QbGKS+0.5*Usbkk*lJXU0(QbGKS)+q5nqO*_NEO8(QbGKS)/6.0;X8_KU+=qbPQ9;
Usbkk=TmpZN;
DJ64_+=X8_KU*gMQcp+0.5*Usbkk*lJXU0(gMQcp);
X8_KU+=w_Pf4;Usbkk=TmpZN;
DJ64_+=X8_KU*L1lil+0.5*Usbkk*lJXU0(L1lil)-q5nqO*_NEO8(L1lil)/6.0;
X8_KU+=yPn47;Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::kI_P7(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,inQml=0.0
,fWp13=0.0
,KqrR0=0.0
,plg23=0.0
,jTaOv=0.0;

_fKak=(TmpZN-OFgA6)/q5nqO;KqrR0=OFgA6*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=TmpZN/q5nqO;plg23=0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL(q5nqO*(_DBry-qI8hj-KqrR0-plg23));
inQml=fWp13=jTaOv/q5nqO;return((pJfW2+_fKak+Y14Px+inQml+fWp13)>=
SynchronizationTime);}


bool BkjIW::yGiLt(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,inQml=0.0
,fWp13=0.0
,KqrR0=0.0
,plg23=0.0
,jTaOv=0.0;

_fKak=Y14Px=TmpZN/q5nqO;KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL((lJXU0(OFgA6)+2.0*q5nqO*(_DBry-qI8hj-KqrR0-plg23))/2.0);
inQml=(jTaOv-OFgA6)/q5nqO;
fWp13=jTaOv/q5nqO;return((pJfW2+inQml+fWp13+_fKak+Y14Px)>=SynchronizationTime);}


bool BkjIW::PRuj2(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,LvUdr=0.0
,_fKak=0.0
,Y14Px=0.0
,g61Bh=0.0
,KyXX2=0.0
,KqrR0=0.0
,plg23=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=Y14Px=TmpZN/q5nqO;KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(_DBry-X8_KU-KqrR0-plg23))/2.0);
inQml=(jTaOv-Usbkk)/q5nqO;g61Bh=Usbkk*inQml+0.5*q5nqO*lJXU0(inQml);
fWp13=jTaOv/q5nqO;KyXX2=0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-inQml-fWp13-_fKak-Y14Px;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)+q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)-q5nqO*_NEO8(fWp13)/6.0;X8_KU+=KyXX2;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::VumHF(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double vJv2W=0.0,WBuXo=0.0,iLPfk=0.0,dLNrR=0.0,Qogm3
=0.0,yZ3xv=0.0,noAZe=0.0,hkIV6=0.0,H8XdD=0.0,asQhv=0.0
,EToJ3=0.0
,KtmYS=0.0
,vWB88=0.0
,jTaOv=0.0;

jTaOv=(mdAxL(q5nqO)*mdAxL(lJXU0(OFgA6)/q5nqO-2.0*qI8hj+2.0*_DBry))/2.0;
asQhv=(jTaOv-OFgA6)/q5nqO;
EToJ3=KtmYS=vWB88=jTaOv/q5nqO;;if((pJfW2+asQhv+EToJ3+KtmYS+vWB88)<
SynchronizationTime){return(false);}vJv2W=0.25*OFgA6+0.25*(SynchronizationTime-
pJfW2)*q5nqO-0.25*mdAxL(3.0*lJXU0(OFgA6)-2.0*OFgA6*(SynchronizationTime-pJfW2)*
q5nqO+q5nqO*(8.0*(_DBry-qI8hj)-lJXU0(SynchronizationTime-pJfW2)*q5nqO));WBuXo=
0.25*OFgA6+0.25*(SynchronizationTime-pJfW2)*q5nqO+0.25*mdAxL(3.0*lJXU0(OFgA6)-
2.0*OFgA6*(SynchronizationTime-pJfW2)*q5nqO+q5nqO*(8.0*(_DBry-qI8hj)-lJXU0(
SynchronizationTime-pJfW2)*q5nqO));if(vJv2W<OFgA6){vJv2W=OFgA6;}if(WBuXo<OFgA6){
WBuXo=OFgA6;}Qogm3=OFgA6*OFgA6;hkIV6=WBuXo+vJv2W;H8XdD=WBuXo*WBuXo;yZ3xv=vJv2W*
vJv2W;noAZe=q5nqO*q5nqO;dLNrR=Dk1wk+(Qogm3*OFgA6/0.3e1-Qogm3*hkIV6-OFgA6*q5nqO*
qI8hj+H8XdD*WBuXo+0.2e1*H8XdD*vJv2W+yZ3xv*vJv2W+0.2e1*hkIV6*q5nqO*qI8hj)/noAZe;
if(dLNrR>qPN_6){return(true);}iLPfk=Dk1wk+(Qogm3*OFgA6/0.3e1-Qogm3*hkIV6-OFgA6*
q5nqO*qI8hj+yZ3xv*vJv2W+0.2e1*yZ3xv*WBuXo+H8XdD*WBuXo+0.2e1*hkIV6*q5nqO*qI8hj)/
noAZe;if(iLPfk<qPN_6){return(true);}return(false);}


bool BkjIW::M9W6Z(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,LvUdr=0.0
,EmcUF=0.0
,Ek8a2=0.0
,KqrR0=0.0
,plg23=0.0
,aFFa9=0.0
,bWBw0=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=TmpZN/q5nqO;plg23=0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL(q5nqO*(_DBry-X8_KU-KqrR0-plg23));
EmcUF=Ek8a2=jTaOv/q5nqO;aFFa9=bWBw0=0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-_fKak-Y14Px-EmcUF-Ek8a2;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;X8_KU+=plg23;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*EmcUF+0.5*Usbkk*lJXU0(EmcUF)+q5nqO*_NEO8(EmcUF)/6.0;X8_KU+=aFFa9;
Usbkk=jTaOv;
DJ64_+=X8_KU*Ek8a2+0.5*Usbkk*lJXU0(Ek8a2)-q5nqO*_NEO8(Ek8a2)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::tz_5s(const double&TmpZN,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){
double bRoo6=0.0
,GFN9N=0.0
,BTPut=0.0
,V1Tsd=0.0
,HySer=0.0
,Nvuq4=0.0
,G0QXU=0.0
,ARpRF=0.0
,svvMZ=0.0
,D6cDH=0.0;

bRoo6=GFN9N=BTPut=HySer=TmpZN/q5nqO;Nvuq4=G0QXU=-0.5*lJXU0(TmpZN)/q5nqO;ARpRF=
D6cDH=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-qI8hj-Nvuq4-G0QXU-ARpRF-D6cDH;V1Tsd=svvMZ/TmpZN;return((pJfW2+bRoo6+
GFN9N+BTPut+V1Tsd+HySer)>=SynchronizationTime);}


bool BkjIW::fnh6N(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,LvUdr=0.0
,_fKak=0.0
,XtBZ5=0.0
,Y14Px=0.0
,ZOoyF=0.0
,TOnIe=0.0
,KqrR0=0.0
,qkwiy=0.0
,plg23=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=_fKak=Y14Px=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;KqrR0=
plg23=0.5*lJXU0(TmpZN)/q5nqO;
qkwiy=_DBry-X8_KU-ZOoyF-TOnIe-KqrR0-plg23;XtBZ5=qkwiy/TmpZN;
LvUdr=SynchronizationTime-pJfW2-T9V0j-zFb7J-_fKak-XtBZ5-Y14Px;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;X8_KU+=TOnIe;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*XtBZ5+0.5*Usbkk*lJXU0(XtBZ5);
X8_KU+=qkwiy;Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::l4S4m(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){double LLvD8=
0.0
,EmcUF=0.0
,Ek8a2=0.0
,knGOu=0.0
,jTaOv=0.0;

LLvD8=OFgA6/q5nqO;knGOu=0.5*lJXU0(OFgA6)/q5nqO;
jTaOv=mdAxL(q5nqO*(_DBry-qI8hj-knGOu));
EmcUF=Ek8a2=jTaOv/q5nqO;return((pJfW2+LLvD8+EmcUF+Ek8a2)>=SynchronizationTime);}


bool BkjIW::tv7UI(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){return(kI_P7(OFgA6,TmpZN,qI8hj,_DBry,q5nqO,pJfW2,
SynchronizationTime));}


bool BkjIW::ny0c6(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){return(M9W6Z(OFgA6,TmpZN,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO,pJfW2,SynchronizationTime));}


bool BkjIW::sii13(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double LLvD8=0.0
,LvUdr=0.0
,bRoo6=0.0
,GFN9N=0.0
,knGOu=0.0
,Nvuq4=0.0
,G0QXU=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
LLvD8=Usbkk/q5nqO;knGOu=Usbkk*LLvD8-0.5*lJXU0(LLvD8)*q5nqO;
jTaOv=mdAxL(q5nqO*(_DBry-X8_KU-knGOu));
bRoo6=GFN9N=jTaOv/q5nqO;Nvuq4=G0QXU=0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-LLvD8-bRoo6-GFN9N;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;X8_KU+=knGOu;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*bRoo6+0.5*Usbkk*lJXU0(bRoo6)+q5nqO*_NEO8(bRoo6)/6.0;X8_KU+=Nvuq4;
Usbkk=jTaOv;
DJ64_+=X8_KU*GFN9N+0.5*Usbkk*lJXU0(GFN9N)-q5nqO*_NEO8(GFN9N)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::d1Snw(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){return(kI_P7(OFgA6,TmpZN,qI8hj,_DBry,q5nqO,pJfW2,
SynchronizationTime));}


bool BkjIW::Uxx21(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){return(m9bSZ(OFgA6,qI8hj,_DBry,q5nqO));}


bool BkjIW::HpaN2(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){return(M9W6Z(OFgA6,TmpZN,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO,pJfW2,SynchronizationTime));}


bool BkjIW::ZSLfo(const double&TmpZN,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,RpYbr=0.0
,p3XOX=0.0
,KqrR0=0.0
,plg23=0.0
,jTaOv=0.0
,X8_KU=qI8hj,RfxYz=_DBry;
_fKak=Y14Px=TmpZN/q5nqO;KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;
X8_KU=-X8_KU;RfxYz=-RfxYz;KqrR0=-KqrR0;plg23=-plg23;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-KqrR0-plg23));
X8_KU=-X8_KU;RfxYz=-RfxYz;KqrR0=-KqrR0;plg23=-plg23;jTaOv=-jTaOv;
RpYbr=p3XOX=(-jTaOv)/q5nqO;return((pJfW2+_fKak+Y14Px+RpYbr+p3XOX)>=
SynchronizationTime);}


bool BkjIW::uQOPz(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,LvUdr=0.0
,_fKak=0.0
,Y14Px=0.0
,g61Bh=0.0
,KyXX2=0.0
,KqrR0=0.0
,plg23=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
_fKak=Y14Px=TmpZN/q5nqO;KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;KqrR0=-KqrR0;plg23=-plg23;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-KqrR0-plg23));
jTaOv=-jTaOv;RfxYz=-RfxYz;X8_KU=-X8_KU;KqrR0=-KqrR0;plg23=-plg23;
inQml=fWp13=(-jTaOv)/q5nqO;g61Bh=KyXX2=-0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-inQml-fWp13-_fKak-Y14Px;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)-q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)+q5nqO*_NEO8(fWp13)/6.0;X8_KU+=KyXX2;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::X5RkD(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&qXUgQ,const 
double&pJfW2,const double&SynchronizationTime){
double EmcUF=0.0
,Ek8a2=0.0
,LvUdr=0.0
,aFFa9=0.0
,bWBw0=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(_DBry-X8_KU))/2.0);
EmcUF=(jTaOv-Usbkk)/q5nqO;aFFa9=Usbkk*EmcUF+0.5*q5nqO*lJXU0(EmcUF);
Ek8a2=jTaOv/q5nqO;bWBw0=0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-EmcUF-Ek8a2;
DJ64_+=X8_KU*EmcUF+0.5*Usbkk*lJXU0(EmcUF)+q5nqO*_NEO8(EmcUF)/6.0;X8_KU+=aFFa9;
Usbkk=jTaOv;
DJ64_+=X8_KU*Ek8a2+0.5*Usbkk*lJXU0(Ek8a2)-q5nqO*_NEO8(Ek8a2)/6.0;X8_KU=_DBry;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=_DBry;Usbkk=0.0;if(_DBry>0.0){return(DJ64_<=qPN_6+qXUgQ*ClLiO*(1.0-(qXUgQ-
_DBry)/qXUgQ));}else{return(DJ64_<=qPN_6);}}


bool BkjIW::VJnVH(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,yplrz=0.0
,k1KD8=0.0
,jTaOv=0.0
,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
_fKak=(TmpZN-Usbkk)/q5nqO;
X8_KU+=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);Usbkk=TmpZN;
Y14Px=TmpZN/q5nqO;
X8_KU+=Usbkk*Y14Px-0.5*q5nqO*lJXU0(Y14Px);Usbkk=0.0;

RfxYz=-RfxYz;X8_KU=-X8_KU;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
RfxYz=-RfxYz;X8_KU=-X8_KU;jTaOv=-jTaOv;
yplrz=k1KD8=(-jTaOv)/q5nqO;return((pJfW2+_fKak+Y14Px+yplrz+k1KD8)>=
SynchronizationTime);}


bool BkjIW::FYsga(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,LvUdr=0.0
,yplrz=0.0
,k1KD8=0.0
,KqrR0=0.0
,plg23=0.0
,X2k34=0.0
,yEuhm=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=TmpZN/q5nqO;plg23=0.5*lJXU0(TmpZN)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;KqrR0=-KqrR0;plg23=-plg23;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-KqrR0-plg23));
jTaOv=-jTaOv;RfxYz=-RfxYz;X8_KU=-X8_KU;KqrR0=-KqrR0;plg23=-plg23;
yplrz=k1KD8=(-jTaOv)/q5nqO;X2k34=yEuhm=-0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-_fKak-Y14Px-yplrz-k1KD8;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
X8_KU+=plg23;Usbkk=(0x7f7+2574-0x1205);
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*yplrz+0.5*Usbkk*lJXU0(yplrz)-q5nqO*_NEO8(yplrz)/6.0;X8_KU+=X2k34;
Usbkk=jTaOv;
DJ64_+=X8_KU*k1KD8+0.5*Usbkk*lJXU0(k1KD8)+q5nqO*_NEO8(k1KD8)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::rfyr6(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){return(l4S4m(
OFgA6,qI8hj,_DBry,q5nqO,pJfW2,SynchronizationTime));}


bool BkjIW::iN0AI(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){return(m9bSZ(OFgA6,qI8hj,_DBry,q5nqO));}


bool BkjIW::UFEjL(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){return(dnOyS(
OFgA6,qI8hj,_DBry,q5nqO,pJfW2,SynchronizationTime));}


bool BkjIW::B3YwL(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){return(Xwv7U(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
pJfW2,SynchronizationTime));}


bool BkjIW::Ik3kO(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){return(gots9(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
pJfW2,SynchronizationTime));}


bool BkjIW::oF0Q4(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){return(PhwYA(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
pJfW2,SynchronizationTime));}


bool BkjIW::mdsV_(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){
return(VumHF(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,pJfW2,SynchronizationTime));}


bool BkjIW::xE_Ln(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){return(sii13(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
pJfW2,SynchronizationTime));}


bool BkjIW::m9bSZ(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){
double Time=0.0
,lON8H=0.0
,jTaOv=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;lON8H=Usbkk;
Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));return(lON8H>=jTaOv);}


bool BkjIW::xnyWu(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
return(kP90X(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::_RMep(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&qXUgQ,const 
double&pJfW2,const double&SynchronizationTime){
double LLvD8=0.0
,yplrz=0.0
,k1KD8=0.0
,LvUdr=0.0
,knGOu=0.0
,X2k34=0.0
,yEuhm=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
LLvD8=Usbkk/q5nqO;knGOu=0.5*lJXU0(Usbkk)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;knGOu=-knGOu;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-knGOu));
jTaOv=-jTaOv;RfxYz=-RfxYz;X8_KU=-X8_KU;knGOu=-knGOu;
yplrz=k1KD8=(-jTaOv)/q5nqO;X2k34=yEuhm=-0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-LLvD8-yplrz-k1KD8;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;X8_KU+=knGOu;
Usbkk=0.0;
DJ64_+=X8_KU*yplrz+0.5*Usbkk*lJXU0(yplrz)-q5nqO*_NEO8(yplrz)/6.0;X8_KU+=X2k34;
Usbkk=jTaOv;
DJ64_+=X8_KU*k1KD8+0.5*Usbkk*lJXU0(k1KD8)+q5nqO*_NEO8(k1KD8)/6.0;X8_KU=RfxYz;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=RfxYz;Usbkk=0.0;if(_DBry<0.0){return(DJ64_>=qPN_6-qXUgQ*ClLiO*(1.0-(qXUgQ+
_DBry)/qXUgQ));}else{return(DJ64_>=qPN_6);}}


bool BkjIW::NRpBq(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,bRoo6=0.0
,GFN9N=0.0
,ZOoyF=0.0
,TOnIe=0.0
,jTaOv=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
X8_KU+=ZOoyF;Usbkk=-TmpZN;
X8_KU+=TOnIe;Usbkk=0.0;
jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));
bRoo6=GFN9N=jTaOv/q5nqO;return((pJfW2+T9V0j+zFb7J+bRoo6+GFN9N)>=
SynchronizationTime);}


bool BkjIW::vjYVl(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,LvUdr=0.0
,EmcUF=0.0
,Ek8a2=0.0
,ZOoyF=0.0
,TOnIe=0.0
,aFFa9=0.0
,bWBw0=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL(q5nqO*(_DBry-X8_KU-ZOoyF-TOnIe));
EmcUF=Ek8a2=jTaOv/q5nqO;aFFa9=bWBw0=0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-T9V0j-zFb7J-EmcUF-Ek8a2;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;X8_KU+=TOnIe;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*EmcUF+0.5*Usbkk*lJXU0(EmcUF)+q5nqO*_NEO8(EmcUF)/6.0;X8_KU+=aFFa9;
Usbkk=jTaOv;
DJ64_+=X8_KU*Ek8a2+0.5*Usbkk*lJXU0(Ek8a2)-q5nqO*_NEO8(Ek8a2)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::oWtE0(const double&TmpZN,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,_fKak=0.0
,Y14Px=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,KqrR0=0.0
,plg23=0.0;

T9V0j=zFb7J=_fKak=Y14Px=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;KqrR0=
plg23=0.5*lJXU0(TmpZN)/q5nqO;
LfMmF=_DBry-qI8hj-ZOoyF-TOnIe-KqrR0-plg23;bYilq=LfMmF/(-TmpZN);return((pJfW2+
T9V0j+bYilq+zFb7J+_fKak+Y14Px)>=SynchronizationTime);}


bool BkjIW::nhG1V(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,LvUdr=0.0
,_fKak=0.0
,Y14Px=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,KqrR0=0.0
,plg23=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=_fKak=Y14Px=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;KqrR0=
plg23=0.5*lJXU0(TmpZN)/q5nqO;
LfMmF=_DBry-X8_KU-ZOoyF-TOnIe-KqrR0-plg23;bYilq=LfMmF/(-TmpZN);
LvUdr=SynchronizationTime-pJfW2-T9V0j-bYilq-zFb7J-_fKak-Y14Px;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
X8_KU+=TOnIe;Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::Kg0C9(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double LLvD8=0.0
,LvUdr=0.0
,bRoo6=0.0
,GFN9N=0.0
,knGOu=0.0
,Nvuq4=0.0
,G0QXU=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
LLvD8=Usbkk/q5nqO;knGOu=Usbkk*LLvD8-0.5*lJXU0(LLvD8)*q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;knGOu=-knGOu;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-knGOu));
RfxYz=-RfxYz;X8_KU=-X8_KU;knGOu=-knGOu;jTaOv=-jTaOv;
bRoo6=GFN9N=(-jTaOv)/q5nqO;Nvuq4=G0QXU=-0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-LLvD8-bRoo6-GFN9N;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;X8_KU+=knGOu;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*bRoo6+0.5*Usbkk*lJXU0(bRoo6)-q5nqO*_NEO8(bRoo6)/6.0;X8_KU+=Nvuq4;
Usbkk=jTaOv;
DJ64_+=X8_KU*GFN9N+0.5*Usbkk*lJXU0(GFN9N)+q5nqO*_NEO8(GFN9N)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::YgCxB(const double&qI8hj,const double&_DBry,const double&Dk1wk,const
 double&qPN_6,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){return(VumHF(0.0,-qI8hj,-_DBry,-Dk1wk,-qPN_6,q5nqO,pJfW2,
SynchronizationTime));}


bool BkjIW::YmyrZ(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){return(XM_SU(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
pJfW2,SynchronizationTime));}


bool BkjIW::xraTJ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
return(pbAzH(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::H_lsU(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,T9V0j=0.0
,zFb7J=0.0
,ZOoyF=0.0
,TOnIe=0.0
,jTaOv=0.0;

T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL((lJXU0(OFgA6)+2.0*q5nqO*(_DBry-qI8hj-ZOoyF-TOnIe))/2.0);
inQml=(jTaOv-OFgA6)/q5nqO;
fWp13=jTaOv/q5nqO;return((pJfW2+inQml+fWp13+T9V0j+zFb7J)>=SynchronizationTime);}


bool BkjIW::isWQx(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,LvUdr=0.0
,T9V0j=0.0
,zFb7J=0.0
,g61Bh=0.0
,KyXX2=0.0
,ZOoyF=0.0
,TOnIe=0.0
,v59ZL=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(_DBry-X8_KU-ZOoyF-TOnIe))/2.0);
inQml=(jTaOv-Usbkk)/q5nqO;g61Bh=Usbkk*inQml+0.5*q5nqO*lJXU0(inQml);
fWp13=jTaOv/q5nqO;KyXX2=0.5*lJXU0(jTaOv)/q5nqO;
v59ZL=X8_KU+g61Bh+KyXX2;
LvUdr=SynchronizationTime-pJfW2-inQml-fWp13-T9V0j-zFb7J;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)+q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)-q5nqO*_NEO8(fWp13)/6.0;X8_KU+=KyXX2;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::qW3QE(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);Usbkk=TmpZN;
Y14Px=TmpZN/q5nqO;X8_KU+=Usbkk*Y14Px-0.5*q5nqO*lJXU0(Y14Px);Usbkk=0.0;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
LfMmF=_DBry-X8_KU-ZOoyF-TOnIe;bYilq=LfMmF/(-TmpZN);return((pJfW2+_fKak+Y14Px+
T9V0j+bYilq+zFb7J)>=SynchronizationTime);}


bool BkjIW::cUEs5(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double _fKak=0.0
,Y14Px=0.0
,LvUdr=0.0
,hKCWV=0.0
,O9wjD=0.0
,JjzQN=0.0
,KqrR0=0.0
,plg23=0.0
,QjWBo=0.0
,_hGgc=0.0
,dF6MZ=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);
Y14Px=TmpZN/q5nqO;plg23=0.5*lJXU0(TmpZN)/q5nqO;
hKCWV=JjzQN=TmpZN/q5nqO;QjWBo=dF6MZ=-0.5*lJXU0(TmpZN)/q5nqO;
_hGgc=_DBry-X8_KU-KqrR0-plg23-QjWBo-dF6MZ;O9wjD=_hGgc/(-TmpZN);
LvUdr=SynchronizationTime-pJfW2-_fKak-Y14Px-hKCWV-O9wjD-JjzQN;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;X8_KU+=plg23;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*hKCWV+0.5*Usbkk*lJXU0(hKCWV)-q5nqO*_NEO8(hKCWV)/6.0;X8_KU+=QjWBo;
Usbkk=-TmpZN;
DJ64_+=X8_KU*O9wjD+0.5*Usbkk*lJXU0(O9wjD);
X8_KU+=_hGgc;Usbkk=-TmpZN;
DJ64_+=X8_KU*JjzQN+0.5*Usbkk*lJXU0(JjzQN)+q5nqO*_NEO8(JjzQN)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::yxXdg(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&qXUgQ,const double&pJfW2,const double&SynchronizationTime){
double LLvD8=0.0
,T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,LvUdr=0.0
,knGOu=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
LLvD8=Usbkk/q5nqO;knGOu=0.5*lJXU0(Usbkk)/q5nqO;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
LfMmF=_DBry-X8_KU-knGOu-ZOoyF-TOnIe;bYilq=LfMmF/(-TmpZN);
LvUdr=SynchronizationTime-pJfW2-LLvD8-T9V0j-bYilq-zFb7J;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;X8_KU+=knGOu;
Usbkk=0.0;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
X8_KU=_DBry;Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=_DBry;Usbkk=0.0;if(_DBry<0.0){return(DJ64_>=qPN_6-qXUgQ*ClLiO*(1.0-(qXUgQ+
_DBry)/qXUgQ));}else{return(DJ64_>=qPN_6);}}


bool BkjIW::iqe17(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double LLvD8=0.0
,LvUdr=0.0
,BTPut=0.0
,V1Tsd=0.0
,HySer=0.0
,knGOu=0.0
,ARpRF=0.0
,wpTRG=0.0
,D6cDH=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
LLvD8=Usbkk/q5nqO;knGOu=Usbkk*LLvD8-0.5*lJXU0(LLvD8)*q5nqO;
BTPut=HySer=TmpZN/q5nqO;ARpRF=D6cDH=-0.5*lJXU0(TmpZN)/q5nqO;
wpTRG=_DBry-X8_KU-knGOu-ARpRF-D6cDH;V1Tsd=wpTRG/(-TmpZN);
LvUdr=SynchronizationTime-pJfW2-LLvD8-BTPut-V1Tsd-HySer;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)-q5nqO*_NEO8(LLvD8)/6.0;X8_KU+=knGOu;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*BTPut+0.5*Usbkk*lJXU0(BTPut)-q5nqO*_NEO8(BTPut)/6.0;X8_KU+=ARpRF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*V1Tsd+0.5*Usbkk*lJXU0(V1Tsd);
X8_KU+=wpTRG;Usbkk=-TmpZN;
DJ64_+=X8_KU*HySer+0.5*Usbkk*lJXU0(HySer)+q5nqO*_NEO8(HySer)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::R4_30(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Usbkk=OFgA6,Time=0.0,X8_KU=qI8hj;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU>=_DBry);}


bool BkjIW::AwsJf(const double&TmpZN,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,hKCWV=0.0
,O9wjD=0.0
,JjzQN=0.0
,ZOoyF=0.0
,TOnIe=0.0
,QjWBo=0.0
,_hGgc=0.0
,dF6MZ=0.0;

T9V0j=zFb7J=hKCWV=JjzQN=TmpZN/q5nqO;ZOoyF=TOnIe=QjWBo=dF6MZ=-0.5*lJXU0(TmpZN)/
q5nqO;
_hGgc=_DBry-qI8hj-ZOoyF-TOnIe-QjWBo-dF6MZ;O9wjD=_hGgc/(-TmpZN);return((pJfW2+
T9V0j+zFb7J+hKCWV+O9wjD+JjzQN)>=SynchronizationTime);}


bool BkjIW::_7uhR(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,inQml=0.0
,fWp13=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,g61Bh=0.0
,KyXX2=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
jTaOv=0.5*(-2.0*TmpZN+2.8284271247461903*mdAxL(1.0*lJXU0(TmpZN)+0.5*TmpZN*q5nqO*
pJfW2-0.5*TmpZN*q5nqO*SynchronizationTime+0.5*q5nqO*X8_KU-0.5*q5nqO*_DBry));
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
bYilq=(-4.0*TmpZN)/q5nqO-1.0*pJfW2+SynchronizationTime+(2.8284271247461903*mdAxL
(1.0*lJXU0(TmpZN)+0.5*TmpZN*q5nqO*pJfW2-0.5*TmpZN*q5nqO*SynchronizationTime+0.5*
q5nqO*X8_KU-0.5*q5nqO*_DBry))/q5nqO;LfMmF=(-TmpZN)*bYilq;
inQml=fWp13=(-jTaOv)/q5nqO;g61Bh=KyXX2=-0.5*lJXU0(jTaOv)/q5nqO;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
X8_KU+=TOnIe;Usbkk=0.0;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)-q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)+q5nqO*_NEO8(fWp13)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::UyDIJ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,g61Bh=0.0
,KyXX2=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
jTaOv=0.5*(-2.0*TmpZN+2.8284271247461903*mdAxL(1.0*lJXU0(TmpZN)+0.5*TmpZN*q5nqO*
pJfW2-0.5*TmpZN*q5nqO*SynchronizationTime+0.5*q5nqO*X8_KU-0.5*q5nqO*_DBry));
inQml=fWp13=(-jTaOv)/q5nqO;g61Bh=KyXX2=-0.5*lJXU0(jTaOv)/q5nqO;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
bYilq=(-4.0*TmpZN)/q5nqO-1.0*pJfW2+SynchronizationTime+(2.8284271247461903*mdAxL
(1.0*lJXU0(TmpZN)+0.5*TmpZN*q5nqO*pJfW2-0.5*TmpZN*q5nqO*SynchronizationTime+0.5*
q5nqO*X8_KU-0.5*q5nqO*_DBry))/q5nqO;LfMmF=(-TmpZN)*bYilq;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)-q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)+q5nqO*_NEO8(fWp13)/6.0;X8_KU+=KyXX2;
Usbkk=0.0;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::XM_SU(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&pJfW2,const 
double&SynchronizationTime){double Ijlxn=0.0
,o4rjY=0.0
,DyX4F=0.0
,NNpNV=0.0
,aKoL7=0.0
,pQp7S=0.0
,lg7Ml=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Ijlxn=0.5*Usbkk+0.5*q5nqO*pJfW2-0.5*q5nqO*SynchronizationTime+0.25*q5nqO*mdAxL((
-4.*lJXU0(Usbkk))/lJXU0(q5nqO)+(8.0*Usbkk*pJfW2)/q5nqO+4.0*lJXU0(pJfW2)-(8.0*
Usbkk*SynchronizationTime)/q5nqO-8.0*pJfW2*SynchronizationTime+4.0*lJXU0(
SynchronizationTime)-(16.0*X8_KU)/q5nqO+(16.0*_DBry)/q5nqO);
o4rjY=(Usbkk-Ijlxn)/q5nqO;aKoL7=Usbkk*o4rjY-0.5*q5nqO*lJXU0(o4rjY);
NNpNV=(-Ijlxn)/q5nqO;lg7Ml=-0.5*lJXU0(Ijlxn)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-o4rjY-NNpNV;pQp7S=DyX4F*Ijlxn;
DJ64_+=X8_KU*o4rjY+0.5*Usbkk*lJXU0(o4rjY)-q5nqO*_NEO8(o4rjY)/6.0;X8_KU+=aKoL7;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*NNpNV+0.5*Usbkk*lJXU0(NNpNV)+q5nqO*_NEO8(NNpNV)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::y4fHo(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double Ijlxn=0.0
,T9V0j=0.0
,NNpNV=0.0
,DyX4F=0.0
,LLvD8=0.0
,ZOoyF=0.0
,lg7Ml=0.0
,pQp7S=0.0
,HfKyb=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Ijlxn=(q5nqO*(X8_KU-_DBry)-lJXU0(TmpZN))/(2.0*TmpZN-q5nqO*(SynchronizationTime-
pJfW2));
T9V0j=(TmpZN+Usbkk)/q5nqO;ZOoyF=Usbkk*T9V0j-0.5*q5nqO*lJXU0(T9V0j);
NNpNV=(Ijlxn+TmpZN)/q5nqO;lg7Ml=-TmpZN*NNpNV+0.5*q5nqO*lJXU0(NNpNV);
LLvD8=(-Ijlxn)/q5nqO;HfKyb=-0.5*lJXU0(Ijlxn)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-T9V0j-NNpNV-LLvD8;pQp7S=Ijlxn*DyX4F;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN,
DJ64_+=X8_KU*NNpNV+0.5*Usbkk*lJXU0(NNpNV)+q5nqO*_NEO8(NNpNV)/6.0;X8_KU+=lg7Ml;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)+q5nqO*_NEO8(LLvD8)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::DGjBU(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){double Ijlxn=0.0
,o4rjY=0.0
,DyX4F=0.0
,T9V0j=0.0
,LLvD8=0.0
,aKoL7=0.0
,pQp7S=0.0
,ZOoyF=0.0
,HfKyb=0.0
,Fayok=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;Fayok=SynchronizationTime-pJfW2;
Ijlxn=(q5nqO*(X8_KU-_DBry)-lJXU0(TmpZN))/(2.0*TmpZN-Fayok*q5nqO);
o4rjY=(Usbkk-Ijlxn)/q5nqO;aKoL7=Usbkk*o4rjY-0.5*q5nqO*lJXU0(o4rjY);
T9V0j=(TmpZN+Ijlxn)/q5nqO;ZOoyF=Ijlxn*T9V0j-0.5*T9V0j*(TmpZN+Ijlxn);
LLvD8=TmpZN/q5nqO;HfKyb=-0.5*lJXU0(TmpZN)/q5nqO;
DyX4F=SynchronizationTime-pJfW2-o4rjY-T9V0j-LLvD8;pQp7S=Ijlxn*DyX4F;
DJ64_+=X8_KU*o4rjY+0.5*Usbkk*lJXU0(o4rjY)-q5nqO*_NEO8(o4rjY)/6.0;X8_KU+=aKoL7;
Usbkk=Ijlxn;
DJ64_+=X8_KU*DyX4F+0.5*Usbkk*lJXU0(DyX4F);X8_KU+=pQp7S;Usbkk=Ijlxn;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN,
DJ64_+=X8_KU*LLvD8+0.5*Usbkk*lJXU0(LLvD8)+q5nqO*_NEO8(LLvD8)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::bio5A(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,LvUdr=0.0
,hKCWV=0.0
,O9wjD=0.0
,JjzQN=0.0
,ZOoyF=0.0
,TOnIe=0.0
,QjWBo=0.0
,_hGgc=0.0
,dF6MZ=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=hKCWV=JjzQN=TmpZN/q5nqO;ZOoyF=TOnIe=QjWBo=dF6MZ=-0.5*lJXU0(TmpZN)/
q5nqO;
_hGgc=_DBry-X8_KU-ZOoyF-TOnIe-QjWBo-dF6MZ;O9wjD=_hGgc/(-TmpZN);
LvUdr=SynchronizationTime-pJfW2-T9V0j-zFb7J-hKCWV-O9wjD-JjzQN;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;X8_KU+=TOnIe;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*hKCWV+0.5*Usbkk*lJXU0(hKCWV)-q5nqO*_NEO8(hKCWV)/6.0;X8_KU+=QjWBo;
Usbkk=-TmpZN;
DJ64_+=X8_KU*O9wjD+0.5*Usbkk*lJXU0(O9wjD);
X8_KU+=_hGgc;Usbkk=-TmpZN;
DJ64_+=X8_KU*JjzQN+0.5*Usbkk*lJXU0(JjzQN)+q5nqO*_NEO8(JjzQN)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::QD2iD(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double hKCWV=0.0
,O9wjD=0.0
,JjzQN=0.0
,LvUdr=0.0
,T9V0j=0.0
,zFb7J=0.0
,QjWBo=0.0
,_hGgc=0.0
,dF6MZ=0.0
,ZOoyF=0.0
,TOnIe=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
hKCWV=JjzQN=T9V0j=zFb7J=TmpZN/q5nqO;QjWBo=dF6MZ=ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/
q5nqO;
_hGgc=_DBry-X8_KU-QjWBo-dF6MZ-ZOoyF-TOnIe;O9wjD=_hGgc/(-TmpZN);
LvUdr=SynchronizationTime-pJfW2-hKCWV-O9wjD-JjzQN-T9V0j-zFb7J;
DJ64_+=X8_KU*hKCWV+0.5*Usbkk*lJXU0(hKCWV)-q5nqO*_NEO8(hKCWV)/6.0;X8_KU+=QjWBo;
Usbkk=-TmpZN;
DJ64_+=X8_KU*O9wjD+0.5*Usbkk*lJXU0(O9wjD);
X8_KU+=_hGgc;Usbkk=-TmpZN;
DJ64_+=X8_KU*JjzQN+0.5*Usbkk*lJXU0(JjzQN)+q5nqO*_NEO8(JjzQN)/6.0;
X8_KU+=dF6MZ;Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::lkKJA(const double&TmpZN,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,inQml=0.0
,fWp13=0.0
,ZOoyF=0.0
,TOnIe=0.0
,jTaOv=0.0
,RfxYz=_DBry,X8_KU=qI8hj;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-ZOoyF-TOnIe));
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;jTaOv=-jTaOv;
inQml=fWp13=(-jTaOv)/q5nqO;return((pJfW2+T9V0j+zFb7J+inQml+fWp13)>=
SynchronizationTime);}


bool BkjIW::cIF_C(const double&TmpZN,const double&qI8hj,const double&_DBry,const
 double&q5nqO,const double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,T9V0j=0.0
,zFb7J=0.0
,ZOoyF=0.0
,TOnIe=0.0
,jTaOv=0.0,RfxYz=_DBry,X8_KU=qI8hj;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-ZOoyF-TOnIe));
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;jTaOv=-jTaOv;
inQml=fWp13=(-jTaOv)/q5nqO;return((pJfW2+inQml+fWp13+T9V0j+zFb7J)>=
SynchronizationTime);}


bool BkjIW::zuVsH(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
return(_7uhR(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,pJfW2,SynchronizationTime
));}


bool BkjIW::QvyaE(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double inQml=0.0
,fWp13=0.0
,LvUdr=0.0
,T9V0j=0.0
,zFb7J=0.0
,g61Bh=0.0
,KyXX2=0.0
,ZOoyF=0.0
,TOnIe=0.0
,jTaOv=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-ZOoyF-TOnIe));
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;
inQml=fWp13=jTaOv/q5nqO;g61Bh=KyXX2=-0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-inQml-fWp13-T9V0j-zFb7J;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)-q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=-jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)+q5nqO*_NEO8(fWp13)/6.0;X8_KU+=KyXX2;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::fIRmX(const double&qI8hj,const double&_DBry,const double&Dk1wk,const
 double&qPN_6,const double&q5nqO,const double&pJfW2,const double&
SynchronizationTime){
return(YgCxB(qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,pJfW2,SynchronizationTime));}


bool BkjIW::GiNhO(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&pJfW2,const double&SynchronizationTime){
double T9V0j=0.0
,zFb7J=0.0
,LvUdr=0.0
,inQml=0.0
,fWp13=0.0
,ZOoyF=0.0
,TOnIe=0.0
,g61Bh=0.0
,KyXX2=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
T9V0j=zFb7J=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-ZOoyF-TOnIe));
RfxYz=-RfxYz;X8_KU=-X8_KU;ZOoyF=-ZOoyF;TOnIe=-TOnIe;jTaOv=-jTaOv;
inQml=fWp13=(-jTaOv)/q5nqO;g61Bh=KyXX2=-0.5*lJXU0(jTaOv)/q5nqO;
LvUdr=SynchronizationTime-pJfW2-T9V0j-zFb7J-inQml-fWp13;
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;X8_KU+=TOnIe;
Usbkk=0.0;
DJ64_+=X8_KU*LvUdr;
X8_KU=X8_KU;Usbkk=0.0;
DJ64_+=X8_KU*inQml+0.5*Usbkk*lJXU0(inQml)-q5nqO*_NEO8(inQml)/6.0;X8_KU+=g61Bh;
Usbkk=jTaOv;
DJ64_+=X8_KU*fWp13+0.5*Usbkk*lJXU0(fWp13)+q5nqO*_NEO8(fWp13)/6.0;return(DJ64_>=
qPN_6);}
