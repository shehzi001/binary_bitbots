































#include <TypeIVRMLStep1Profiles.h>
#include <TypeIVRMLStep2WithoutSynchronization.h>
#include <TypeIVRMLDecisionTree2.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep2IntermediateProfiles.h>


void BkjIW::K0DuV(const double&Dk1wk,const double&qI8hj,const double&OFgA6,const
 double&q5nqO,const double&TmpZN,const double&qXUgQ,const double&qPN_6,const 
double&_DBry,const double&lEuxB,const BkjIW::d49nB&aexST,const int&DRRsv,jKICA*
Qy4rb){bool frwbM=false;BkjIW::d49nB Gvfhe=aexST;double GcdhE=0.0,cXGdF=Dk1wk,
HGmnq=qI8hj,rM_v0=OFgA6,uRwD_=qPN_6,l4nzo=_DBry,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,
CQMLR=0.0,hTABS=0.0,SMkYE=0.0,aPBT1=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,
fO1xN=0.0,b0cue=0.0,W013Z=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,
EQRtt=0.0,RKVjR=0.0,jqR9R=0.0,E3hwQ=0.0,ikGZ0=0.0;
ZeaYH(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO,TmpZN,qXUgQ,DRRsv,&uRwD_,&l4nzo,Qy4rb,&
frwbM);
if((Gvfhe==BkjIW::HyDYY)||(Gvfhe==BkjIW::F9rJD)||(Gvfhe==BkjIW::UgzL4)||(Gvfhe==
BkjIW::eIutJ)||(Gvfhe==BkjIW::rT8JN)||(Gvfhe==BkjIW::wzOBw)||(Gvfhe==BkjIW::
DnaXB)||(Gvfhe==BkjIW::OifK3)){hDBkU(&GcdhE,&cXGdF,&HGmnq,&rM_v0,q5nqO,&(*Qy4rb)
,frwbM);

if(HGmnq>qXUgQ){HGmnq=qXUgQ;
}
mO1pa(&cXGdF,&HGmnq,&rM_v0,&uRwD_,&l4nzo,&frwbM);
switch(Gvfhe){case BkjIW::HyDYY:Gvfhe=BkjIW::Sxc5U;break;case BkjIW::F9rJD:Gvfhe
=BkjIW::Uawc_;break;case BkjIW::UgzL4:Gvfhe=BkjIW::RJPE9;break;case BkjIW::eIutJ
:Gvfhe=BkjIW::pVKSx;break;case BkjIW::rT8JN:Gvfhe=BkjIW::cDXnH;break;case BkjIW
::wzOBw:Gvfhe=BkjIW::BGSZ3;break;case BkjIW::DnaXB:Gvfhe=BkjIW::mCpRV;break;case
 BkjIW::OifK3:Gvfhe=BkjIW::CBvij;break;default:break;}}

switch(Gvfhe){case BkjIW::Sxc5U:wxn_F=(TmpZN-rM_v0)/q5nqO;if(wxn_F<0.0){wxn_F=
0.0;}vHzX3=TmpZN/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ia77o=0.5*lJXU0(
TmpZN)/q5nqO;mG9pV=qXUgQ-HGmnq-zv_9k-ia77o;if(mG9pV<0.0){mG9pV=0.0;}yZ3xv=mG9pV/
TmpZN;ldlgi=HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;UczXz=(
HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+0.5*
TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;s5XEo=0.0;fO1xN=-ia77o;W013Z=-ia77o;
hTABS=vHzX3;aPBT1=vHzX3;jqR9R=HGmnq+zv_9k+mG9pV+ia77o;b0cue=l4nzo-HGmnq-zv_9k-
mG9pV-ia77o-fO1xN-W013Z;if(b0cue>0.0){b0cue=0.0;}SMkYE=-b0cue/TmpZN;Q7aqo=jqR9R*
hTABS-q5nqO*_NEO8(hTABS)/6.0;EQRtt=(jqR9R+fO1xN)*SMkYE-0.5*TmpZN*lJXU0(SMkYE);
RKVjR=(jqR9R+fO1xN+b0cue)*aPBT1-0.5*TmpZN*lJXU0(aPBT1)+q5nqO*_NEO8(aPBT1)/6.0;
y71cs=uRwD_-cXGdF-ldlgi-UczXz-sRjiD-Q7aqo-EQRtt-RKVjR;if(jqR9R==0.0){jqR9R=CshoR
;}CQMLR=y71cs/jqR9R;if(CQMLR<0.0){CQMLR=0.0;}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,(-HGmnq
),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),0.0,(-HGmnq),(-cXGdF),(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,(-HGmnq),(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[
Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+hTABS;
Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=-TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,-HGmnq,(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(
0.0,0.0,-TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=-TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,-HGmnq,
(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+aPBT1;Qy4rb->Ti1i1++;
GcdhE+=(aPBT1);cXGdF+=RKVjR;HGmnq+=W013Z;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::Uawc_:wxn_F=(TmpZN-rM_v0)/q5nqO;if(wxn_F<0.0){wxn_F=0.0;}vHzX3=TmpZN
/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ia77o=0.5*lJXU0(TmpZN)/q5nqO;
mG9pV=qXUgQ-HGmnq-zv_9k-ia77o;if(mG9pV<0.0){mG9pV=0.0;}yZ3xv=mG9pV/TmpZN;ldlgi=
HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;UczXz=(HGmnq+zv_9k)*
yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);sRjiD+=(HGmnq+zv_9k+mG9pV)*vHzX3+0.5*TmpZN*lJXU0(
vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;s5XEo=0.0;jqR9R=HGmnq+zv_9k+mG9pV+ia77o;ikGZ0=-
mdAxL(-q5nqO*(l4nzo-jqR9R));hTABS=-ikGZ0/q5nqO;SMkYE=hTABS;fO1xN=0.5*hTABS*ikGZ0
;b0cue=fO1xN;Q7aqo=jqR9R*hTABS-q5nqO*_NEO8(hTABS)/6.0;EQRtt=(jqR9R+fO1xN)*SMkYE+
0.5*ikGZ0*lJXU0(SMkYE)+q5nqO*_NEO8(SMkYE)/6.0;y71cs=uRwD_-cXGdF-ldlgi-UczXz-
sRjiD-Q7aqo-EQRtt;if(jqR9R==0.0){jqR9R=CshoR;}CQMLR=y71cs/jqR9R;if(CQMLR<0.0){
CQMLR=0.0;}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,(-HGmnq
),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),0.0,(-HGmnq),(-cXGdF),(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,(-HGmnq),(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[
Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+hTABS;
Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=ikGZ0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-ikGZ0)),-HGmnq,
-cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-ikGZ0,-
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-ikGZ0,(GcdhE));}
else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(GcdhE
));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),ikGZ0,HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::RJPE9:E3hwQ=mdAxL((lJXU0(rM_v0)+2.0*q5nqO*(qXUgQ-HGmnq))/2.0);wxn_F=
(E3hwQ-rM_v0)/q5nqO;if(wxn_F<0.0){wxn_F=0.0;}yZ3xv=E3hwQ/q5nqO;zv_9k=rM_v0*wxn_F
+0.5*wxn_F*(E3hwQ-rM_v0);if(zv_9k<0.0){zv_9k=0.0;}mG9pV=0.5*E3hwQ*yZ3xv;ldlgi=
HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;UczXz=(HGmnq+zv_9k)*
yZ3xv+0.5*E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;jqR9R=HGmnq+zv_9k+mG9pV;
CQMLR=TmpZN/q5nqO;SMkYE=CQMLR;s5XEo=-0.5*lJXU0(TmpZN)/q5nqO;b0cue=s5XEo;fO1xN=
l4nzo-HGmnq-zv_9k-mG9pV-s5XEo-b0cue;if(fO1xN>0.0){fO1xN=0.0;}hTABS=-fO1xN/TmpZN;
y71cs=jqR9R*CQMLR-q5nqO*_NEO8(CQMLR)/6.0;Q7aqo=(jqR9R+s5XEo)*hTABS-0.5*TmpZN*
lJXU0(hTABS);EQRtt=(jqR9R+s5XEo+fO1xN)*SMkYE-0.5*TmpZN*lJXU0(SMkYE)+q5nqO*_NEO8(
SMkYE)/6.0;sRjiD=uRwD_-cXGdF-ldlgi-UczXz-y71cs-Q7aqo-EQRtt;if(jqR9R==0.0){jqR9R=
CshoR;}vHzX3=sRjiD/jqR9R;if(vHzX3<0.0){vHzX3=0.0;}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=E3hwQ;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-E3hwQ)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-E3hwQ,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-E3hwQ,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),E3hwQ,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=0.0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1
++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=TmpZN;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,-HGmnq,(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(
0.0,0.0,-TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=TmpZN;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,-HGmnq,
(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::pVKSx:E3hwQ=mdAxL((lJXU0(rM_v0)+2.0*q5nqO*(qXUgQ-HGmnq))/2.0);wxn_F=
(E3hwQ-rM_v0)/q5nqO;if(wxn_F<0.0){wxn_F=0.0;}yZ3xv=E3hwQ/q5nqO;zv_9k=rM_v0*wxn_F
+0.5*wxn_F*(E3hwQ-rM_v0);if(zv_9k<0.0){zv_9k=0.0;}mG9pV=0.5*E3hwQ*yZ3xv;ldlgi=
HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;UczXz=(HGmnq+zv_9k)*
yZ3xv+0.5*E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;jqR9R=HGmnq+zv_9k+mG9pV;
ikGZ0=-mdAxL(-q5nqO*(l4nzo-jqR9R));CQMLR=-ikGZ0/q5nqO;hTABS=CQMLR;s5XEo=0.5*
CQMLR*ikGZ0;fO1xN=s5XEo;y71cs=jqR9R*CQMLR-q5nqO*_NEO8(CQMLR)/6.0;Q7aqo=(jqR9R+
s5XEo)*hTABS+0.5*ikGZ0*lJXU0(hTABS)+q5nqO*_NEO8(hTABS)/6.0;sRjiD=uRwD_-cXGdF-
ldlgi-UczXz-y71cs-Q7aqo;if(jqR9R==0.0){jqR9R=CshoR;}vHzX3=sRjiD/jqR9R;if(vHzX3<
0.0){vHzX3=0.0;}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=E3hwQ;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-E3hwQ)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-E3hwQ,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-E3hwQ,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),E3hwQ,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=0.0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1
++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=ikGZ0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-ikGZ0)),-HGmnq,
-cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-ikGZ0,-
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),-ikGZ0,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),ikGZ0,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::cDXnH:wxn_F=(TmpZN-rM_v0)/q5nqO;if(wxn_F<0.0){wxn_F=0.0;}yZ3xv=lEuxB
;if(yZ3xv<0.0){yZ3xv=0.0;}vHzX3=TmpZN/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(
wxn_F);mG9pV=TmpZN*yZ3xv;ia77o=0.5*lJXU0(TmpZN)/q5nqO;ldlgi=HGmnq*wxn_F+0.5*
rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*
lJXU0(yZ3xv);sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(
vHzX3)/6.0;jqR9R=HGmnq+zv_9k+mG9pV+ia77o;CQMLR=vHzX3;SMkYE=vHzX3;s5XEo=-ia77o;
b0cue=s5XEo;fO1xN=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-s5XEo-b0cue;if(fO1xN>0.0){fO1xN=
0.0;}hTABS=-fO1xN/TmpZN;y71cs=jqR9R*CQMLR-q5nqO*_NEO8(CQMLR)/6.0;Q7aqo=(jqR9R+
s5XEo)*hTABS-0.5*TmpZN*lJXU0(hTABS);EQRtt=(jqR9R+s5XEo+fO1xN)*SMkYE-0.5*TmpZN*
lJXU0(SMkYE)+q5nqO*_NEO8(SMkYE)/6.0;



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,(-HGmnq
),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),0.0,(-HGmnq),(-cXGdF),(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,(-HGmnq),(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[
Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;
Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=-TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,-HGmnq,(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(
0.0,0.0,-TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=-TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,-HGmnq,
(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::BGSZ3:wxn_F=(TmpZN-rM_v0)/q5nqO;if(wxn_F<0.0){wxn_F=0.0;}zv_9k=rM_v0
*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*
_NEO8(wxn_F)/6.0;ia77o=0.5*lJXU0(TmpZN)/q5nqO;vHzX3=TmpZN/q5nqO;ikGZ0=lEuxB;if(
ikGZ0>0.0){ikGZ0=0.0;}CQMLR=-ikGZ0/q5nqO;hTABS=CQMLR;s5XEo=0.5*ikGZ0*CQMLR;fO1xN
=s5XEo;mG9pV=l4nzo-HGmnq-zv_9k-ia77o-s5XEo-fO1xN;if(mG9pV<0.0){mG9pV=0.0;}yZ3xv=
mG9pV/TmpZN;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);sRjiD=(HGmnq+zv_9k+
mG9pV)*vHzX3+0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;y71cs=(HGmnq+zv_9k+
mG9pV+ia77o)*CQMLR-q5nqO*_NEO8(CQMLR)/6.0;Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*
hTABS+0.5*ikGZ0*lJXU0(hTABS)+q5nqO*_NEO8(hTABS)/6.0;



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,(-HGmnq
),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),0.0,(-HGmnq),(-cXGdF),(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,(-HGmnq),(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[
Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;
Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=ikGZ0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-ikGZ0)),-HGmnq,
-cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-ikGZ0,-
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-ikGZ0,(GcdhE));}
else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(GcdhE
));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),ikGZ0,HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::mCpRV:E3hwQ=lEuxB;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}wxn_F=(E3hwQ-rM_v0)/
q5nqO;yZ3xv=E3hwQ/q5nqO;zv_9k=rM_v0*wxn_F+0.5*(E3hwQ-rM_v0)*wxn_F;if(zv_9k<0.0){
zv_9k=0.0;}mG9pV=0.5*E3hwQ*yZ3xv;ldlgi=HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*
_NEO8(wxn_F)/6.0;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(
yZ3xv)/6.0;vHzX3=TmpZN/q5nqO;hTABS=vHzX3;ia77o=-0.5*TmpZN*vHzX3;fO1xN=ia77o;
s5XEo=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-fO1xN;if(s5XEo>0.0){s5XEo=0.0;}CQMLR=-s5XEo/
TmpZN;sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3-q5nqO*_NEO8(vHzX3)/6.0;y71cs=(HGmnq+zv_9k+
mG9pV+ia77o)*CQMLR-0.5*TmpZN*lJXU0(CQMLR);Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*
hTABS-0.5*TmpZN*lJXU0(hTABS)+q5nqO*_NEO8(hTABS)/6.0;



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=E3hwQ;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-E3hwQ)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-E3hwQ,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-E3hwQ,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),E3hwQ,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=0.0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1
++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=TmpZN;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,-HGmnq,(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(
0.0,0.0,-TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=TmpZN;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,-HGmnq,
(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::CBvij:E3hwQ=lEuxB;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}wxn_F=(E3hwQ-rM_v0)/
q5nqO;yZ3xv=E3hwQ/q5nqO;zv_9k=rM_v0*wxn_F+0.5*(E3hwQ-rM_v0)*wxn_F;if(zv_9k<0.0){
zv_9k=0.0;}mG9pV=0.5*E3hwQ*yZ3xv;ldlgi=HGmnq*wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*
_NEO8(wxn_F)/6.0;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(
yZ3xv)/6.0;ikGZ0=-mdAxL(-q5nqO*(l4nzo-(HGmnq+zv_9k+mG9pV)));vHzX3=-ikGZ0/q5nqO;
CQMLR=vHzX3;ia77o=0.5*ikGZ0*vHzX3;s5XEo=ia77o;sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3-
q5nqO*_NEO8(vHzX3)/6.0;y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*CQMLR+0.5*ikGZ0*lJXU0(
CQMLR)+q5nqO*_NEO8(CQMLR)/6.0;



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=E3hwQ;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-E3hwQ)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-E3hwQ,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-E3hwQ,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),E3hwQ,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=0.0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,-HGmnq,-cXGdF,(GcdhE)
);Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,(0.5*(-q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,-q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1
++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=ikGZ0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-ikGZ0)),-HGmnq,
-cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-ikGZ0,-
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),-ikGZ0,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),ikGZ0,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::J1ner:E3hwQ=lEuxB;if(E3hwQ>rM_v0){E3hwQ=rM_v0;}wxn_F=(rM_v0-E3hwQ)/
q5nqO;zv_9k=E3hwQ*wxn_F+0.5*(rM_v0-E3hwQ)*wxn_F;ldlgi=HGmnq*wxn_F+0.5*rM_v0*
lJXU0(wxn_F)-q5nqO*_NEO8(wxn_F)/6.0;ikGZ0=mdAxL(0.5*lJXU0(E3hwQ)+q5nqO*(l4nzo-(
HGmnq+zv_9k)));if(ikGZ0<E3hwQ){ikGZ0=E3hwQ;}yZ3xv=(ikGZ0-E3hwQ)/q5nqO;mG9pV=
E3hwQ*yZ3xv+0.5*(ikGZ0-E3hwQ)*yZ3xv;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*E3hwQ*lJXU0(
yZ3xv)+q5nqO*_NEO8(yZ3xv)/6.0;vHzX3=ikGZ0/q5nqO;ia77o=0.5*ikGZ0*vHzX3;sRjiD=(
HGmnq+zv_9k+mG9pV)*vHzX3+0.5*ikGZ0*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-rM_v0)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-rM_v0),(-
HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-rM_v0),(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*rM_v0),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),rM_v0,HGmnq,(GcdhE))
;Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,rM_v0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=E3hwQ;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-E3hwQ)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-E3hwQ,(
-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-E3hwQ,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),E3hwQ,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=ikGZ0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-ikGZ0)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-ikGZ0,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-ikGZ0,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),ikGZ0,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;




case BkjIW::jgijf:E3hwQ=lEuxB;if(E3hwQ>rM_v0){E3hwQ=rM_v0;}wxn_F=(rM_v0-E3hwQ)/
q5nqO;zv_9k=E3hwQ*wxn_F+0.5*(rM_v0-E3hwQ)*wxn_F;ldlgi=HGmnq*wxn_F+0.5*rM_v0*
lJXU0(wxn_F)-q5nqO*_NEO8(wxn_F)/6.0;yZ3xv=(TmpZN-E3hwQ)/q5nqO;mG9pV=E3hwQ*yZ3xv+
0.5*(TmpZN-E3hwQ)*yZ3xv;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*E3hwQ*lJXU0(yZ3xv)+q5nqO*
_NEO8(yZ3xv)/6.0;CQMLR=TmpZN/q5nqO;s5XEo=0.5*TmpZN*CQMLR;ia77o=l4nzo-HGmnq-zv_9k
-mG9pV-s5XEo;if(ia77o<0.0){ia77o=0.0;}vHzX3=ia77o/TmpZN;sRjiD=(HGmnq+zv_9k+mG9pV
)*vHzX3+0.5*TmpZN*lJXU0(vHzX3);y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*CQMLR+0.5*TmpZN*
lJXU0(CQMLR)-q5nqO*_NEO8(CQMLR)/6.0;



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-rM_v0)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-rM_v0),(-
HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-rM_v0),(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*rM_v0),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),rM_v0,HGmnq,(GcdhE))
;Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,rM_v0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=E3hwQ;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-E3hwQ)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-E3hwQ,(
-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-E3hwQ,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),E3hwQ,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;break;default:break;}return;}
