
































#include <TypeIVRMLDecisionTree1B2.h>
#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep1IntermediateTimeProfiles.h>
#include <TypeIVRMLStep1Profiles.h>
#include <RMLPositionFlags.h>


bool BkjIW::bfRQ_(const double&Dk1wk,const double&qI8hj,const double&OFgA6,const
 double&q5nqO,const double&TmpZN,const double&qXUgQ,const double&qPN_6,const 
double&_DBry,const double&nD6Gi,const int&DRRsv,d49nB*OF0kB,double*kaQXN){bool 
DohAl=false,BHcWd=false;double GcdhE=0.0,cXGdF=Dk1wk,HGmnq=qI8hj,rM_v0=OFgA6,
uRwD_=qPN_6,l4nzo=_DBry,oBUnS=0.0;
if(IKdB7(rM_v0)){goto nUbDY;}
else{
LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto nUbDY;}nUbDY:
if(lLouV(rM_v0,TmpZN)){goto pxDmO;}
else{
ZbntB(&GcdhE,&cXGdF,&HGmnq,&rM_v0,TmpZN,q5nqO);goto pxDmO;}pxDmO:
if(oEW8q(rM_v0,HGmnq,qXUgQ,q5nqO)){goto DaRxZ;}
else{
MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);
LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto ywSwC;}DaRxZ:
if(ha1rK(HGmnq,qXUgQ)){goto hvdRC;}
else{goto ywSwC;}ywSwC:if(DRRsv==RMLPositionFlags::GET_INTO_BOUNDARIES_FAST){
if(HmgEe(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto MpWnY;}
else{goto BIiBV;}}else
{
if(WATNG(rM_v0,TmpZN,HGmnq,-qXUgQ,q5nqO)){x96T7(&GcdhE,&cXGdF,&HGmnq,&rM_v0,
qXUgQ,TmpZN,q5nqO);}
else{c8VVD(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);}goto hvdRC;}MpWnY:
if(TZEmh(rM_v0,HGmnq,qXUgQ,q5nqO)){
NbC_i(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto hvdRC;}
else{
V4ati(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto hvdRC;}BIiBV:
if(aDK2j(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto iE2VL;}
else{
YPfXT(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);goto hvdRC;}iE2VL:
if(HMG83(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){
V4ati(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto hvdRC;}
else{
TVxU3(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);goto hvdRC;}hvdRC:oBUnS=
fabs(rM_v0/q5nqO);if((PCYBZ((HGmnq+0.5*rM_v0*oBUnS),l4nzo,x7NWZ))&&(PCYBZ((cXGdF
+HGmnq*oBUnS+0.5*rM_v0*lJXU0(oBUnS)-dnGW6(rM_v0)*_NEO8(oBUnS)*q5nqO/6.0),uRwD_,
x7NWZ))){GcdhE+=oBUnS;goto Pnkfd;}
if(QrVfm(rM_v0,HGmnq,q5nqO)){

LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);}
if(DTxjS(rM_v0)){BHcWd=false;goto ploFP;}else{BHcWd=true;goto VHXiR;}ploFP:
if(MHeC4(rM_v0,HGmnq,l4nzo,qXUgQ,q5nqO)){goto oAjcc;}else{
MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);if(HGmnq>qXUgQ){HGmnq=qXUgQ;
}goto p8N2D;}oAjcc:
if(reAoa(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto y07f8;}else{goto yaH6K;}y07f8:
if(rLEBO(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);if(HGmnq>qXUgQ){HGmnq=qXUgQ;
}goto knOqf;}else{
nOnll(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=jgijf;goto Pnkfd;}knOqf:
if(D1eMf(rM_v0,TmpZN,HGmnq,q5nqO)){goto X7xb_;}else{goto TEzC6;}X7xb_:
if(fPDHv(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=DnaXB;goto Pnkfd;}else{goto QKrMV;}QKrMV:
if(zjDQB(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=DnaXB;goto Pnkfd;}else{goto idhwJ;}idhwJ:
if(Yn1YW(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
aJFZE(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=cDXnH;}else{*OF0kB=rT8JN;}goto Pnkfd;}else{goto bC7Vy;}bC7Vy:
if(DbXcG(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
aJFZE(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=cDXnH;}else{*OF0kB=rT8JN;}goto Pnkfd;}else{GcdhE=kiQzO;goto Pnkfd;
}TEzC6:
if(pcbJp(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=DnaXB;goto Pnkfd;}else{goto xf3Nv;}xf3Nv:
if(_nJPh(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=DnaXB;goto Pnkfd;}else{GcdhE=kiQzO;goto Pnkfd;}yaH6K:
if(bEjgX(rM_v0,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);if(HGmnq>qXUgQ){HGmnq=qXUgQ;
}goto _60KT;}else{goto xu40x;}_60KT:
if(Pd0F3(rM_v0,TmpZN,HGmnq,q5nqO)){goto uS6OF;}else{goto oj6DM;}uS6OF:
if(f54wo(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){goto Acl10;}else{goto yPTy9
;}Acl10:
if(ofJY_(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=OifK3;goto Pnkfd;}else{
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=DnaXB;goto Pnkfd;}yPTy9:
if(Rcvc0(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=OifK3;goto Pnkfd;}else{goto QKrMV;}oj6DM:
if(KX0xG(TmpZN,l4nzo,q5nqO)){goto AIHqe;}else{goto jLy2L;}AIHqe:
if(HlN6g(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){goto Acl10;}else{goto rhtzW
;}rhtzW:
if(G1bS6(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=OifK3;goto Pnkfd;}else{goto C6tQf;}C6tQf:
if(DU_SM(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){goto Acl10;}else{
GcdhE=kiQzO;goto Pnkfd;}jLy2L:
if(qadHr(rM_v0,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=CBvij;}else{*OF0kB=OifK3;}goto Pnkfd;}else{goto o4b4r;}o4b4r:
if(zTmVA(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=CBvij;}else{*OF0kB=OifK3;}goto Pnkfd;}else{GcdhE=kiQzO;goto Pnkfd;
}xu40x:
if(rXD3g(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
njvt5(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=J1ner;if(DohAl){
nOnll(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=jgijf;}goto Pnkfd;}else{
nOnll(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=jgijf;if(DohAl){
njvt5(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=J1ner;}goto Pnkfd;}p8N2D:
if(yFzZ_(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto gbDBs;}else{goto RdJus;}gbDBs:
if(XcTWE(TmpZN,l4nzo,q5nqO)){goto zpXBf;}else{goto qjjZ8;}zpXBf:
if(O8GTr(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
u1y0z(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=BGSZ3;}else{*OF0kB=wzOBw;}goto Pnkfd;}else{goto KOavu;}KOavu:
if(Wuc8O(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
u1y0z(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=BGSZ3;}else{*OF0kB=wzOBw;}goto Pnkfd;}else{goto idhwJ;}qjjZ8:
if(K9Ron(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
u1y0z(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=BGSZ3;}else{*OF0kB=wzOBw;}goto Pnkfd;}else{goto VZmbG;}VZmbG:
if(CSAeZ(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
u1y0z(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=BGSZ3;}else{*OF0kB=wzOBw;}goto Pnkfd;}else{GcdhE=kiQzO;goto Pnkfd;
}RdJus:
if(WwMkt(rM_v0,TmpZN,HGmnq,q5nqO)){goto tPlgF;}else{goto jLy2L;}tPlgF:
if(MK077(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=CBvij;}else{*OF0kB=OifK3;}goto Pnkfd;}else{goto ErVvB;}ErVvB:
if(aK8vC(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=CBvij;}else{*OF0kB=OifK3;}*OF0kB=OifK3;goto Pnkfd;}else{goto gbDBs
;}VHXiR:
if(RuOq7(rM_v0,HGmnq,l4nzo,q5nqO)){goto XA738;}else{goto CHO5U;}XA738:
if(V66ya(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto HocK6;}else{goto kQuY6;}HocK6:
if(ext3b(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
JA9fu(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=jgijf;
goto Pnkfd;}else{goto gbDBs;}kQuY6:
if(YdIoN(rM_v0,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){goto FwBbr;}else{goto p8N2D;}
FwBbr:
if(q9uT0(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
pOt1_(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=J1ner;if(DohAl){
JA9fu(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=jgijf;}goto Pnkfd;}else{
JA9fu(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=jgijf;if(DohAl){
pOt1_(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);*
OF0kB=J1ner;}goto Pnkfd;}CHO5U:
if(S4Rtd(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto KCOaL;}else{goto hhVq0;}KCOaL:
if(f71Aj(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto RdJus;}else{goto Sv0Kw;}Sv0Kw:
if(zBW3I(TmpZN,l4nzo,q5nqO)){goto jwxPJ;}else{goto jLy2L;}jwxPJ:
if(nC8Dm(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=CBvij;}else{*OF0kB=OifK3;}goto Pnkfd;}else{goto KWqm0;}KWqm0:
if(TpbvR(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
iannV(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=CBvij;}else{*OF0kB=OifK3;}goto Pnkfd;}else{goto hhVq0;}hhVq0:
if(iKe4E(rM_v0,TmpZN,HGmnq,q5nqO)){goto _q8r7;}else{goto TEzC6;}_q8r7:
if(CLyFU(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=mCpRV;}else{*OF0kB=DnaXB;}goto Pnkfd;}else{goto WZBs8;}WZBs8:
if(P89qn(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
HKfxd(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,nD6Gi,&DohAl);if(
BHcWd){*OF0kB=mCpRV;}else{*OF0kB=DnaXB;}goto Pnkfd;}else{goto idhwJ;}Pnkfd:*
kaQXN=GcdhE;return(DohAl);}
