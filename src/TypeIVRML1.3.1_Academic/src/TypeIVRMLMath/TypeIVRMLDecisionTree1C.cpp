
































#include <TypeIVRMLDecisionTree1C.h>
#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLStep1IntermediateTimeProfiles.h>
#include <TypeIVRMLStep1Profiles.h>
#include <RMLPositionFlags.h>


bool BkjIW::zQcxg(const double&Dk1wk,const double&qI8hj,const double&OFgA6,const
 double&q5nqO,const double&TmpZN,const double&qXUgQ,const double&qPN_6,const 
double&_DBry,const d49nB&T53NC,const d49nB&icjtN,const int&DRRsv,double*VKJPU){
bool DohAl=false;double GcdhE=0.0,cXGdF=Dk1wk,HGmnq=qI8hj,rM_v0=OFgA6,uRwD_=
qPN_6,l4nzo=_DBry;
if(GqEj0(rM_v0)){goto I3AxS;}
else{
LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto I3AxS;}I3AxS:
if(E6Wp8(rM_v0,TmpZN)){goto Ma2MG;}
else{
ZbntB(&GcdhE,&cXGdF,&HGmnq,&rM_v0,TmpZN,q5nqO);goto Ma2MG;}Ma2MG:
if(egTDv(rM_v0,HGmnq,qXUgQ,q5nqO)){goto GIs18;}
else{
MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);
LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto tgtAU;}GIs18:
if(z9H5L(HGmnq,qXUgQ)){goto gPu6H;}
else{goto tgtAU;}tgtAU:if(DRRsv==RMLPositionFlags::GET_INTO_BOUNDARIES_FAST){
if(VtDVb(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto x5uXT;}
else{goto TWKdt;}}else
{
if(w6Jco(rM_v0,TmpZN,HGmnq,-qXUgQ,q5nqO)){x96T7(&GcdhE,&cXGdF,&HGmnq,&rM_v0,
qXUgQ,TmpZN,q5nqO);}
else{c8VVD(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);}goto gPu6H;}x5uXT:
if(nsXGY(rM_v0,HGmnq,qXUgQ,q5nqO)){
NbC_i(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto gPu6H;}
else{
V4ati(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto gPu6H;}TWKdt:
if(U99hN(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto CFv6O;}
else{
YPfXT(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);goto gPu6H;}CFv6O:
if(wd8FG(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){
V4ati(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);goto gPu6H;}
else{
TVxU3(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);goto gPu6H;}gPu6H:
if(_KD0C(l4nzo)){goto Tyorg;}else{

LIlfP(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo);goto Tyorg;}Tyorg:
if(W5mPE(rM_v0)){goto um0EY;}else{
bTcSd(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);if(HGmnq<-qXUgQ){HGmnq=-qXUgQ;
}goto qMDCN;}um0EY:
if(Cj4rr(T53NC,icjtN)){MLSwm(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO);if(HGmnq>qXUgQ){
HGmnq=qXUgQ;
}goto qMDCN;}else{goto qMDCN;}qMDCN:
if(WQDNb(rM_v0,TmpZN,HGmnq,qXUgQ,q5nqO)){goto wgVbK;}else{goto zUkYw;}wgVbK:
if(Q6AeJ(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,q5nqO)){goto dLiWS;}else{goto cL3Ep;}
dLiWS:
if(cqSfx(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
DyHQ9(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);
r8vS1(&GcdhE,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,q5nqO,&DohAl);goto Pnkfd;}else{goto 
HWKtI;}HWKtI:
if(qJ6kf(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){Vvroj(&GcdhE,cXGdF,
uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);goto Pnkfd;}else{puRQK(&GcdhE,
cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);goto Pnkfd;}cL3Ep:
if(JE0tb(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
DyHQ9(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,TmpZN,q5nqO);
FW1Ej(&GcdhE,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);goto Pnkfd;}else{
goto deRRY;}deRRY:
if(sGV0P(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){vYoEd(&GcdhE,cXGdF,
uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);goto Pnkfd;}else{goto wYviW;}
wYviW:
if(zupZF(rM_v0,TmpZN,HGmnq,l4nzo,q5nqO)){goto HWKtI;}else{goto h2EWv;}h2EWv:
if(xI_zT(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){MUAXN(&GcdhE,cXGdF,
uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);if(DohAl){puRQK(&GcdhE,cXGdF,
uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);}goto Pnkfd;}else{puRQK(&GcdhE
,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);if(DohAl){MUAXN(&GcdhE,
cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);}goto Pnkfd;}zUkYw:
if(LJH90(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,q5nqO)){goto j0Va0;}else{goto tpWLP;}
j0Va0:
if(WpvuW(rM_v0,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
BKJcM(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);
r8vS1(&GcdhE,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,q5nqO,&DohAl);goto Pnkfd;}else{puRQK(
&GcdhE,cXGdF,uRwD_,HGmnq,qXUgQ,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);goto Pnkfd;}tpWLP
:
if(rXvrw(rM_v0,TmpZN,HGmnq,qXUgQ,l4nzo,cXGdF,uRwD_,q5nqO)){
BKJcM(&GcdhE,&cXGdF,&HGmnq,&rM_v0,qXUgQ,q5nqO);
FW1Ej(&GcdhE,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,&DohAl);goto Pnkfd;}else{
goto h2EWv;}Pnkfd:*VKJPU=GcdhE;return(DohAl);}
