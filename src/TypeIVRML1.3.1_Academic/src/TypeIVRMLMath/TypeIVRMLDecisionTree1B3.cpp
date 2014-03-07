
































#include <TypeIVRMLDecisionTree1B3.h>
#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep1IntermediateTimeProfiles.h>
#include <TypeIVRMLStep1RootFunctions.h>
#include <TypeIVRMLStep1Profiles.h>
#include <RMLPositionFlags.h>


bool BkjIW::Cz3Ip(const double&Dk1wk,const double&qI8hj,const double&OFgA6,const
 double&q5nqO,const double&TmpZN,const double&qXUgQ,const double&qPN_6,const 
double&_DBry,const int&T53NC,const int&DRRsv,d49nB*OF0kB,double*kaQXN,double*
mSo7T){bool DohAl=false;double GcdhE=0.0,cXGdF=Dk1wk,HGmnq=qI8hj,rM_v0=OFgA6,
uRwD_=qPN_6,l4nzo=_DBry,oBUnS=0.0,na1j7=kiQzO,VZ_hs=kiQzO;*mSo7T=kiQzO;
if(A1qgc(rM_v0)){goto h4XVB;}
else{
LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto h4XVB;}h4XVB:
if(EiHB8(rM_v0,TmpZN)){goto T_fw_;}
else{
ZbntB(&GcdhE,&cXGdF,&HGmnq,&rM_v0,TmpZN,q5nqO);goto T_fw_;}T_fw_:
if(JqArP(rM_v0,HGmnq,qXUgQ,q5nqO)){goto J8pOv;}
else{
MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);
LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto EhlHW;}J8pOv:
if(pfsLr(HGmnq,qXUgQ)){goto zgB41;}
else{goto EhlHW;}EhlHW:if(DRRsv==RMLPositionFlags::GET_INTO_BOUNDARIES_FAST){
if(dX18P(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto i7c_A;}
else{goto PRRcg;}}else
{
if(AYbbe(rM_v0,TmpZN,HGmnq,-qXUgQ,q5nqO)){x96T7(&GcdhE,&cXGdF,&HGmnq,&rM_v0,
qXUgQ,TmpZN,q5nqO);}
else{c8VVD(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);}goto zgB41;}i7c_A:
if(H12gj(rM_v0,HGmnq,qXUgQ,q5nqO)){
NbC_i(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto zgB41;}
else{
V4ati(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto zgB41;}PRRcg:
if(oqnuj(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto kyrZv;}
else{
YPfXT(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);goto zgB41;}kyrZv:
if(liWft(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){
V4ati(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto zgB41;}
else{
TVxU3(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);goto zgB41;}zgB41:oBUnS=
fabs(rM_v0/q5nqO);if((PCYBZ((HGmnq+0.5*rM_v0*oBUnS),l4nzo,x7NWZ))&&(PCYBZ((cXGdF
+HGmnq*oBUnS+0.5*rM_v0*lJXU0(oBUnS)-dnGW6(rM_v0)*_NEO8(oBUnS)*q5nqO/6.0),uRwD_,
x7NWZ))){GcdhE+=oBUnS;goto Pnkfd;}
if(zDKxQ(rM_v0,HGmnq,l4nzo,q5nqO)){goto S3wx3;}else{GcdhE=kiQzO;goto Pnkfd;}
S3wx3:
if(fkm_W(T53NC)){goto z7n8C;}else{GcdhE=kiQzO;goto Pnkfd;}z7n8C:
if(lMmxR(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto BTzfY;}else{goto NiUOT;}BTzfY:
if(myUyo(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto WEEkJ;}else{goto yVPsx;}WEEkJ:
if(aRNdq(rM_v0,TmpZN,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){goto dOjJo;}else{
nOnll(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,0.0,&DohAl);*OF0kB=
jgijf;goto Pnkfd;}dOjJo:


if(Ko0ea(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO,&na1j7,&VZ_hs)){

if(VZ_hs!=kiQzO){VZ_hs+=GcdhE;}GcdhE+=na1j7;*OF0kB=jgijf;goto Pnkfd;}else{GcdhE=
kiQzO;goto Pnkfd;}yVPsx:
if(KfWVv(rM_v0,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){goto CUwkR;}else{goto BY1Cn;}
CUwkR:


if(koU5W(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO,&na1j7,&VZ_hs)){

if(VZ_hs!=kiQzO){VZ_hs+=GcdhE;}GcdhE+=na1j7;*OF0kB=jgijf;goto Pnkfd;}else{goto 
hXI17;}BY1Cn:
if(CA9n6(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
njvt5(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,0.0,&DohAl);if(
DohAl){
nOnll(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,0.0,&DohAl);*OF0kB=
jgijf;}else{*OF0kB=J1ner;}goto Pnkfd;}else{
nOnll(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,0.0,&DohAl);if(
DohAl){
njvt5(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,0.0,&DohAl);*OF0kB=
J1ner;}else{*OF0kB=jgijf;}goto Pnkfd;}NiUOT:
if(JTiVM(rM_v0,HGmnq,l4nzo,cXGdF,uRwD_,q5nqO)){goto hXI17;}else{
njvt5(&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,0.0,&DohAl);*OF0kB=
J1ner;goto Pnkfd;}hXI17:


if(HqfuH(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO,&na1j7,&VZ_hs)){

if(VZ_hs!=kiQzO){VZ_hs+=GcdhE;}GcdhE+=na1j7;*OF0kB=J1ner;goto Pnkfd;}else{GcdhE=
kiQzO;goto Pnkfd;}Pnkfd:*kaQXN=GcdhE;*mSo7T=VZ_hs;return(DohAl);}
