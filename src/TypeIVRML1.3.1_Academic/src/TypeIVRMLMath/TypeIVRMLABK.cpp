
































#include <TypeIVRMLABK.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLStep1Profiles.h>
#include <TypeIVRMLStep1RootFunctions.h>
#include <math.h>
#include <stdlib.h>


double BkjIW::xa5W3(double(*lpd42)(const double&NwHKt,const double&OFgA6,const 
double&qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,const double&TmpZN),const double&fab0A,const double&M0ljj,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO){
#ifdef ndOQa
bool ALQQv=true;
#endif    
int i=(0xbda+3778-0x1a9c);double tcdxT=0.0,GD6ir=0.0,t3CJc=0.0,rZHMU=0.0,SEtWr=
0.0,dw944=0.0
#ifdef ndOQa	            
,osbYq=0.0,CcGZ8=0.0,B8jft=0.0
#endif			
,wiRhC=0.0,ipU4Y=0.0;tcdxT=fab0A;GD6ir=M0ljj;rZHMU=(*lpd42)(tcdxT,OFgA6,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(rZHMU==0.0){return(tcdxT);}SEtWr=(*lpd42)(
GD6ir,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(SEtWr==0.0){return(GD6ir);}
for(i=(0x6dd+43-0x708);i<rBl_H;i++){


if((wiRhC==tcdxT)&&(ipU4Y==GD6ir)){return(0.5*(tcdxT+GD6ir));}wiRhC=tcdxT;ipU4Y=
GD6ir;
#ifdef ndOQa				




B8jft=(GD6ir-tcdxT);if(B8jft==0.0){B8jft=CshoR;}osbYq=(SEtWr-rZHMU)/B8jft;B8jft=
osbYq;if(B8jft==0.0){if(ALQQv){B8jft=CshoR;}else{B8jft=B67U4;}ALQQv=!ALQQv;}
t3CJc=GD6ir-SEtWr/B8jft;dw944=(*lpd42)(t3CJc,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO
,TmpZN);if(dw944==0.0){return(t3CJc);}if((dw944*SEtWr)<0.0){tcdxT=GD6ir;GD6ir=
t3CJc;rZHMU=SEtWr;SEtWr=dw944;}else{B8jft=SEtWr;if(B8jft==0.0){B8jft=CshoR;}
CcGZ8=1.0-dw944/B8jft;if(CcGZ8<=0.0){CcGZ8=0.5;}GD6ir=t3CJc;rZHMU=CcGZ8*rZHMU;
SEtWr=dw944;}



#endif		
if(fabs(GD6ir-tcdxT)<=AvZbi){return(((fabs(SEtWr))<(fabs(rZHMU)))?(GD6ir):(tcdxT
));}t3CJc=0.5*(tcdxT+GD6ir);dw944=(*lpd42)(t3CJc,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,
q5nqO,TmpZN);if(dw944==0.0){return(t3CJc);}if(ErhpP(dw944)==ErhpP(SEtWr)){GD6ir=
t3CJc;SEtWr=dw944;}else{tcdxT=t3CJc;rZHMU=dw944;}}return(((fabs(SEtWr))<(fabs(
rZHMU)))?(GD6ir):(tcdxT));}

double BkjIW::ATAd0(double(*YjgrU)(const double&NwHKt,const double&OFgA6,const 
double&qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,const double&TmpZN),double(*Ghz_l)(const double&NwHKt,const double&
OFgA6,const double&qI8hj,const double&_DBry,const double&Dk1wk,const double&
qPN_6,const double&q5nqO,const double&TmpZN),void(*BFw4R)(const double&TmpZN,
const double&OFgA6,const double&qI8hj,const double&_DBry,const double&q5nqO,
const double&qXUgQ,double*fab0A,double*M0ljj),double(*iOeT9)(const double&NwHKt,
const double&OFgA6,const double&qI8hj,const double&_DBry,const double&Dk1wk,
const double&qPN_6,const double&q5nqO,const double&TmpZN),const double&Dk1wk,
const double&qPN_6,const double&qI8hj,const double&qXUgQ,const double&_DBry,
const double&OFgA6,const double&TmpZN,const double&q5nqO,const bool&pQgx4,const 
int&c8qpF,const double&hMrn5,bool*DohAl,double*KSbh2,const int ZEkd1){bool kHxgd
=false,UYFli=false,klKIC=false,b75sv=false,JiBNR=false,BuvFk=false,Hiv6b=false;
int i=(0x1e3c+1611-0x2487);double ufSqb=0.0,sE5zF=0.0,AFx2U=0.0,ojJMv=0.0,canvx=
0.0,iGC7p=0.0,WUnmb=0.0,OppWT=0.0,Ypclh=0.0,Tpi9y=0.0,hLQdn=0.0,UppOg=0.0,u3ZCq=
0.0,N3uJA=0.0;if(ZEkd1==Kv2Oe){(*BFw4R)(TmpZN,OFgA6,qI8hj,_DBry,q5nqO,qXUgQ,&
ufSqb,&sE5zF);






if((c8qpF==UEWvk)&&(pQgx4==false)){Hiv6b=YMRh6(YjgrU,Ghz_l,iOeT9,Dk1wk,qPN_6,
qI8hj,_DBry,OFgA6,TmpZN,q5nqO,hMrn5,&ufSqb,&sE5zF);}}else{YYAv3(ZEkd1,Dk1wk,
qPN_6,qI8hj,qXUgQ,_DBry,OFgA6,TmpZN,q5nqO,pQgx4,&ufSqb,&sE5zF);}i=
(0xd15+2971-0x18b0);kHxgd=false;UYFli=true;for(i=(0x19f2+445-0x1baf);i<
(0x126f+4459-0x23d2);i++){iGC7p=(*YjgrU)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,
q5nqO,TmpZN);WUnmb=(*YjgrU)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(
ErhpP(iGC7p)==ErhpP(WUnmb)){if(!BuvFk){BuvFk=true;Ypclh=(*Ghz_l)(ufSqb,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);Tpi9y=(*Ghz_l)(sE5zF,OFgA6,qI8hj,_DBry,
Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(Ypclh)!=ErhpP(Tpi9y)){canvx=xa5W3(Ghz_l,ufSqb,
sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);OppWT=(*YjgrU)(canvx,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(iGC7p)!=ErhpP(OppWT)){kHxgd=true;
if(((pQgx4)&&(fabs(sE5zF)>fabs(ufSqb)))||((!pQgx4)&&(fabs(sE5zF)<fabs(ufSqb)))){
ufSqb=canvx;}else{sE5zF=canvx;}}else{continue;}}else{continue;}}else{BuvFk=false
;if(b75sv){JiBNR=true;b75sv=false;}if(klKIC){ufSqb-=v1pqM;sE5zF+=v1pqM;klKIC=
false;b75sv=true;}if(UYFli){KT8lW(&ufSqb,&sE5zF);if((ufSqb+2.0*v1pqM)<sE5zF){
ufSqb+=v1pqM;sE5zF-=v1pqM;klKIC=true;}else{b75sv=true;}UYFli=false;}}}else{kHxgd
=true;if(UYFli){AFx2U=ufSqb;ojJMv=sE5zF;KT8lW(&ufSqb,&sE5zF);hLQdn=iGC7p;UppOg=
WUnmb;iGC7p=(*YjgrU)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);WUnmb=(*
YjgrU)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(iGC7p)!=ErhpP(
WUnmb)){ufSqb=AFx2U;sE5zF=ojJMv;}else{if(((ErhpP(iGC7p)!=ErhpP(hLQdn))&&(ErhpP(
WUnmb)!=ErhpP(UppOg)))||(fabs(iGC7p)>J6tID)||(fabs(WUnmb)>J6tID)){ufSqb=AFx2U;
sE5zF=ojJMv;}else{Ypclh=(*Ghz_l)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN
);Tpi9y=(*Ghz_l)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(Ypclh
)!=ErhpP(Tpi9y)){canvx=xa5W3(Ghz_l,ufSqb,sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,
TmpZN,q5nqO);OppWT=(*YjgrU)(canvx,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(
ErhpP(iGC7p)!=ErhpP(OppWT)){if(((pQgx4)&&(fabs(sE5zF)>fabs(ufSqb)))||((!pQgx4)&&
(fabs(sE5zF)<fabs(ufSqb)))){ufSqb=canvx;}else{sE5zF=canvx;}}else{ufSqb=AFx2U;
sE5zF=ojJMv;}}else{ufSqb=AFx2U;sE5zF=ojJMv;}}}}}if((kHxgd)||(JiBNR)){break;}}if(
!kHxgd){if(fabs(WUnmb)<fabs(iGC7p)){canvx=sE5zF;}else{canvx=ufSqb;}}else{canvx=
xa5W3(YjgrU,ufSqb,sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);}u3ZCq=(*
iOeT9)(canvx,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);N3uJA=(*YjgrU)(canvx,
OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if((fabs(N3uJA)>(fabs(FJ3aS*(Dk1wk-
qPN_6))+GNaE4+nVxxa(u3ZCq)))&&(!Hiv6b)){*DohAl=true;u3ZCq=0.0;if(KSbh2!=NULL){*
KSbh2=0.0;}}else{*DohAl=false;if(KSbh2!=NULL){*KSbh2=canvx;}}return(u3ZCq);}

double BkjIW::rL86M(void(*BFw4R)(const double&TmpZN,const double&Fayok,const 
double&OFgA6,const double&qI8hj,const double&_DBry,const double&Dk1wk,const 
double&qPN_6,const double&q5nqO,double*fab0A,double*M0ljj),double(*YjgrU)(const 
double&NwHKt,const double&Fayok,const double&OFgA6,const double&qI8hj,const 
double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&TmpZN),const double&Dk1wk,const double&qPN_6,const double&qI8hj,const 
double&_DBry,const double&OFgA6,const double&TmpZN,const double&q5nqO,const 
double&Fayok){bool kHxgd=false,UYFli=false,klKIC=false,ALQQv=true,OQFRU=true,
aa2xp=true;int i=(0x62c+7339-0x22d7);double tcdxT=0.0,GD6ir=0.0,t3CJc=0.0,rZHMU=
0.0,SEtWr=0.0,dw944=0.0,osbYq=0.0,CcGZ8=0.0,wiRhC=0.0,ipU4Y=0.0,koweG=0.0,fLLvL=
0.0,V0G8O=0.0,WSzT3=0.0,PZRPg=0.0,UJ1Zw=0.0,Wf3h1=0.0,oq_C2=0.0,Lrgj9=0.0,UcHzk=
0.0,B8jft=0.0;(*BFw4R)(TmpZN,Fayok,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,&tcdxT,&
GD6ir);Wf3h1=tcdxT;oq_C2=GD6ir;i=(0xb02+6269-0x237f);kHxgd=false;UYFli=true;
klKIC=false;for(i=(0x108b+4147-0x20be);i<(0x1c08+624-0x1e6c);i++){if(OQFRU){
rZHMU=(*YjgrU)(tcdxT,Fayok,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(UYFli){
Lrgj9=rZHMU;}OQFRU=false;}if(fabs(rZHMU)<lc7YQ){if(UYFli){wiRhC=tcdxT;koweG=
rZHMU;KT8lW(&tcdxT,&GD6ir);rZHMU=(*YjgrU)(tcdxT,Fayok,OFgA6,qI8hj,_DBry,Dk1wk,
qPN_6,q5nqO,TmpZN);OQFRU=false;if(fabs(rZHMU)<lc7YQ){if(koweG<rZHMU){return(
wiRhC);}else{koweG=rZHMU;wiRhC=tcdxT;tcdxT-=v1pqM;rZHMU=(*YjgrU)(tcdxT,Fayok,
OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(fabs(rZHMU)<lc7YQ){if(koweG<rZHMU)
{return(wiRhC);}else{return(tcdxT);}}else{return(wiRhC);}}}else{return(wiRhC);}}
if(klKIC){wiRhC=tcdxT;koweG=rZHMU;tcdxT-=v1pqM;rZHMU=(*YjgrU)(tcdxT,Fayok,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(fabs(rZHMU)<lc7YQ){if(koweG<rZHMU){
return(wiRhC);}else{return(tcdxT);}}else{return(wiRhC);}}return(tcdxT);}if(aa2xp
){SEtWr=(*YjgrU)(GD6ir,Fayok,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(UYFli
){UcHzk=SEtWr;}aa2xp=false;}if(fabs(SEtWr)<lc7YQ){if(UYFli){ipU4Y=GD6ir;fLLvL=
SEtWr;KT8lW(&tcdxT,&GD6ir);SEtWr=(*YjgrU)(GD6ir,Fayok,OFgA6,qI8hj,_DBry,Dk1wk,
qPN_6,q5nqO,TmpZN);if(fabs(SEtWr)<lc7YQ){if(fLLvL<SEtWr){return(ipU4Y);}else{
fLLvL=SEtWr;ipU4Y=GD6ir;GD6ir+=v1pqM;SEtWr=(*YjgrU)(GD6ir,Fayok,OFgA6,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(fabs(SEtWr)<lc7YQ){if(fLLvL<SEtWr){return(
ipU4Y);}else{return(GD6ir);}}else{return(ipU4Y);}}}else{return(ipU4Y);}}if(klKIC
){ipU4Y=GD6ir;fLLvL=SEtWr;GD6ir+=v1pqM;SEtWr=(*YjgrU)(GD6ir,Fayok,OFgA6,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(fabs(SEtWr)<lc7YQ){if(fLLvL<SEtWr){return(
ipU4Y);}else{return(GD6ir);}}else{return(ipU4Y);}}return(GD6ir);}if(ErhpP(rZHMU)
!=ErhpP(SEtWr)){kHxgd=true;}else{if(UYFli){KT8lW(&tcdxT,&GD6ir);OQFRU=true;aa2xp
=true;if((tcdxT+2.0*v1pqM)<GD6ir){if(fabs(rZHMU)<fabs(SEtWr)){tcdxT+=v1pqM;}else
{GD6ir-=v1pqM;}}UYFli=false;klKIC=true;}else{if(klKIC){klKIC=false;}if(fabs(
rZHMU)<fabs(SEtWr)){tcdxT-=(((0x735+5796-0x1dd8)+((i>(0x3d0+2138-0xc28))?(i*i):(
i)))*v1pqM);OQFRU=true;}else{GD6ir+=(((0x929+4172-0x1974)+((i>
(0x16c9+1158-0x1b4d))?(i*i):(i)))*v1pqM);aa2xp=true;}i++;}}if(kHxgd){break;}}if(
!kHxgd){if((fabs(rZHMU)<=fabs(SEtWr))&&(fabs(rZHMU)<=fabs(Lrgj9))&&(fabs(rZHMU)
<=fabs(UcHzk))){return(tcdxT);}if((fabs(SEtWr)<=fabs(rZHMU))&&(fabs(SEtWr)<=fabs
(Lrgj9))&&(fabs(SEtWr)<=fabs(UcHzk))){return(GD6ir);}if((fabs(Lrgj9)<=fabs(rZHMU
))&&(fabs(Lrgj9)<=fabs(SEtWr))&&(fabs(Lrgj9)<=fabs(UcHzk))){return(Wf3h1);}
return(oq_C2);}wiRhC=0.0;ipU4Y=0.0;for(i=(0x16bc+3585-0x24bd);i<hR1mg;i++){
B8jft=(GD6ir-tcdxT);if(B8jft==0.0){B8jft=CshoR;}osbYq=(SEtWr-rZHMU)/B8jft;B8jft=
osbYq;if(B8jft==0.0){if(ALQQv){B8jft=CshoR;}else{B8jft=B67U4;}ALQQv=!ALQQv;}
t3CJc=GD6ir-SEtWr/B8jft;dw944=(*YjgrU)(t3CJc,Fayok,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6
,q5nqO,TmpZN);if(dw944==0.0){return(t3CJc);}if((dw944*SEtWr)<0.0){


if(t3CJc==tcdxT){if(UJ1Zw==fabs(GD6ir-tcdxT)){return(0.5*(tcdxT+GD6ir));}UJ1Zw=
PZRPg;PZRPg=WSzT3;WSzT3=V0G8O;V0G8O=fabs(GD6ir-tcdxT);}
tcdxT=GD6ir;GD6ir=t3CJc;rZHMU=SEtWr;SEtWr=dw944;}else{B8jft=SEtWr;if(B8jft==0.0)
{B8jft=CshoR;}CcGZ8=1.0-dw944/B8jft;if(CcGZ8<=0.0){CcGZ8=0.5;}GD6ir=t3CJc;rZHMU=
CcGZ8*rZHMU;SEtWr=dw944;}if(fabs(GD6ir-tcdxT)<=AvZbi){return(((fabs(SEtWr))<(
fabs(rZHMU)))?(GD6ir):(tcdxT));}}return(((fabs(SEtWr))<(fabs(rZHMU)))?(GD6ir):(
tcdxT));}



bool BkjIW::G9bu7(double(*YjgrU)(const double&NwHKt,const double&OFgA6,const 
double&qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,const 
double&q5nqO,const double&TmpZN),double(*Ghz_l)(const double&NwHKt,const double&
OFgA6,const double&qI8hj,const double&_DBry,const double&Dk1wk,const double&
qPN_6,const double&q5nqO,const double&TmpZN),void(*BFw4R)(const double&TmpZN,
const double&OFgA6,const double&qI8hj,const double&_DBry,const double&q5nqO,
const double&qXUgQ,double*fab0A,double*M0ljj),const double&OFgA6,const double&
TmpZN,const double&qI8hj,const double&qXUgQ,const double&_DBry,const double&
Dk1wk,const double&qPN_6,const double&q5nqO){double ufSqb,sE5zF,canvx,iGC7p,
WUnmb,Ypclh,Tpi9y,OppWT;(*BFw4R)(TmpZN,OFgA6,qI8hj,_DBry,q5nqO,qXUgQ,&ufSqb,&
sE5zF);iGC7p=(*YjgrU)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);WUnmb=(*
YjgrU)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(iGC7p)==ErhpP(
WUnmb)){Ypclh=(*Ghz_l)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);Tpi9y=(*
Ghz_l)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(Ypclh)!=ErhpP(
Tpi9y)){canvx=xa5W3(Ghz_l,ufSqb,sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO)
;OppWT=(*YjgrU)(canvx,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(OppWT)
!=ErhpP(WUnmb)){return(true);}}KT8lW(&ufSqb,&sE5zF);iGC7p=(*YjgrU)(ufSqb,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);WUnmb=(*YjgrU)(sE5zF,OFgA6,qI8hj,_DBry,
Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(iGC7p)!=ErhpP(WUnmb)){if((fabs(iGC7p)<(0.5*
zyNEr))&&(fabs(WUnmb)<(0.5*zyNEr))){return(true);}}else{if((fabs(iGC7p)<dXp05)||
(fabs(WUnmb)<dXp05)){return(true);}}return(false);}else{return(true);}}



bool BkjIW::xCz9w(const int&omT9P,const double&OFgA6,const double&TmpZN,const 
double&qI8hj,const double&qXUgQ,const double&_DBry,const double&Dk1wk,const 
double&qPN_6,const double&q5nqO){double ufSqb,sE5zF,canvx,iGC7p,WUnmb,Ypclh,
Tpi9y,OppWT;double(*YjgrU)(const double&NwHKt,const double&OFgA6,const double&
qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,const double&
q5nqO,const double&TmpZN);double(*Ghz_l)(const double&NwHKt,const double&OFgA6,
const double&qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,
const double&q5nqO,const double&TmpZN);double(*k_2OJ)(const double&NwHKt,const 
double&OFgA6,const double&qI8hj,const double&_DBry,const double&Dk1wk,const 
double&qPN_6,const double&q5nqO,const double&TmpZN);void(*BFw4R)(const double&
TmpZN,const double&OFgA6,const double&qI8hj,const double&_DBry,const double&
q5nqO,const double&qXUgQ,double*fab0A,double*M0ljj);if(omT9P==BkjIW::J1ner){
YjgrU=&oDY5u;Ghz_l=&yT7D7;k_2OJ=&M3TyU;BFw4R=&oWl1f;}else{YjgrU=&vyuDp;Ghz_l=&
sypVN;k_2OJ=&SGNTA;BFw4R=&aXdEM;}YYAv3(omT9P,Dk1wk,qPN_6,qI8hj,qXUgQ,_DBry,OFgA6
,TmpZN,q5nqO,true,&ufSqb,&sE5zF);iGC7p=(*YjgrU)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,
qPN_6,q5nqO,TmpZN);WUnmb=(*YjgrU)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
TmpZN);if(ErhpP(iGC7p)==ErhpP(WUnmb)){Ypclh=(*Ghz_l)(ufSqb,OFgA6,qI8hj,_DBry,
Dk1wk,qPN_6,q5nqO,TmpZN);Tpi9y=(*Ghz_l)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,
q5nqO,TmpZN);if(ErhpP(Ypclh)!=ErhpP(Tpi9y)){canvx=xa5W3(Ghz_l,ufSqb,sE5zF,Dk1wk,
qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);OppWT=(*YjgrU)(canvx,OFgA6,qI8hj,_DBry,
Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(OppWT)!=ErhpP(WUnmb)){return(true);}}KT8lW(&
ufSqb,&sE5zF);iGC7p=(*YjgrU)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);
WUnmb=(*YjgrU)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(iGC7p)
!=ErhpP(WUnmb)){if((fabs(iGC7p)<(0.5*zyNEr))&&(fabs(WUnmb)<(0.5*zyNEr))){return(
true);}}else{if((fabs(iGC7p)<dXp05)||(fabs(WUnmb)<dXp05)){return(true);}}return(
false);}else{return(true);}}

void BkjIW::YYAv3(const int&omT9P,const double&Dk1wk,const double&qPN_6,const 
double&qI8hj,const double&qXUgQ,const double&_DBry,const double&OFgA6,const 
double&TmpZN,const double&q5nqO,const bool&pQgx4,double*fab0A,double*M0ljj){
double ufSqb=0.0,sE5zF=0.0,K_qaw=0.0,XzpgJ=0.0,Ypclh=0.0,Tpi9y=0.0,gG1VM=0.0,
xMfDU=0.0,hsrkz=0.0,YcSYB=0.0,iGC7p=0.0,cvHwa=0.0,I2SJr=0.0,Nwcev=0.0,WUnmb=0.0,
canvx=0.0;double(*YjgrU)(const double&NwHKt,const double&OFgA6,const double&
qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,const double&
q5nqO,const double&TmpZN);double(*Ghz_l)(const double&NwHKt,const double&OFgA6,
const double&qI8hj,const double&_DBry,const double&Dk1wk,const double&qPN_6,
const double&q5nqO,const double&TmpZN);double(*k_2OJ)(const double&NwHKt,const 
double&OFgA6,const double&qI8hj,const double&_DBry,const double&Dk1wk,const 
double&qPN_6,const double&q5nqO,const double&TmpZN);void(*BFw4R)(const double&
TmpZN,const double&OFgA6,const double&qI8hj,const double&_DBry,const double&
q5nqO,const double&qXUgQ,double*fab0A,double*M0ljj);if(omT9P==BkjIW::J1ner){
YjgrU=&oDY5u;Ghz_l=&yT7D7;k_2OJ=&M3TyU;BFw4R=&oWl1f;}else{YjgrU=&vyuDp;Ghz_l=&
sypVN;k_2OJ=&SGNTA;BFw4R=&aXdEM;}(*BFw4R)(TmpZN,OFgA6,qI8hj,_DBry,q5nqO,qXUgQ,&
ufSqb,&sE5zF);Ypclh=(*Ghz_l)(ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);
Tpi9y=(*Ghz_l)(sE5zF,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);iGC7p=(*YjgrU)(
ufSqb,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);WUnmb=(*YjgrU)(sE5zF,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(Ypclh)!=ErhpP(Tpi9y)){YcSYB=xa5W3(
Ghz_l,ufSqb,sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);Nwcev=(*YjgrU)(
YcSYB,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(pQgx4){if((ErhpP(Nwcev)!=
ErhpP(WUnmb))||(PCYBZ(WUnmb,0.0,Bszzs))){*fab0A=YcSYB;*M0ljj=sE5zF;return;}}else
{if((ErhpP(iGC7p)!=ErhpP(Nwcev))||(PCYBZ(Nwcev,0.0,Bszzs))){*fab0A=ufSqb;*M0ljj=
YcSYB;return;}}*fab0A=ufSqb;*M0ljj=sE5zF;return;}K_qaw=(*k_2OJ)(ufSqb,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);XzpgJ=(*k_2OJ)(sE5zF,OFgA6,qI8hj,_DBry,
Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(K_qaw)!=ErhpP(XzpgJ)){canvx=xa5W3(k_2OJ,ufSqb,
sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);gG1VM=(*Ghz_l)(canvx,OFgA6,
qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP(Ypclh)!=ErhpP(gG1VM)){xMfDU=xa5W3(
Ghz_l,ufSqb,canvx,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);hsrkz=xa5W3(Ghz_l,
canvx,sE5zF,Dk1wk,qPN_6,qI8hj,_DBry,OFgA6,TmpZN,q5nqO);cvHwa=(*YjgrU)(xMfDU,
OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);I2SJr=(*YjgrU)(hsrkz,OFgA6,qI8hj,
_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(pQgx4){if((ErhpP(cvHwa)!=ErhpP(I2SJr))||(PCYBZ
(I2SJr,0.0,Bszzs))){*fab0A=xMfDU;*M0ljj=sE5zF;return;}}else{if((ErhpP(cvHwa)!=
ErhpP(I2SJr))||(PCYBZ(cvHwa,0.0,Bszzs))){*fab0A=ufSqb;*M0ljj=xMfDU;return;}}}}*
fab0A=ufSqb;*M0ljj=sE5zF;return;}bool BkjIW::YMRh6(double(*YjgrU)(const double&
NwHKt,const double&OFgA6,const double&qI8hj,const double&_DBry,const double&
Dk1wk,const double&qPN_6,const double&q5nqO,const double&TmpZN),double(*Ghz_l)(
const double&NwHKt,const double&OFgA6,const double&qI8hj,const double&_DBry,
const double&Dk1wk,const double&qPN_6,const double&q5nqO,const double&TmpZN),
double(*iOeT9)(const double&NwHKt,const double&OFgA6,const double&qI8hj,const 
double&_DBry,const double&Dk1wk,const double&qPN_6,const double&q5nqO,const 
double&TmpZN),const double&Dk1wk,const double&qPN_6,const double&qI8hj,const 
double&_DBry,const double&OFgA6,const double&TmpZN,const double&q5nqO,const 
double&hMrn5,double*fab0A,double*M0ljj){double OppWT=0.0,Ypclh=0.0,Tpi9y=0.0,
canvx=0.0,OKtI0=0.0;Ypclh=(*Ghz_l)(*fab0A,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
TmpZN);Tpi9y=(*Ghz_l)(*M0ljj,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,TmpZN);if(ErhpP
(Ypclh)!=ErhpP(Tpi9y)){canvx=xa5W3(Ghz_l,*fab0A,*M0ljj,Dk1wk,qPN_6,qI8hj,_DBry,
OFgA6,TmpZN,q5nqO);OppWT=(*YjgrU)(canvx,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
TmpZN);if(OppWT<0.0){OKtI0=(*iOeT9)(canvx,OFgA6,qI8hj,_DBry,Dk1wk,qPN_6,q5nqO,
TmpZN);if(OKtI0>hMrn5){if(canvx>=0.0){*M0ljj=canvx;}else{*fab0A=canvx;}return(
true);}}}return(false);}
