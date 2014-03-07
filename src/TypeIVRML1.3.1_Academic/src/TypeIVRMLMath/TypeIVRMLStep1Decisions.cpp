
































#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep1Profiles.h>
#include <TypeIVRMLABK.h>
#include <TypeIVRMLStep1RootFunctions.h>
#include <math.h>
#include <stdlib.h>








bool BkjIW::NrRvN(const double&OFgA6){return(OFgA6>=0.0);}


bool BkjIW::HNEb0(const double&OFgA6,const double&TmpZN){return(OFgA6<=TmpZN);}


bool BkjIW::N4I01(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){double X8_KU=qI8hj,Time=0.0;Time=OFgA6/q5nqO;X8_KU+=OFgA6*Time-
0.5*q5nqO*lJXU0(Time);return(X8_KU<=qXUgQ);}


bool BkjIW::LePhM(const double&qI8hj,const double&qXUgQ){return(qI8hj>=-qXUgQ);}


bool BkjIW::ZIX9f(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

double X8_KU=qI8hj,Time=0.0;Time=(TmpZN-OFgA6)/q5nqO;
X8_KU+=OFgA6*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU>-qXUgQ);}


bool BkjIW::F1s4F(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::w49_J(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){

double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0,jTaOv=0.0;

jTaOv=mdAxL(lJXU0(Usbkk)-2.0*q5nqO*(qXUgQ+X8_KU));
X8_KU=-qXUgQ;Usbkk=jTaOv;

Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU<=qXUgQ);}


bool BkjIW::NpVpV(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
X8_KU=-qXUgQ;Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU>qXUgQ);}


bool BkjIW::aBNZo(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
Time=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=TmpZN*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU>qXUgQ);}


bool BkjIW::Rj2f6(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&qXUgQ,const double&q5nqO){
double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);if(X8_KU>qXUgQ){X8_KU=
qXUgQ;}return(X8_KU<=_DBry);}


bool BkjIW::DqcIa(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
Time=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::UhFqM(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=(TmpZN-Usbkk)/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=Usbkk*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN
)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::MfT0m(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO){

double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
X8_KU=qXUgQ;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::zcCeA(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){

double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;

G9ynl=(TmpZN-Usbkk)/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=Usbkk*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN
)/q5nqO;
svvMZ=qXUgQ-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

X8_KU=-X8_KU;RfxYz=-RfxYz;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
X8_KU=-X8_KU;RfxYz=-RfxYz;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::OW5gg(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double _fKak=0.0
,U2DcK=0.0
,Y14Px=0.0
,T9V0j=0.0
,zFb7J=0.0
,KqrR0=0.0
,svvMZ=0.0
,plg23=0.0
,ZOoyF=0.0
,TOnIe=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
_fKak=(TmpZN-Usbkk)/q5nqO;
Y14Px=T9V0j=zFb7J=TmpZN/q5nqO;KqrR0=Usbkk*_fKak+0.5*q5nqO*lJXU0(_fKak);plg23=0.5
*lJXU0(TmpZN)/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-KqrR0-plg23-ZOoyF-TOnIe;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
X8_KU+=plg23;Usbkk=0.0;
DJ64_+=X8_KU*T9V0j-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::Jt7Gp(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

G9ynl=(TmpZN-Usbkk)/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=Usbkk*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN
)/q5nqO;
svvMZ=qXUgQ-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::nq0A5(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::vXbkP(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::EUe9e(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU>=-qXUgQ);}


bool BkjIW::fRGr5(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double bRoo6=0.0
,GFN9N=0.0
,BTPut=0.0
,U2DcK=0.0
,HySer=0.0
,Nvuq4=0.0
,G0QXU=0.0
,ARpRF=0.0
,svvMZ=0.0
,D6cDH=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
bRoo6=GFN9N=BTPut=HySer=TmpZN/q5nqO;Nvuq4=G0QXU=-0.5*lJXU0(TmpZN)/q5nqO;ARpRF=
D6cDH=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-Nvuq4-G0QXU-ARpRF-D6cDH;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*bRoo6-q5nqO*_NEO8(bRoo6)/6.0;X8_KU+=Nvuq4;Usbkk=-TmpZN;
DJ64_+=X8_KU*GFN9N+0.5*Usbkk*lJXU0(GFN9N)+q5nqO*_NEO8(GFN9N)/6.0;
X8_KU+=G0QXU;Usbkk=0.0;
DJ64_+=X8_KU*BTPut+q5nqO*_NEO8(BTPut)/6.0;X8_KU+=ARpRF;Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*HySer+0.5*Usbkk*lJXU0(HySer)-q5nqO*_NEO8(HySer)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::YP_Hn(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){
double T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,_fKak=0.0
,XtBZ5=0.0
,Y14Px=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,KqrR0=0.0
,qkwiy=0.0
,plg23=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=zFb7J=_fKak=Y14Px=TmpZN/q5nqO;ZOoyF=TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;KqrR0=
plg23=0.5*lJXU0(TmpZN)/q5nqO;
LfMmF=-qXUgQ-X8_KU-ZOoyF-TOnIe;bYilq=LfMmF/(-TmpZN);
qkwiy=_DBry-(-qXUgQ)-KqrR0-plg23;XtBZ5=qkwiy/TmpZN;

DJ64_+=X8_KU*T9V0j-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
X8_KU=-qXUgQ;Usbkk=0.0;

DJ64_+=X8_KU*_fKak+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;Usbkk=TmpZN;
DJ64_+=X8_KU*XtBZ5+0.5*Usbkk*lJXU0(XtBZ5);
X8_KU+=qkwiy;Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::QNJM_(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

X8_KU=-X8_KU;
jTaOv=mdAxL(q5nqO*(qXUgQ-X8_KU));
X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time-q5nqO*_NEO8(Time)/6.0;X8_KU+=-0.5*q5nqO*
lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;X8_KU=-qXUgQ;Usbkk
=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::M5Wiu(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,jTaOv=0.0;
Time=Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::B4WzH(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&vyuDp,&sypVN,&aXdEM,OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,
Dk1wk,qPN_6,q5nqO));}


bool BkjIW::uFpyM(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){
return(EUe9e(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::qudKY(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,kleeB=0.0
,DvG2D=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
X8_KU=-X8_KU;RfxYz=-RfxYz;DvG2D=-DvG2D;kxtWz=-kxtWz;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU-DvG2D-kxtWz));
X8_KU=-X8_KU;RfxYz=-RfxYz;DvG2D=-DvG2D;kxtWz=-kxtWz;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;X8_KU+=Usbkk*Time+
0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
DJ64_+=X8_KU*G9ynl+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::E_xXQ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
X8_KU=-qXUgQ;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU>=_DBry);}


bool BkjIW::Z6FPI(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double Time=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,jTaOv=0.0;

X8_KU=-X8_KU;
jTaOv=mdAxL(q5nqO*(qXUgQ-X8_KU));
X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;X8_KU=-qXUgQ;Usbkk
=0.0;

jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::pLzTb(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(qudKY(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::AI4hv(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,jTaOv=0.0;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(_DBry-X8_KU))/2.0);
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::FLSEZ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){


double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU<=qXUgQ);}


bool BkjIW::JY88s(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double Time=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry,jTaOv=0.0;
Time=(TmpZN-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

RfxYz=-RfxYz;X8_KU=-X8_KU;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
RfxYz=-RfxYz;X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::IDc_5(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double Time=0.0,jTaOv=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;

jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(qXUgQ-X8_KU))/2.0);
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

RfxYz=-RfxYz;X8_KU=-X8_KU;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
RfxYz=-RfxYz;X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/
6.0;return(DJ64_<=qPN_6);}


bool BkjIW::xhmNB(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){return(M5Wiu(OFgA6,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::kP90X(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::vsWAi(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry,jTaOv=0.0;
Time=Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

X8_KU=-X8_KU;RfxYz=-RfxYz;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
jTaOv=-jTaOv;X8_KU=-X8_KU;RfxYz=-RfxYz;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;return(DJ64_<=
qPN_6);}


bool BkjIW::pbAzH(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::gbgIe(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){
return(FLSEZ(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::yBX1L(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,kleeB=0.0
,DvG2D=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(_DBry-X8_KU-DvG2D-kxtWz))/2.0);
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::xOzA2(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);

DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::SpAka(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
X8_KU=qXUgQ;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::UBUKL(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(yBX1L(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::OJ8LR(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){

double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(qXUgQ-X8_KU))/(0x1d65+318-0x1ea1));
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::UxUWf(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){
return(EUe9e(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::i5puw(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,kleeB=0.0
,DvG2D=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
X8_KU+=kxtWz;Usbkk=0.0;
jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+q5nqO*_NEO8(Time)/6.0;X8_KU+=0.5*q5nqO*lJXU0(
Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::JgFHZ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
X8_KU=-qXUgQ;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU>=_DBry);}


bool BkjIW::ARMKT(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=-qXUgQ-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
X8_KU=-qXUgQ;Usbkk=0.0;

jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+q5nqO*_NEO8(Time)/6.0;X8_KU+=0.5*q5nqO*lJXU0(
Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::wmYKP(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
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
DJ64_+=X8_KU*T9V0j-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
X8_KU+=TOnIe;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::f1kYo(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6);}


bool BkjIW::Rofo0(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){
return(FLSEZ(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}







bool BkjIW::phoRj(const double&OFgA6){return(NrRvN(OFgA6));}


bool BkjIW::M4RBQ(const double&OFgA6,const double&TmpZN){
return(HNEb0(OFgA6,TmpZN));}


bool BkjIW::D8EcB(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){
return(N4I01(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::gupmx(const double&qI8hj,const double&qXUgQ){
return(LePhM(qI8hj,qXUgQ));}


bool BkjIW::WNZTT(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(ZIX9f(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::DNlaZ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::xx6M6(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){

return(w49_J(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::gMc6C(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(NpVpV(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::r6XDq(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(aBNZo(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::osP3c(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return((ErhpP(X8_KU)==
ErhpP(_DBry)));}


bool BkjIW::LOF0s(const double&OFgA6,const double&qI8hj,const double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU<
(0x14cc+3316-0x21c0));}


bool BkjIW::Fia93(const double&OFgA6){
return(NrRvN(OFgA6));}


bool BkjIW::YH02p(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&qXUgQ,const double&q5nqO){
return(Rj2f6(OFgA6,qI8hj,_DBry,qXUgQ,q5nqO));}


bool BkjIW::nfSyO(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){

return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::LQdf4(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=(TmpZN-Usbkk)/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=Usbkk*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN
)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_<=qPN_6+nPZu3+voa3f*fabs(Dk1wk-qPN_6));}


bool BkjIW::JqI3z(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){

double Time=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,jTaOv=0.0;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(_DBry-X8_KU))/2.0);
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
return(DJ64_<=qPN_6+nPZu3+voa3f*fabs(Dk1wk-qPN_6));}


bool BkjIW::vJfOq(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){

double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN+Usbkk)/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU<=_DBry);}


bool BkjIW::azeLN(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){

double Time=0.0,jTaOv=0.0,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;
Usbkk=-Usbkk;X8_KU=-X8_KU;RfxYz=-RfxYz;
jTaOv=mdAxL((lJXU0(Usbkk)+(RfxYz-X8_KU)*2.0*q5nqO)/2.0);
Usbkk=-Usbkk;X8_KU=-X8_KU;RfxYz=-RfxYz;jTaOv=-jTaOv;
Time=(Usbkk-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/
6.0;return(DJ64_>=qPN_6+nPZu3+voa3f*fabs(Dk1wk-qPN_6));}


bool BkjIW::rvxI4(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=(TmpZN+Usbkk)/q5nqO;DvG2D=Usbkk*G9ynl-0.5*q5nqO*lJXU0(G9ynl);
kleeB=TmpZN/q5nqO;kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6+nPZu3+voa3f*fabs(Dk1wk-qPN_6));}


bool BkjIW::xZ4vy(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU>_DBry);
}







bool BkjIW::IKdB7(const double&OFgA6){return(NrRvN(OFgA6));}


bool BkjIW::lLouV(const double&OFgA6,const double&TmpZN){
return(HNEb0(OFgA6,TmpZN));}


bool BkjIW::oEW8q(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){
return(N4I01(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::ha1rK(const double&qI8hj,const double&qXUgQ){
return(LePhM(qI8hj,qXUgQ));}


bool BkjIW::HmgEe(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(ZIX9f(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::WATNG(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::TZEmh(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){

return(w49_J(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::aDK2j(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(NpVpV(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::HMG83(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(aBNZo(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::QrVfm(const double&OFgA6,const double&qI8hj,const double&q5nqO){
return(LOF0s(OFgA6,qI8hj,q5nqO));}


bool BkjIW::DTxjS(const double&OFgA6){
return(NrRvN(OFgA6));}


bool BkjIW::MHeC4(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&qXUgQ,const double&q5nqO){
return(Rj2f6(OFgA6,qI8hj,_DBry,qXUgQ,q5nqO));}


bool BkjIW::reAoa(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
return(nq0A5(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::rLEBO(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(vXbkP(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::D1eMf(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&q5nqO){
double Time=0.0,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN+Usbkk)/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;return(X8_KU
>=(0xdc5+5069-0x2192));}


bool BkjIW::fPDHv(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(fRGr5(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::zjDQB(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&pf4Ta,&feOXP,&FvvwK,-OFgA6,TmpZN,-qI8hj,qXUgQ,-_DBry
,-Dk1wk,-qPN_6,q5nqO));}


bool BkjIW::Yn1YW(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=(TmpZN+Usbkk)/q5nqO;DvG2D=Usbkk*G9ynl-0.5*q5nqO*lJXU0(G9ynl);
kleeB=TmpZN/q5nqO;kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=(0x812+3339-0x151d)-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
X8_KU=0.0;Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-(0xc9c+3950-0x1c0a)-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::DbXcG(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&bZTw5,&cXyBU,&wEEQc,-OFgA6,TmpZN,-qI8hj,qXUgQ,-_DBry
,-Dk1wk,-qPN_6,q5nqO));}


bool BkjIW::pcbJp(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Usbkk=-Usbkk;X8_KU=-X8_KU;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*((0x150f+3038-0x20ed)-X8_KU))/2.0);
Usbkk=-Usbkk;X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv+Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/
6.0;X8_KU=0.0;Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::_nJPh(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zjDQB(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::bEjgX(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(M5Wiu(OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::Pd0F3(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&q5nqO){
return(D1eMf(OFgA6,TmpZN,qI8hj,q5nqO));}


bool BkjIW::f54wo(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(fRGr5(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::ofJY_(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(qudKY(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::Rcvc0(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zTmVA(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::KX0xG(const double&TmpZN,const double&_DBry,const double&q5nqO){
double _fKak=0.0
,Y14Px=0.0
,KqrR0=0.0
,plg23=0.0
,VpLJr=0.0;

_fKak=Y14Px=TmpZN/q5nqO;KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;VpLJr=_DBry-KqrR0-
plg23;return(VpLJr>(0x15bc+2128-0x1e0c));}


bool BkjIW::HlN6g(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){return(
pcbJp(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::G1bS6(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zTmVA(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::DU_SM(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zjDQB(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::qadHr(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

Usbkk=-Usbkk;X8_KU=-X8_KU;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*((0x720+5752-0x1d98)-X8_KU))/2.0);
Usbkk=-Usbkk;X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv+Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/
6.0;X8_KU=0.0;Usbkk=0.0;

jTaOv=mdAxL((_DBry-(0x6ca+6758-0x2130))*q5nqO);
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::zTmVA(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&Pudeu,&njmTh,&GKo70,-OFgA6,TmpZN,-qI8hj,qXUgQ,-_DBry
,-Dk1wk,-qPN_6,q5nqO));}


bool BkjIW::rXD3g(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&oDY5u,&yT7D7,&oWl1f,OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,
Dk1wk,qPN_6,q5nqO));}


bool BkjIW::yFzZ_(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){

double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
Time=(TmpZN+Usbkk)/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU>_DBry);}


bool BkjIW::XcTWE(const double&TmpZN,const double&_DBry,const double&q5nqO){

double KqrR0=0.0
,plg23=0.0;

KqrR0=plg23=0.5*lJXU0(TmpZN)/q5nqO;return((_DBry-KqrR0-plg23)>=
(0x136+8500-0x226a));}


bool BkjIW::O8GTr(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double T9V0j=0.0
,bYilq=0.0
,zFb7J=0.0
,_fKak=0.0
,Y14Px=0.0
,ZOoyF=0.0
,LfMmF=0.0
,TOnIe=0.0
,KqrR0=0.0
,plg23=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
T9V0j=(TmpZN+Usbkk)/q5nqO;ZOoyF=Usbkk*T9V0j-0.5*q5nqO*lJXU0(T9V0j);
zFb7J=_fKak=Y14Px=TmpZN/q5nqO;TOnIe=-0.5*lJXU0(TmpZN)/q5nqO;KqrR0=plg23=0.5*
lJXU0(TmpZN)/q5nqO;
LfMmF=_DBry-X8_KU-ZOoyF-TOnIe-KqrR0-plg23;bYilq=LfMmF/(-TmpZN);
DJ64_+=X8_KU*T9V0j+0.5*Usbkk*lJXU0(T9V0j)-q5nqO*_NEO8(T9V0j)/6.0;X8_KU+=ZOoyF;
Usbkk=-TmpZN;
DJ64_+=X8_KU*bYilq+0.5*Usbkk*lJXU0(bYilq);
X8_KU+=LfMmF;Usbkk=-TmpZN;
DJ64_+=X8_KU*zFb7J+0.5*Usbkk*lJXU0(zFb7J)+q5nqO*_NEO8(zFb7J)/6.0;
X8_KU+=TOnIe;Usbkk=0.0;
DJ64_+=X8_KU*_fKak+0.5*Usbkk*lJXU0(_fKak)+q5nqO*_NEO8(_fKak)/6.0;X8_KU+=KqrR0;
Usbkk=TmpZN;
DJ64_+=X8_KU*Y14Px+0.5*Usbkk*lJXU0(Y14Px)-q5nqO*_NEO8(Y14Px)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::Wuc8O(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(CSAeZ(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::K9Ron(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

G9ynl=(TmpZN+Usbkk)/q5nqO;DvG2D=Usbkk*G9ynl-0.5*q5nqO*lJXU0(G9ynl);
kleeB=TmpZN/q5nqO;kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=(0x16e4+3086-0x22f2)-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
X8_KU=0.0;Usbkk=0.0;

jTaOv=mdAxL((_DBry-(0x546+4961-0x18a7))*q5nqO);
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::CSAeZ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&hb_uG,&_WRKy,&uAHWQ,-OFgA6,TmpZN,-qI8hj,qXUgQ,-_DBry
,-Dk1wk,-qPN_6,q5nqO));}


bool BkjIW::WwMkt(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&q5nqO){return(D1eMf(OFgA6,TmpZN,qI8hj,q5nqO));}


bool BkjIW::MK077(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){

double Time=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN+Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

jTaOv=mdAxL((_DBry-X8_KU)*q5nqO);
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::aK8vC(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zTmVA(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::RuOq7(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){
return(xZ4vy(OFgA6,qI8hj,_DBry,q5nqO));}


bool BkjIW::V66ya(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;
Time=-Usbkk/q5nqO;X8_KU+=0.5*Usbkk*Time;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU>_DBry);}


bool BkjIW::ext3b(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=-Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=-svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::YdIoN(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,jTaOv=0.0;
Time=-Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

jTaOv=mdAxL(q5nqO*(X8_KU-_DBry));
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;return(DJ64_>=
qPN_6);}


bool BkjIW::q9uT0(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&oDY5u,&yT7D7,&oWl1f,-OFgA6,TmpZN,-qI8hj,qXUgQ,-_DBry
,-Dk1wk,-qPN_6,q5nqO));}


bool BkjIW::S4Rtd(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;
Time=-Usbkk/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU>_DBry);}


bool BkjIW::f71Aj(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
double Time=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN+Usbkk)/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;


X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU>_DBry);}


bool BkjIW::zBW3I(const double&TmpZN,const double&_DBry,const double&q5nqO){


double KqrR0=0.0;
KqrR0=lJXU0(TmpZN)/q5nqO;return((_DBry-KqrR0)>(0x6d6+7063-0x226d));}


bool BkjIW::nC8Dm(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,kleeB=0.0
,DvG2D=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*lJXU0(TmpZN)+2.0*q5nqO*(X8_KU-_DBry))/2.0);
Time=(Usbkk+jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
DJ64_+=X8_KU*G9ynl+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=+TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::TpbvR(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zTmVA(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::iKe4E(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&q5nqO){return(D1eMf(OFgA6,TmpZN,qI8hj,q5nqO));}


bool BkjIW::CLyFU(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=(TmpZN+Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=0.0;
G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_>=qPN_6);}


bool BkjIW::P89qn(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(zjDQB(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}







bool BkjIW::A1qgc(const double&OFgA6){return(NrRvN(OFgA6));}


bool BkjIW::EiHB8(const double&OFgA6,const double&TmpZN){
return(HNEb0(OFgA6,TmpZN));}


bool BkjIW::JqArP(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){
return(N4I01(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::pfsLr(const double&qI8hj,const double&qXUgQ){
return(LePhM(qI8hj,qXUgQ));}


bool BkjIW::dX18P(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(ZIX9f(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::AYbbe(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::H12gj(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){

return(w49_J(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::oqnuj(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(NpVpV(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::liWft(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(aBNZo(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::zDKxQ(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&q5nqO){
double X8_KU=qI8hj+0.5*lJXU0(OFgA6)/q5nqO;return((X8_KU<0.0)&&(_DBry>0.0));}


bool BkjIW::fkm_W(const int onYRt){return((onYRt==BkjIW::BGSZ3)||(onYRt==BkjIW::
CBvij)||(onYRt==BkjIW::Uawc_)||(onYRt==BkjIW::pVKSx)||(onYRt==BkjIW::J1ner)||(
onYRt==BkjIW::jgijf));}


bool BkjIW::lMmxR(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::myUyo(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(nq0A5(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::aRNdq(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
Time=Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_+nPZu3+voa3f*fabs(Dk1wk-qPN_6)<=qPN_6);}




bool BkjIW::Ko0ea(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,double*na1j7,double*VZ_hs){bool DohAl=false;double PylFK=0.0,jHan_=
0.0,JBucE=0.0,PXN6D=0.0,mf8Lm=kiQzO,Ihots=kiQzO;if(!(xCz9w(jgijf,OFgA6,TmpZN,
qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO))){if((na1j7!=NULL)&&(VZ_hs!=NULL)){*na1j7=
kiQzO;*VZ_hs=kiQzO;}return(false);}mf8Lm=ATAd0(&vyuDp,&sypVN,&aXdEM,&ZUHlg,Dk1wk
,qPN_6,qI8hj,qXUgQ,_DBry,OFgA6,TmpZN,q5nqO,true,mtHqu,0.0,&DohAl,&PylFK,jgijf);
if(!DohAl){Ihots=ATAd0(&vyuDp,&sypVN,&aXdEM,&ZUHlg,Dk1wk,qPN_6,qI8hj,qXUgQ,_DBry
,OFgA6,TmpZN,q5nqO,false,mtHqu,0.0,&DohAl,&jHan_,jgijf);}if(!DohAl){JBucE=vyuDp(
0.5*(PylFK+jHan_),OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);PXN6D=vyuDp(0.5*
PylFK,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if((JBucE>=nPZu3+voa3f*fabs(
Dk1wk-qPN_6))||(PXN6D>=nPZu3+voa3f*fabs(Dk1wk-qPN_6))){if((na1j7!=NULL)&&(VZ_hs
!=NULL)){*na1j7=mf8Lm;if(vyuDp(0.5*jHan_,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
TmpZN)<0.0){*VZ_hs=Ihots;}else{*VZ_hs=kiQzO;}}return(true);}else{if((na1j7!=NULL
)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(false);}}else{if((na1j7!=
NULL)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(false);}}


bool BkjIW::KfWVv(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){
double Time=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,jTaOv=0.0;
Time=Usbkk/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=0.0;

jTaOv=mdAxL(q5nqO*(_DBry-X8_KU));
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;X8_KU=_DBry;Usbkk=
0.0;return(DJ64_+nPZu3+voa3f*fabs(Dk1wk-qPN_6)<=qPN_6);}




bool BkjIW::koU5W(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,double*na1j7,double*VZ_hs){bool DohAl=false,e4oF3=false;double 
PylFK=0.0,jHan_=0.0,JBucE=0.0,PXN6D=0.0,UgHnQ=0.0,BV8rC=0.0,qkEVi=0.0,b8XRJ=0.0,
XtRdC=0.0,mf8Lm=kiQzO,Ihots=kiQzO;if(!(xCz9w(jgijf,OFgA6,TmpZN,qI8hj,qXUgQ,_DBry
,Dk1wk,qPN_6,q5nqO))){if((na1j7!=NULL)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO
;}return(false);}mf8Lm=ATAd0(&vyuDp,&sypVN,&aXdEM,&ZUHlg,Dk1wk,qPN_6,qI8hj,qXUgQ
,_DBry,OFgA6,TmpZN,q5nqO,true,mtHqu,0.0,&DohAl,&PylFK,jgijf);if(DohAl){if((na1j7
!=NULL)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(false);}
e4oF3=ukz43(OFgA6,TmpZN,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,&XtRdC);if(e4oF3){

ATAd0(&oDY5u,&yT7D7,&oWl1f,&O3Ygw,Dk1wk,qPN_6,qI8hj,qXUgQ,_DBry,OFgA6,TmpZN,
q5nqO,true,mtHqu,0.0,&DohAl,&jHan_,J1ner);BV8rC=0.5*(PylFK+jHan_);if(BV8rC>XtRdC
){JBucE=vyuDp(BV8rC,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}else{JBucE=oDY5u
(BV8rC,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}if(JBucE<0.0){if((na1j7!=NULL
)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(false);}}
if(e4oF3){Ihots=ATAd0(&vyuDp,&sypVN,&aXdEM,&ZUHlg,Dk1wk,qPN_6,qI8hj,qXUgQ,_DBry,
OFgA6,TmpZN,q5nqO,false,mtHqu,0.0,&DohAl,&jHan_,jgijf);}else{Ihots=ATAd0(&oDY5u,
&yT7D7,&oWl1f,&O3Ygw,Dk1wk,qPN_6,qI8hj,qXUgQ,_DBry,OFgA6,TmpZN,q5nqO,true,mtHqu,
0.0,&DohAl,&jHan_,J1ner);}if(!DohAl){BV8rC=0.5*(PylFK+jHan_);qkEVi=0.5*PylFK;if(
BV8rC>XtRdC){JBucE=vyuDp(BV8rC,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}else{
JBucE=oDY5u(BV8rC,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}if(qkEVi>XtRdC){
PXN6D=vyuDp(qkEVi,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}else{PXN6D=oDY5u(
qkEVi,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}if((JBucE>=nPZu3+voa3f*fabs(
Dk1wk-qPN_6))||(PXN6D>=nPZu3+voa3f*fabs(Dk1wk-qPN_6))){if((na1j7!=NULL)&&(VZ_hs
!=NULL)){*na1j7=mf8Lm;b8XRJ=0.5*jHan_;if(b8XRJ>XtRdC){UgHnQ=vyuDp(b8XRJ,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);}else{UgHnQ=oDY5u(b8XRJ,OFgA6,qI8hj,_DBry,
Dk1wk,qPN_6,q5nqO,TmpZN);}if(UgHnQ<0.0){*VZ_hs=Ihots;}else{*VZ_hs=kiQzO;}}return
(true);}else{if((na1j7!=NULL)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(
false);}}else{if((na1j7!=NULL)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return
(false);}}


bool BkjIW::CA9n6(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(rXD3g(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::JTiVM(const double&OFgA6,const double&qI8hj,const double&_DBry,const
 double&Dk1wk,const double&qPN_6,const double&q5nqO){return(KfWVv(OFgA6,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::ukz43(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,double*
CYEL6){double NRU6o=Dk1wk,JYfOa=qI8hj,Time=0.0;*CYEL6=mdAxL(0.5*(lJXU0(OFgA6)+
2.0*lJXU0(TmpZN)+2.0*q5nqO*(qI8hj-_DBry)));Time=(OFgA6-(*CYEL6))/q5nqO;if(Time<
0.0){Time=0.0;}NRU6o+=JYfOa*Time+0.5*OFgA6*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
JYfOa+=OFgA6*Time-0.5*q5nqO*lJXU0(Time);Time=(TmpZN-(*CYEL6))/q5nqO;if(Time<0.0)
{Time=0.0;}NRU6o+=JYfOa*Time+0.5*(*CYEL6)*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;
JYfOa+=(*CYEL6)*Time+0.5*q5nqO*lJXU0(Time);Time=TmpZN/q5nqO;NRU6o+=JYfOa*Time+
0.5*TmpZN*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;return(NRU6o<=qPN_6);}




bool BkjIW::HqfuH(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,double*na1j7,double*VZ_hs){bool DohAl=false;double PylFK=0.0,jHan_=
0.0,JBucE=0.0,PXN6D=0.0,mf8Lm=kiQzO,Ihots=kiQzO;if(!(xCz9w(J1ner,OFgA6,TmpZN,
qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO))){if((na1j7!=NULL)&&(VZ_hs!=NULL)){*na1j7=
kiQzO;*VZ_hs=kiQzO;}return(false);}mf8Lm=ATAd0(&oDY5u,&yT7D7,&oWl1f,&O3Ygw,Dk1wk
,qPN_6,qI8hj,qXUgQ,_DBry,OFgA6,TmpZN,q5nqO,true,mtHqu,0.0,&DohAl,&PylFK,J1ner);
if(!DohAl){Ihots=ATAd0(&oDY5u,&yT7D7,&oWl1f,&O3Ygw,Dk1wk,qPN_6,qI8hj,qXUgQ,_DBry
,OFgA6,TmpZN,q5nqO,false,mtHqu,0.0,&DohAl,&jHan_,J1ner);}if(!DohAl){JBucE=oDY5u(
0.5*(PylFK+jHan_),OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);PXN6D=oDY5u(0.5*
PylFK,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if((JBucE>=nPZu3+voa3f*fabs(
Dk1wk-qPN_6))||(PXN6D>=nPZu3+voa3f*fabs(Dk1wk-qPN_6))){if((na1j7!=NULL)&&(VZ_hs
!=NULL)){*na1j7=mf8Lm;if(oDY5u(0.5*jHan_,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
TmpZN)<0.0){*VZ_hs=Ihots;}else{*VZ_hs=kiQzO;}}return(true);}else{if((na1j7!=NULL
)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(false);}}else{if((na1j7!=
NULL)&&(VZ_hs!=NULL)){*na1j7=kiQzO;*VZ_hs=kiQzO;}return(false);}}







bool BkjIW::GqEj0(const double&OFgA6){return(NrRvN(OFgA6));}


bool BkjIW::E6Wp8(const double&OFgA6,const double&TmpZN){
return(HNEb0(OFgA6,TmpZN));}


bool BkjIW::egTDv(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){
return(N4I01(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::z9H5L(const double&qI8hj,const double&qXUgQ){
return(LePhM(qI8hj,qXUgQ));}


bool BkjIW::VtDVb(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(ZIX9f(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::w6Jco(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){return(DqcIa(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::nsXGY(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&q5nqO){

return(w49_J(OFgA6,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::U99hN(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(NpVpV(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::wd8FG(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){

return(aBNZo(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::_KD0C(const double&_DBry){return(_DBry<=0.0);}


bool BkjIW::W5mPE(const double&OFgA6){

return(NrRvN(OFgA6));}


bool BkjIW::Cj4rr(const int&q8EsQ,const int&xbqTd){return((q8EsQ==BkjIW::jgijf)
||(q8EsQ==BkjIW::J1ner)||(xbqTd==BkjIW::jgijf)||(xbqTd==BkjIW::J1ner));}


bool BkjIW::WQDNb(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO){
return(FLSEZ(OFgA6,TmpZN,qI8hj,qXUgQ,q5nqO));}


bool BkjIW::Q6AeJ(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO){return(MfT0m(OFgA6,TmpZN,
qI8hj,qXUgQ,_DBry,q5nqO));}


bool BkjIW::cqSfx(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){
return(zcCeA(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::qJ6kf(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&hb_uG,&_WRKy,&uAHWQ,OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,
Dk1wk,qPN_6,q5nqO));}


bool BkjIW::JE0tb(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){
return(Jt7Gp(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::sGV0P(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&bZTw5,&cXyBU,&wEEQc,OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,
Dk1wk,qPN_6,q5nqO));}


bool BkjIW::zupZF(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&_DBry,const double&q5nqO){
return(pbAzH(OFgA6,TmpZN,qI8hj,_DBry,q5nqO));}


bool BkjIW::xI_zT(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){return(G9bu7(&pf4Ta,&feOXP,&FvvwK,OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,
Dk1wk,qPN_6,q5nqO));}


bool BkjIW::LJH90(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO){
return(SpAka(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,q5nqO));}


bool BkjIW::WpvuW(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO){
return(IDc_5(OFgA6,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}


bool BkjIW::rXvrw(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO){
return(OJ8LR(OFgA6,TmpZN,qI8hj,qXUgQ,_DBry,Dk1wk,qPN_6,q5nqO));}







bool BkjIW::bj6T0(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO,const bool&nHRfi){

double Time=0.0
,X8_KU=qI8hj,Usbkk=OFgA6;
X8_KU=qXUgQ;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;


X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU+FypFy*((nHRfi)?(1.0):(-1.0)
)+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(X8_KU)<=_DBry);}


bool BkjIW::rmbbS(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,const bool&nHRfi){

double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry;

G9ynl=(TmpZN-Usbkk)/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=Usbkk*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN
)/q5nqO;
svvMZ=qXUgQ-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

X8_KU=-X8_KU;RfxYz=-RfxYz;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
X8_KU=-X8_KU;RfxYz=-RfxYz;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;


DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/6.0;return(DJ64_+FypFy
*((nHRfi)?(1.0):(-1.0))+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(DJ64_-qPN_6)<=qPN_6);}


bool BkjIW::h_JPE(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,const bool&nHRfi){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;

G9ynl=(TmpZN-Usbkk)/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=Usbkk*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN
)/q5nqO;
svvMZ=qXUgQ-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
DJ64_+=X8_KU*G9ynl+0.5*Usbkk*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;
Usbkk=TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_+FypFy*((nHRfi)?(1.0):(-1.0))+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(
DJ64_-qPN_6)<=qPN_6);}


bool BkjIW::EPMMP(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&q5nqO,const bool&nHRfi){


double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
Time=(TmpZN-Usbkk)/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);return(X8_KU+FypFy*((
nHRfi)?(1.0):(-1.0))+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(X8_KU)<=qXUgQ);}


bool BkjIW::jHbl2(const double&OFgA6,const double&qI8hj,const double&qXUgQ,const
 double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
bool&nHRfi){

double DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6,RfxYz=_DBry,Time=0.0,jTaOv=0.0;

jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(qXUgQ-X8_KU))/2.0);
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

RfxYz=-RfxYz;X8_KU=-X8_KU;
jTaOv=mdAxL(q5nqO*(RfxYz-X8_KU));
RfxYz=-RfxYz;X8_KU=-X8_KU;jTaOv=-jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/
6.0;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=(-jTaOv)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(Time)/
6.0;return(DJ64_+FypFy*((nHRfi)?(1.0):(-1.0))+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(
DJ64_-qPN_6)<=qPN_6);}


bool BkjIW::bW6_1(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&q5nqO,const bool&nHRfi){
double X8_KU=qI8hj,Usbkk=OFgA6,Time=0.0;
X8_KU=qXUgQ;Usbkk=0.0;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time-0.5*q5nqO*lJXU0(Time);Usbkk=-TmpZN;
Time=TmpZN/q5nqO;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);return(X8_KU+FypFy*((
nHRfi)?(1.0):(-1.0))+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(X8_KU)<=_DBry);}


bool BkjIW::KeXUw(const double&OFgA6,const double&TmpZN,const double&qI8hj,const
 double&qXUgQ,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,const bool&nHRfi){

double Time=0.0
,G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,jTaOv=0.0
,DJ64_=Dk1wk,X8_KU=qI8hj,Usbkk=OFgA6;
jTaOv=mdAxL((lJXU0(Usbkk)+2.0*q5nqO*(qXUgQ-X8_KU))/(0xad8+4980-0x1e4a));
Time=(jTaOv-Usbkk)/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)+q5nqO*_NEO8(
Time)/6.0;X8_KU+=Usbkk*Time+0.5*q5nqO*lJXU0(Time);Usbkk=jTaOv;
Time=jTaOv/q5nqO;DJ64_+=X8_KU*Time+0.5*Usbkk*lJXU0(Time)-q5nqO*_NEO8(Time)/6.0;
X8_KU=qXUgQ;Usbkk=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=_DBry-X8_KU-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
DJ64_+=X8_KU*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;X8_KU+=DvG2D;Usbkk=-TmpZN;
DJ64_+=X8_KU*U2DcK+0.5*Usbkk*lJXU0(U2DcK);
X8_KU+=svvMZ;Usbkk=-TmpZN;
DJ64_+=X8_KU*kleeB+0.5*Usbkk*lJXU0(kleeB)+q5nqO*_NEO8(kleeB)/6.0;
return(DJ64_+FypFy*((nHRfi)?(1.0):(-1.0))+XQ_Gp*((nHRfi)?(1.0):(-1.0))*fabs(
DJ64_-qPN_6)<=qPN_6);}
