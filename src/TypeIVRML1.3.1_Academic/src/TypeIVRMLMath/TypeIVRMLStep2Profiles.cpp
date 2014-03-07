



































#include <TypeIVRMLStep2Profiles.h>
#include <TypeIVRMLPolynomial.h>
#include <TypeIVRMLStep2RootFunctions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLABK.h>
#include <math.h>


void BkjIW::Wtuko(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){cEaG8(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::_XPNu(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){ua1bv(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::AfKGO(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,YlsMh=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=
0.0,y71cs=0.0,Q7aqo=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=
0.0,Fayok=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&CE9bC,
&xATia,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


YlsMh=canvx;if(YlsMh<0.0){YlsMh=0.0;}if(YlsMh>rM_v0){YlsMh=rM_v0;}
wxn_F=(rM_v0-YlsMh)/q5nqO;zv_9k=rM_v0*wxn_F-0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)-q5nqO*_NEO8(wxn_F)/6.0;if(fabs(YlsMh-TmpZN)<Gyg4K){
yZ3xv=0.0;}else{
yZ3xv=(2.0*lJXU0(YlsMh)-lJXU0(rM_v0)-4.0*YlsMh*TmpZN+2.0*rM_v0*TmpZN+2.0*lJXU0(
TmpZN)-2.0*TmpZN*Fayok*q5nqO+2.0*q5nqO*(l4nzo-HGmnq))/(2.0*q5nqO*(YlsMh-TmpZN));
}if(yZ3xv>(Fayok-(rM_v0-2.0*YlsMh+2.0*TmpZN)/q5nqO)){yZ3xv=Fayok-(rM_v0-2.0*
YlsMh+2.0*TmpZN)/q5nqO;}if(yZ3xv<0.0){yZ3xv=0.0;}mG9pV=yZ3xv*YlsMh;UczXz=(HGmnq+
zv_9k)*yZ3xv+0.5*YlsMh*lJXU0(yZ3xv);
vHzX3=(TmpZN-YlsMh)/q5nqO;ia77o=YlsMh*vHzX3+0.5*q5nqO*lJXU0(vHzX3);sRjiD=(HGmnq+
zv_9k+mG9pV)*vHzX3+0.5*YlsMh*lJXU0(vHzX3)+q5nqO*_NEO8(vHzX3)/6.0;
hTABS=TmpZN/q5nqO;fO1xN=0.5*lJXU0(TmpZN)/q5nqO;

s5XEo=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-fO1xN;if(s5XEo<0.0){s5XEo=0.0;}CQMLR=s5XEo/
TmpZN;if(CQMLR<0.0){CQMLR=0.0;}y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*CQMLR+0.5*TmpZN*
lJXU0(CQMLR);
Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*TmpZN*lJXU0(hTABS)-q5nqO*_NEO8(
hTABS)/6.0;


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=rM_v0/q5nqO-
mdAxL(lJXU0(rM_v0/q5nqO)+2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)-q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)-q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/YlsMh);k4U0s+=fabs(0.5*YlsMh*lJXU0(IXql2))+fabs(0.5*YlsMh*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=-YlsMh/q5nqO+mdAxL(lJXU0(YlsMh/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV)/q5nqO)
;if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*YlsMh*lJXU0(IXql2)+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(YlsMh+
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)+q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o)/TmpZN);k4U0s+=fabs(0.5*
TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*lJXU0(CQMLR-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(l4nzo)){k4U0s+=fabs(Q7aqo);}else{
IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+
zv_9k+mG9pV+ia77o+s5XEo)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+
fabs(0.5*(TmpZN-q5nqO*IXql2)*lJXU0(hTABS-IXql2)-q5nqO*_NEO8(hTABS-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo;TH6RH=
zv_9k+mG9pV+ia77o+s5XEo+fO1xN;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-
AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if
(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*
DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((
fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-rM_v0)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-rM_v0),(-
HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-rM_v0),(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*rM_v0),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),rM_v0,HGmnq,(GcdhE))
;Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,rM_v0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-YlsMh)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-YlsMh,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-YlsMh,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*YlsMh),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,YlsMh,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-YlsMh)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-YlsMh,(
-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-YlsMh,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*YlsMh),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),YlsMh,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,YlsMh,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::xUffV(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,YlsMh=0.0,ikGZ0=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=
0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=0.0,y71cs=
0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,k4U0s=
0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&WTxW_,
&BymT1,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


YlsMh=canvx;if(YlsMh<0.0){YlsMh=0.0;}if(YlsMh>rM_v0){YlsMh=rM_v0;}
wxn_F=(rM_v0-YlsMh)/q5nqO;zv_9k=rM_v0*wxn_F-0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)-q5nqO*_NEO8(wxn_F)/6.0;
ikGZ0=YlsMh+mdAxL((double)(0.5*(2.0*YlsMh*rM_v0-lJXU0(rM_v0)-2.0*YlsMh*Fayok*
q5nqO+2.0*q5nqO*(l4nzo-HGmnq))));if(ikGZ0<YlsMh){ikGZ0=YlsMh;}
yZ3xv=2.0*(-q5nqO*(0.5*rM_v0-0.5*Fayok*q5nqO)-q5nqO*mdAxL(YlsMh*rM_v0-0.5*lJXU0(
rM_v0)-YlsMh*Fayok*q5nqO-q5nqO*HGmnq+q5nqO*l4nzo))/lJXU0(q5nqO);if(yZ3xv<0.0){
yZ3xv=0.0;}mG9pV=yZ3xv*YlsMh;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*YlsMh*lJXU0(yZ3xv);
vHzX3=(ikGZ0-YlsMh)/q5nqO;ia77o=YlsMh*vHzX3+0.5*q5nqO*lJXU0(vHzX3);sRjiD=(HGmnq+
zv_9k+mG9pV)*vHzX3+0.5*YlsMh*lJXU0(vHzX3)+q5nqO*_NEO8(vHzX3)/6.0;
CQMLR=ikGZ0/q5nqO;s5XEo=0.5*lJXU0(ikGZ0)/q5nqO;y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*
CQMLR+0.5*ikGZ0*lJXU0(CQMLR)-q5nqO*_NEO8(CQMLR)/6.0;


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=rM_v0/q5nqO-
mdAxL(lJXU0(rM_v0/q5nqO)+2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)-q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)-q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/YlsMh);k4U0s+=fabs(0.5*YlsMh*lJXU0(IXql2))+fabs(0.5*YlsMh*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=-YlsMh/q5nqO+mdAxL(lJXU0(YlsMh/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV)/q5nqO)
;if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*YlsMh*lJXU0(IXql2)+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(YlsMh+
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)+q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(l4nzo)){k4U0s+=fabs(y71cs);}else{IXql2=
ikGZ0/q5nqO-mdAxL(lJXU0(ikGZ0/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(
IXql2<0.0){IXql2=0.0;}if(IXql2>CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV+ia77o)*IXql2+0.5*ikGZ0*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(
ikGZ0-q5nqO*IXql2)*lJXU0(CQMLR-IXql2)-q5nqO*_NEO8(CQMLR-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR;G0Jic=ldlgi+UczXz+sRjiD+y71cs;TH6RH=zv_9k+mG9pV+
ia77o+s5XEo;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>
(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=
uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(
TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs
(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-rM_v0)),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-rM_v0),(-
HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-rM_v0),(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*rM_v0),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),rM_v0,HGmnq,(GcdhE))
;Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,rM_v0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-YlsMh)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-YlsMh,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-YlsMh,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*YlsMh),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,YlsMh,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-YlsMh)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-YlsMh,(
-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-YlsMh,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*YlsMh),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),YlsMh,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,YlsMh,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=ikGZ0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-ikGZ0)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-ikGZ0,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-ikGZ0,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),ikGZ0,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::n4kFf(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){MNWe_(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::VRmzF(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){n4Q8g(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::yiHJL(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){lnpBW(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::AODkC(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){x8LZV(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::Lls1w(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){SDngL(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::Ip1bf(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){Hs4VR(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::pqeUv(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){DGcXb(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::eXwFO(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){bJoM5(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::bjBp_(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){IncL4(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::YpAcy(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){mgRzN(pJfW2,SynchronizationTime,-Dk1wk,-qPN_6,-qI8hj,-_DBry,-OFgA6,
TmpZN,q5nqO,Qy4rb,!frwbM,DohAl);return;}

void BkjIW::cEaG8(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,YlsMh=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=
0.0,y71cs=0.0,Q7aqo=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=
0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&l7EBq,
&zeNBV,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


YlsMh=canvx;if(YlsMh<rM_v0){YlsMh=rM_v0;}if(YlsMh>TmpZN){YlsMh=TmpZN;}
wxn_F=(YlsMh-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;if(fabs(TmpZN-YlsMh)<Gyg4K){
yZ3xv=0.0;}else{B8jft=(2.0*YlsMh-2.0*TmpZN);
yZ3xv=rM_v0/q5nqO-(2.0*YlsMh*rM_v0)/(B8jft*q5nqO)+(1.0*lJXU0(rM_v0))/(B8jft*
q5nqO)-(2.0*TmpZN)/q5nqO+(4.0*YlsMh*TmpZN)/(B8jft*q5nqO)-(2.0*lJXU0(TmpZN))/(
B8jft*q5nqO)-1.0*(GcdhE)+(2.0*YlsMh*(GcdhE))/B8jft+SynchronizationTime-(2.0*
YlsMh*SynchronizationTime)/B8jft-(2.0*HGmnq)/B8jft+(2.0*l4nzo)/B8jft;}if(yZ3xv<
0.0){yZ3xv=0.0;}if(yZ3xv>(Fayok-(2.0*TmpZN-rM_v0)/q5nqO)){yZ3xv=Fayok-(2.0*TmpZN
-rM_v0)/q5nqO;}mG9pV=yZ3xv*YlsMh;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*YlsMh*lJXU0(yZ3xv
);
vHzX3=(TmpZN-YlsMh)/q5nqO;ia77o=YlsMh*vHzX3+0.5*q5nqO*lJXU0(vHzX3);sRjiD=(HGmnq+
zv_9k+mG9pV)*vHzX3+0.5*YlsMh*lJXU0(vHzX3)+q5nqO*_NEO8(vHzX3)/6.0;
hTABS=TmpZN/q5nqO;fO1xN=0.5*lJXU0(TmpZN)/q5nqO;

s5XEo=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-fO1xN;if(s5XEo<0.0){s5XEo=0.0;}CQMLR=s5XEo/
TmpZN;if(CQMLR<0.0){CQMLR=0.0;}y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*CQMLR+0.5*TmpZN*
lJXU0(CQMLR);
Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*TmpZN*lJXU0(hTABS)-q5nqO*_NEO8(
hTABS)/6.0;


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/YlsMh);k4U0s+=fabs(0.5*YlsMh*lJXU0(IXql2))+fabs(0.5*YlsMh*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=-YlsMh/q5nqO+mdAxL(lJXU0(YlsMh/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV)/q5nqO)
;if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*YlsMh*lJXU0(IXql2)+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(YlsMh+
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)+q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o)/TmpZN);k4U0s+=fabs(0.5*
TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*lJXU0(CQMLR-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(l4nzo)){k4U0s+=fabs(Q7aqo);}else{
IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+
zv_9k+mG9pV+ia77o+s5XEo)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+
fabs(0.5*(TmpZN-q5nqO*IXql2)*lJXU0(hTABS-IXql2)-q5nqO*_NEO8(hTABS-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo;TH6RH=
zv_9k+mG9pV+ia77o+s5XEo+fO1xN;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-
AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if
(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*
DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((
fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-YlsMh)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-YlsMh,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-YlsMh,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*YlsMh),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,YlsMh,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-YlsMh)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-YlsMh,(
-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-YlsMh,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*YlsMh),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),YlsMh,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,YlsMh,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::ua1bv(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,YlsMh=0.0,E3hwQ=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=
0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=0.0,y71cs=
0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,k4U0s=
0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&RpIXV,
&Jh7fU,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);

E3hwQ=canvx;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}if(fabs(rM_v0+Fayok*q5nqO-2.0*E3hwQ)<
Gyg4K){
YlsMh=rM_v0;}else{
YlsMh=(lJXU0(rM_v0)-2.0*lJXU0(E3hwQ)-2.0*q5nqO*HGmnq+2.0*q5nqO*l4nzo)/(2.0*(
rM_v0-2.0*E3hwQ+Fayok*q5nqO));if(YlsMh<rM_v0){YlsMh=rM_v0;}}if(YlsMh>TmpZN){
YlsMh=TmpZN;}
wxn_F=(YlsMh-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
yZ3xv=(-2.0*YlsMh)/q5nqO+rM_v0/q5nqO-1.0*(GcdhE)+SynchronizationTime-(2.0*mdAxL(
1.0*lJXU0(YlsMh)-1.0*YlsMh*rM_v0+0.5*lJXU0(rM_v0)+1.0*YlsMh*q5nqO*(GcdhE)-1.0*
YlsMh*q5nqO*SynchronizationTime-1.0*q5nqO*HGmnq+1.0*q5nqO*l4nzo))/q5nqO;if(yZ3xv
<0.0){yZ3xv=0.0;}if(yZ3xv>(Fayok-(2.0*E3hwQ-rM_v0)/q5nqO)){yZ3xv=(Fayok-(2.0*
E3hwQ-rM_v0)/q5nqO);}mG9pV=yZ3xv*YlsMh;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*YlsMh*lJXU0
(yZ3xv);
vHzX3=(E3hwQ-YlsMh)/q5nqO;ia77o=YlsMh*vHzX3+0.5*q5nqO*lJXU0(vHzX3);sRjiD=(HGmnq+
zv_9k+mG9pV)*vHzX3+0.5*YlsMh*lJXU0(vHzX3)+q5nqO*_NEO8(vHzX3)/6.0;
CQMLR=E3hwQ/q5nqO;s5XEo=0.5*lJXU0(E3hwQ)/q5nqO;y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*
CQMLR+0.5*E3hwQ*lJXU0(CQMLR)-q5nqO*_NEO8(CQMLR)/6.0;


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)-q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)-q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/YlsMh);k4U0s+=fabs(0.5*YlsMh*lJXU0(IXql2))+fabs(0.5*YlsMh*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=-YlsMh/q5nqO+mdAxL(lJXU0(YlsMh/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV)/q5nqO)
;if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*YlsMh*lJXU0(IXql2)+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(YlsMh+
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)+q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(l4nzo)){k4U0s+=fabs(y71cs);}else{IXql2=
E3hwQ/q5nqO-mdAxL(lJXU0(E3hwQ/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(
IXql2<0.0){IXql2=0.0;}if(IXql2>CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV+ia77o)*IXql2+0.5*E3hwQ*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(
E3hwQ-q5nqO*IXql2)*lJXU0(CQMLR-IXql2)-q5nqO*_NEO8(CQMLR-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR;G0Jic=ldlgi+UczXz+sRjiD+y71cs;TH6RH=zv_9k+mG9pV+
ia77o+s5XEo;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>
(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=
uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(
TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs
(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-rM_v0)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-q5nqO)*0.5),(-rM_v0)
,(-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-q5nqO),(-rM_v0),(
GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*rM_v0),HGmnq,
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),rM_v0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,rM_v0,(GcdhE));}Qy4rb->
So6Nc[Qy4rb->Ti1i1]=(GcdhE)+wxn_F;Qy4rb->Ti1i1++;
GcdhE+=(wxn_F);cXGdF+=ldlgi;HGmnq+=zv_9k;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-YlsMh)),(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-YlsMh,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-YlsMh,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*YlsMh),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,YlsMh,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+yZ3xv;Qy4rb->Ti1i1++;
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(-YlsMh)),(-HGmnq
),(-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),-YlsMh,(
-HGmnq),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,-YlsMh,(GcdhE))
;}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*YlsMh),HGmnq,cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),YlsMh,HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,YlsMh,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=E3hwQ;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-E3hwQ)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-E3hwQ,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-E3hwQ,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*E3hwQ),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),E3hwQ,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,E3hwQ,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::MNWe_(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,YlsMh=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=
0.0,y71cs=0.0,Q7aqo=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=
0.0,Fayok=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&mJ3yJ,
&MZ2jd,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);

yZ3xv=canvx;if(yZ3xv<0.0){yZ3xv=0.0;}
wxn_F=(TmpZN-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
mG9pV=yZ3xv*TmpZN;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);if(fabs(rM_v0
-2.0*TmpZN-q5nqO*yZ3xv-q5nqO*(GcdhE)+q5nqO*SynchronizationTime)<Gyg4K){

YlsMh=TmpZN;}else{YlsMh=(q5nqO*((1.0*lJXU0(rM_v0))/q5nqO-(2.0*lJXU0(TmpZN))/
q5nqO-2.0*TmpZN*yZ3xv-2.0*HGmnq+2.0*l4nzo))/(2.0*rM_v0-4.0*TmpZN-2.0*q5nqO*yZ3xv
-2.0*q5nqO*(GcdhE)+2.0*q5nqO*SynchronizationTime);if(YlsMh<=0.0){YlsMh=CshoR;}if
(YlsMh>TmpZN){YlsMh=TmpZN;}}
vHzX3=(TmpZN-YlsMh)/q5nqO;ia77o=TmpZN*vHzX3-0.5*q5nqO*lJXU0(vHzX3);sRjiD=(HGmnq+
zv_9k+mG9pV)*vHzX3+0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;
hTABS=YlsMh/q5nqO;fO1xN=0.5*lJXU0(YlsMh)/q5nqO;

s5XEo=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-fO1xN;if(s5XEo<0.0){s5XEo=0.0;}if(fabs(YlsMh
)<Gyg4K){CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3-YlsMh/q5nqO;}else{
CQMLR=s5XEo/YlsMh;}if(CQMLR<0.0){CQMLR=0.0;}y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*
CQMLR+0.5*YlsMh*lJXU0(CQMLR);
Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*YlsMh*lJXU0(hTABS)-q5nqO*_NEO8(
hTABS)/6.0;


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV)/q5nqO);
if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)-q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o)/YlsMh);k4U0s+=fabs(0.5*
YlsMh*lJXU0(IXql2))+fabs(0.5*YlsMh*lJXU0(CQMLR-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(l4nzo)){k4U0s+=fabs(Q7aqo);}else{
IXql2=YlsMh/q5nqO-mdAxL(lJXU0(YlsMh/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+
zv_9k+mG9pV+ia77o+s5XEo)*IXql2+0.5*YlsMh*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+
fabs(0.5*(YlsMh-q5nqO*IXql2)*lJXU0(hTABS-IXql2)-q5nqO*_NEO8(hTABS-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo;TH6RH=
zv_9k+mG9pV+ia77o+s5XEo+fO1xN;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-
AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if
(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*
DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((
fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



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
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*YlsMh),(-HGmnq),(-cXGdF),(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-YlsMh,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-YlsMh,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*YlsMh),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,YlsMh,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=YlsMh;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),(-0.5*YlsMh),(-HGmnq),(
-cXGdF),(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-YlsMh,(-HGmnq
),(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-YlsMh,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*YlsMh),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),YlsMh,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::x8LZV(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=0.0,SMkYE=
0.0,aPBT1=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,b0cue=0.0,W013Z=
0.0,ldlgi=0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,EQRtt=0.0,RKVjR=0.0,N3uJA=
0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=
0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&tDZWV,
&GuUm1,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);

yZ3xv=canvx;if(yZ3xv<0.0){yZ3xv=0.0;}
wxn_F=(TmpZN-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
mG9pV=yZ3xv*TmpZN;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);
vHzX3=TmpZN/q5nqO;ia77o=0.5*lJXU0(TmpZN)/q5nqO;sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+
0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;

s5XEo=0.0;

hTABS=vHzX3;fO1xN=-ia77o;Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS-q5nqO*_NEO8
(hTABS)/6.0;
aPBT1=vHzX3;W013Z=-ia77o;

b0cue=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-s5XEo-fO1xN-W013Z;SMkYE=b0cue/(-TmpZN);EQRtt
=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*SMkYE-0.5*TmpZN*lJXU0(SMkYE);
RKVjR=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)*aPBT1-0.5*TmpZN*lJXU0(aPBT1)+
q5nqO*_NEO8(aPBT1)/6.0;
y71cs=uRwD_-cXGdF-ldlgi-UczXz-sRjiD-Q7aqo-EQRtt-RKVjR;if((fabs(HGmnq+zv_9k+mG9pV
+ia77o)<RgnoL)||(fabs(y71cs)<RgnoL)){CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv
-vHzX3-hTABS-SMkYE-aPBT1;}else{B8jft=(HGmnq+zv_9k+mG9pV+ia77o);if(B8jft==0.0){
CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3-hTABS-SMkYE-aPBT1;}else{CQMLR=
y71cs/B8jft;}}if(CQMLR<0.0){CQMLR=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV)/q5nqO);
if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)-q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
k4U0s+=fabs(y71cs);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+
fO1xN)){k4U0s+=fabs(Q7aqo);}else{IXql2=mdAxL(2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)
/q5nqO);if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo)
*IXql2-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(-q5nqO*IXql2)*lJXU0(hTABS-IXql2)-q5nqO*
_NEO8(hTABS-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+
s5XEo+fO1xN+b0cue)){k4U0s+=fabs(EQRtt);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o
+s5XEo+fO1xN)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*lJXU0(
SMkYE-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)==ErhpP(l4nzo)){k4U0s+=fabs(
RKVjR);}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV+
ia77o+s5XEo+fO1xN+b0cue)/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>aPBT1){IXql2=
aPBT1;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)*IXql2-0.5*TmpZN*
lJXU0(IXql2)+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(-TmpZN+q5nqO*IXql2)*lJXU0(aPBT1-
IXql2)+q5nqO*_NEO8(aPBT1-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN)+fabs(b0cue)+
fabs(W013Z);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS+SMkYE+aPBT1;G0Jic=ldlgi+UczXz+sRjiD+y71cs+
Q7aqo+EQRtt+RKVjR;TH6RH=zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue+W013Z;if(AwAl0!=0.0)
{GkBLV=SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(
SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=uRwD_-
cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(TH6RH!=
0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC)
)?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



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
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=(0x19c6+971-0x1d91);

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=(0x4ef+3645-0x132c);

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
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::SDngL(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,ikGZ0=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,SMkYE=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,b0cue=0.0,ldlgi=
0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,EQRtt=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=
0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=
0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&Q9C_h,
&RISzg,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);

ikGZ0=canvx;if(ikGZ0>0.0){ikGZ0=0.0;}
wxn_F=(TmpZN-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
vHzX3=TmpZN/q5nqO;ia77o=0.5*lJXU0(TmpZN)/q5nqO;


s5XEo=0.0;

hTABS=(-ikGZ0)/q5nqO;fO1xN=-0.5*lJXU0(ikGZ0)/q5nqO;

SMkYE=hTABS;b0cue=fO1xN;

mG9pV=l4nzo-HGmnq-zv_9k-ia77o-s5XEo-fO1xN-b0cue;if(mG9pV<0.0){mG9pV=0.0;}yZ3xv=
mG9pV/TmpZN;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);
sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;
Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS-q5nqO*_NEO8(hTABS)/6.0;
EQRtt=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*SMkYE+0.5*ikGZ0*lJXU0(SMkYE)+q5nqO*
_NEO8(SMkYE)/6.0;
y71cs=uRwD_-cXGdF-ldlgi-UczXz-sRjiD-Q7aqo-EQRtt;if((fabs(HGmnq+zv_9k+mG9pV+ia77o
)<RgnoL)||(fabs(y71cs)<RgnoL)){CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3
-hTABS-SMkYE;}else{B8jft=(HGmnq+zv_9k+mG9pV+ia77o);if(B8jft==0.0){CQMLR=
SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3-hTABS-SMkYE;}else{CQMLR=y71cs/B8jft;
}}if(CQMLR<0.0){CQMLR=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV)/q5nqO);
if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)-q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
k4U0s+=fabs(y71cs);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+
fO1xN)){k4U0s+=fabs(Q7aqo);}else{IXql2=mdAxL(2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)
/q5nqO);if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo)
*IXql2-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(-q5nqO*IXql2)*lJXU0(hTABS-IXql2)-q5nqO*
_NEO8(hTABS-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)==ErhpP(l4nzo)){k4U0s+=fabs(EQRtt);
}else{IXql2=ikGZ0/q5nqO-mdAxL(lJXU0(ikGZ0/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV+ia77o+
s5XEo+fO1xN)/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>SMkYE){IXql2=SMkYE;}k4U0s
+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*IXql2+0.5*ikGZ0*lJXU0(IXql2)+q5nqO*
_NEO8(IXql2)/6.0)+fabs(0.5*(ikGZ0+q5nqO*IXql2)*lJXU0(SMkYE-IXql2)+q5nqO*_NEO8(
SMkYE-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN)+fabs(b0cue);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS+SMkYE;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo+
EQRtt;TH6RH=zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue;if(AwAl0!=0.0){GkBLV=
SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE
)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(
fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;
if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*
DohAl=true;}}



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
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=(0x393+2173-0xc10);

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=(0x7d9+235-0x8c4);

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
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::n4Q8g(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=0.0,SMkYE=
0.0,aPBT1=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,b0cue=0.0,W013Z=
0.0,ldlgi=0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,EQRtt=0.0,RKVjR=0.0,N3uJA=
0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=
0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&WAM8Y,
&UiDtI,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);

yZ3xv=canvx;if(yZ3xv<0.0){yZ3xv=0.0;}
wxn_F=(TmpZN-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
mG9pV=yZ3xv*TmpZN;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);
vHzX3=TmpZN/q5nqO;ia77o=0.5*lJXU0(TmpZN)/q5nqO;sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+
0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;

s5XEo=0.0;

hTABS=vHzX3;fO1xN=ia77o;Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+q5nqO*_NEO8(
hTABS)/6.0;
aPBT1=vHzX3;W013Z=ia77o;

b0cue=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-s5XEo-fO1xN-W013Z;if(b0cue<0.0){b0cue=0.0;}
SMkYE=b0cue/TmpZN;EQRtt=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*SMkYE+0.5*TmpZN*
lJXU0(SMkYE);
RKVjR=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)*aPBT1+0.5*TmpZN*lJXU0(aPBT1)-
q5nqO*_NEO8(aPBT1)/6.0;
y71cs=uRwD_-cXGdF-ldlgi-UczXz-sRjiD-Q7aqo-EQRtt-RKVjR;if((fabs(HGmnq+zv_9k+mG9pV
+ia77o)<RgnoL)||(fabs(y71cs)<RgnoL)){CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv
-vHzX3-hTABS-SMkYE-aPBT1;}else{B8jft=(HGmnq+zv_9k+mG9pV+ia77o);if(B8jft==0.0){
CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3-hTABS-SMkYE-aPBT1;}else{CQMLR=
y71cs/B8jft;}}if(CQMLR<0.0){CQMLR=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV)/q5nqO);
if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)-q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
k4U0s+=fabs(y71cs);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+
fO1xN)){k4U0s+=fabs(Q7aqo);}else{IXql2=mdAxL(-2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo
)/q5nqO);if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo
)*IXql2+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(q5nqO*IXql2)*lJXU0(hTABS-IXql2)+q5nqO*
_NEO8(hTABS-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+
s5XEo+fO1xN+b0cue)){k4U0s+=fabs(EQRtt);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o
+s5XEo+fO1xN)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*lJXU0(
SMkYE-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)==ErhpP(l4nzo)){k4U0s+=fabs(
RKVjR);}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+
ia77o+s5XEo+fO1xN+b0cue)/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>aPBT1){IXql2=
aPBT1;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)*IXql2+0.5*TmpZN*
lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-q5nqO*IXql2)*lJXU0(aPBT1-
IXql2)-q5nqO*_NEO8(aPBT1-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN)+fabs(b0cue)+
fabs(W013Z);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS+SMkYE+aPBT1;G0Jic=ldlgi+UczXz+sRjiD+y71cs+
Q7aqo+EQRtt+RKVjR;TH6RH=zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue+W013Z;if(AwAl0!=0.0)
{GkBLV=SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(
SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=uRwD_-
cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(TH6RH!=
0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC)
)?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



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
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=(0x5c4+8362-0x266e);

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=(0xf77+2875-0x1ab2);

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,(-HGmnq),(GcdhE
));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}else{Qy4rb->
ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[
Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(q5nqO)),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+
hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=TmpZN;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+aPBT1;Qy4rb->Ti1i1++;
GcdhE+=(aPBT1);cXGdF+=RKVjR;HGmnq+=W013Z;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::lnpBW(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,ikGZ0=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,SMkYE=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,b0cue=0.0,ldlgi=
0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,EQRtt=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=
0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=
0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&xWi_u,
&ndbIr,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);

ikGZ0=canvx;if(ikGZ0<0.0){ikGZ0=0.0;}
wxn_F=(TmpZN-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
vHzX3=TmpZN/q5nqO;ia77o=0.5*lJXU0(TmpZN)/q5nqO;


s5XEo=0.0;

hTABS=ikGZ0/q5nqO;fO1xN=0.5*lJXU0(ikGZ0)/q5nqO;

SMkYE=hTABS;b0cue=fO1xN;

mG9pV=l4nzo-HGmnq-zv_9k-ia77o-s5XEo-fO1xN-b0cue;if(mG9pV<0.0){mG9pV=0.0;}yZ3xv=
mG9pV/TmpZN;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*TmpZN*lJXU0(yZ3xv);
sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+0.5*TmpZN*lJXU0(vHzX3)-q5nqO*_NEO8(vHzX3)/6.0;
Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+q5nqO*_NEO8(hTABS)/6.0;
EQRtt=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*SMkYE+0.5*ikGZ0*lJXU0(SMkYE)-q5nqO*
_NEO8(SMkYE)/6.0;
y71cs=uRwD_-cXGdF-ldlgi-UczXz-sRjiD-Q7aqo-EQRtt;if((fabs(HGmnq+zv_9k+mG9pV+ia77o
)<RgnoL)||(fabs(y71cs)<RgnoL)){CQMLR=SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3
-hTABS-SMkYE;}else{B8jft=(HGmnq+zv_9k+mG9pV+ia77o);if(B8jft==0.0){CQMLR=
SynchronizationTime-GcdhE-wxn_F-yZ3xv-vHzX3-hTABS-SMkYE;}else{CQMLR=y71cs/B8jft;
}}if(CQMLR<0.0){CQMLR=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
fabs((HGmnq+zv_9k)/TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*
lJXU0(yZ3xv-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV)/q5nqO);
if(IXql2<0.0){IXql2=0.0;}if(IXql2>vHzX3){IXql2=vHzX3;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-
q5nqO*IXql2)*lJXU0(vHzX3-IXql2)-q5nqO*_NEO8(vHzX3-IXql2)/6.0);}
k4U0s+=fabs(y71cs);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+
fO1xN)){k4U0s+=fabs(Q7aqo);}else{IXql2=mdAxL(-2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo
)/q5nqO);if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo
)*IXql2+q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(q5nqO*IXql2)*lJXU0(hTABS-IXql2)+q5nqO*
_NEO8(hTABS-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)==ErhpP(l4nzo)){k4U0s+=fabs(EQRtt);
}else{IXql2=ikGZ0/q5nqO-mdAxL(lJXU0(ikGZ0/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o+
s5XEo+fO1xN+b0cue)/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>SMkYE){IXql2=SMkYE;}
k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue)*IXql2+0.5*ikGZ0*lJXU0(
IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(ikGZ0-q5nqO*IXql2)*lJXU0(SMkYE-IXql2)-
q5nqO*_NEO8(SMkYE-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN)+fabs(b0cue);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS+SMkYE;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo+
EQRtt;TH6RH=zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue;if(AwAl0!=0.0){GkBLV=
SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE
)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(
fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;
if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*
DohAl=true;}}



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
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=(0x192c+2452-0x22c0);

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=(0xd6+1617-0x727);

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,(-HGmnq),(-cXGdF),
(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,(-HGmnq),(GcdhE
));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}else{Qy4rb->
ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[
Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1
].TL5H9(0.0,0.0,q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+hTABS;
Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=ikGZ0;

if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-ikGZ0)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-ikGZ0,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-ikGZ0,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),ikGZ0,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::Hs4VR(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,E3hwQ=0.0,YlsMh=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=
0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,ldlgi=0.0,UczXz=0.0,sRjiD=0.0,y71cs=
0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,k4U0s=
0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&TBVIO,
&TtGPk,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


E3hwQ=canvx;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}
wxn_F=(E3hwQ-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;if(fabs(rM_v0-2.0*E3hwQ-
q5nqO*(GcdhE)+q5nqO*SynchronizationTime)<Gyg4K){

YlsMh=0.0;}else{
YlsMh=(q5nqO*((1.0*lJXU0(rM_v0))/q5nqO-(2.0*lJXU0(E3hwQ))/q5nqO-2.0*HGmnq+2.0*
l4nzo))/(2.0*rM_v0-4.0*E3hwQ-2.0*q5nqO*(GcdhE)+2.0*q5nqO*SynchronizationTime);if
(YlsMh<0.0){YlsMh=CshoR;}if(YlsMh>E3hwQ){YlsMh=E3hwQ;}}
yZ3xv=(E3hwQ-YlsMh)/q5nqO;mG9pV=E3hwQ*yZ3xv-0.5*q5nqO*lJXU0(yZ3xv);UczXz=(HGmnq+
zv_9k)*yZ3xv+0.5*E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;
CQMLR=YlsMh/q5nqO;s5XEo=0.5*lJXU0(YlsMh)/q5nqO;

ia77o=l4nzo-HGmnq-zv_9k-mG9pV-s5XEo;if(ia77o<0.0){ia77o=0.0;}if(YlsMh<Gyg4K){
vHzX3=Fayok-(2.0*E3hwQ-rM_v0)/q5nqO;}else{vHzX3=ia77o/YlsMh;}if(vHzX3<0.0){vHzX3
=0.0;}sRjiD=(HGmnq+zv_9k+mG9pV)*vHzX3+0.5*YlsMh*lJXU0(vHzX3);
y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*CQMLR+0.5*YlsMh*lJXU0(CQMLR)-q5nqO*_NEO8(CQMLR)/
6.0;


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
E3hwQ/q5nqO-mdAxL(lJXU0(E3hwQ/q5nqO)+2.0*(HGmnq+zv_9k)/q5nqO);if(IXql2<0.0){
IXql2=0.0;}if(IXql2>yZ3xv){IXql2=yZ3xv;}k4U0s+=fabs((HGmnq+zv_9k)*IXql2+0.5*
E3hwQ*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(E3hwQ-q5nqO*IXql2)*lJXU0(
yZ3xv-IXql2)-q5nqO*_NEO8(yZ3xv-IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o)){k4U0s+=fabs(sRjiD);
}else{IXql2=fabs((HGmnq+zv_9k+mG9pV)/YlsMh);k4U0s+=fabs(0.5*YlsMh*lJXU0(IXql2))+
fabs(0.5*YlsMh*lJXU0(vHzX3-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(l4nzo)){k4U0s+=fabs(y71cs);}else{IXql2=
YlsMh/q5nqO-mdAxL(lJXU0(YlsMh/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(
IXql2<0.0){IXql2=0.0;}if(IXql2>CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+
mG9pV+ia77o)*IXql2+0.5*YlsMh*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(
YlsMh-q5nqO*IXql2)*lJXU0(CQMLR-IXql2)-q5nqO*_NEO8(CQMLR-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR;G0Jic=ldlgi+UczXz+sRjiD+y71cs;TH6RH=fabs(zv_9k)+
fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo);if(AwAl0!=0.0){GkBLV=SynchronizationTime-
GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=
true;}}if(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+
kwL78)){*DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(
nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



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
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=YlsMh;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*YlsMh),(-HGmnq),(-cXGdF),(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-YlsMh,(-HGmnq),(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-YlsMh,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb
->Ti1i1].TL5H9(0.0,(0.5*YlsMh),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,YlsMh,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=YlsMh;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(-0.5*YlsMh),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-YlsMh,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-YlsMh,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*YlsMh),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),YlsMh,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,YlsMh,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+CQMLR;Qy4rb->Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::IncL4(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,E3hwQ=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,SMkYE=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,b0cue=0.0,ldlgi=
0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,EQRtt=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=
0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=
0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&nVEbT,
&fkuCH,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


E3hwQ=canvx;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}
wxn_F=(E3hwQ-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
yZ3xv=E3hwQ/q5nqO;mG9pV=0.5*lJXU0(E3hwQ)/q5nqO;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*
E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;

ia77o=0.0;

CQMLR=TmpZN/q5nqO;s5XEo=-0.5*lJXU0(TmpZN)/q5nqO;y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*
CQMLR-q5nqO*_NEO8(CQMLR)/6.0;
SMkYE=CQMLR;b0cue=s5XEo;

fO1xN=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-s5XEo-b0cue;if(fO1xN>0.0){b0cue=0.0;}hTABS=
fO1xN/(-TmpZN);Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*(-TmpZN)*lJXU0(
hTABS);
EQRtt=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*SMkYE+0.5*(-TmpZN)*lJXU0(SMkYE)+
q5nqO*_NEO8(SMkYE)/6.0;
sRjiD=uRwD_-cXGdF-ldlgi-UczXz-y71cs-Q7aqo-EQRtt;if((fabs(HGmnq+zv_9k+mG9pV)<
RgnoL)||(fabs(sRjiD)<RgnoL)){vHzX3=SynchronizationTime-GcdhE-wxn_F-yZ3xv-CQMLR-
hTABS-SMkYE;}else{B8jft=(HGmnq+zv_9k+mG9pV);if(B8jft==0.0){vHzX3=
SynchronizationTime-GcdhE-wxn_F-yZ3xv-CQMLR-hTABS-SMkYE;}else{vHzX3=sRjiD/B8jft;
}}if(vHzX3<0.0){vHzX3=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
E3hwQ/q5nqO-mdAxL(lJXU0(E3hwQ/q5nqO)+2.0*(HGmnq+zv_9k)/q5nqO);if(IXql2<0.0){
IXql2=0.0;}if(IXql2>yZ3xv){IXql2=yZ3xv;}k4U0s+=fabs((HGmnq+zv_9k)*IXql2+0.5*
E3hwQ*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(E3hwQ-q5nqO*IXql2)*lJXU0(
yZ3xv-IXql2)-q5nqO*_NEO8(yZ3xv-IXql2)/6.0);}
k4U0s+=fabs(sRjiD);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=mdAxL(2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(IXql2>
CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o)*IXql2-q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(-q5nqO*IXql2)*lJXU0(CQMLR-IXql2)-q5nqO*_NEO8(CQMLR-IXql2)/
6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+
fO1xN)){k4U0s+=fabs(Q7aqo);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*lJXU0(hTABS-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)==ErhpP(l4nzo)){k4U0s+=fabs(EQRtt);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV+ia77o+
s5XEo+fO1xN)/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>SMkYE){IXql2=SMkYE;}k4U0s
+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*IXql2-0.5*TmpZN*lJXU0(IXql2)+q5nqO*
_NEO8(IXql2)/6.0)+fabs(0.5*(-TmpZN+q5nqO*IXql2)*lJXU0(SMkYE-IXql2)+q5nqO*_NEO8(
SMkYE-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN)+fabs(b0cue);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS+SMkYE;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo+
EQRtt;TH6RH=zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue;if(AwAl0!=0.0){GkBLV=
SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE
)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(
fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;
if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*
DohAl=true;}}



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
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::mgRzN(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,E3hwQ=0.0,ikGZ0=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=
0.0,hTABS=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,ldlgi=0.0,UczXz=
0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=
0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&kWifK,
&Rj9UO,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


E3hwQ=canvx;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}
wxn_F=(E3hwQ-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
yZ3xv=E3hwQ/q5nqO;mG9pV=0.5*lJXU0(E3hwQ)/q5nqO;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*
E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;

ia77o=0.0;

ikGZ0=-mdAxL((-l4nzo+HGmnq+zv_9k+mG9pV+ia77o)*q5nqO);
CQMLR=(-ikGZ0)/q5nqO;;s5XEo=-0.5*lJXU0(ikGZ0)/q5nqO;y71cs=(HGmnq+zv_9k+mG9pV+
ia77o)*CQMLR-q5nqO*_NEO8(CQMLR)/6.0;
hTABS=CQMLR;fO1xN=s5XEo;Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*(ikGZ0)*
lJXU0(hTABS)+q5nqO*_NEO8(hTABS)/6.0;
sRjiD=uRwD_-cXGdF-ldlgi-UczXz-y71cs-Q7aqo;if((fabs(HGmnq+zv_9k+mG9pV)<RgnoL)||(
fabs(sRjiD)<RgnoL)){vHzX3=SynchronizationTime-GcdhE-wxn_F-yZ3xv-CQMLR-hTABS;}
else{B8jft=(HGmnq+zv_9k+mG9pV);if(B8jft==0.0){vHzX3=SynchronizationTime-GcdhE-
wxn_F-yZ3xv-CQMLR-hTABS;}else{vHzX3=sRjiD/B8jft;}}if(vHzX3<0.0){vHzX3=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
E3hwQ/q5nqO-mdAxL(lJXU0(E3hwQ/q5nqO)+2.0*(HGmnq+zv_9k)/q5nqO);if(IXql2<0.0){
IXql2=0.0;}if(IXql2>yZ3xv){IXql2=yZ3xv;}k4U0s+=fabs((HGmnq+zv_9k)*IXql2+0.5*
E3hwQ*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(E3hwQ-q5nqO*IXql2)*lJXU0(
yZ3xv-IXql2)-q5nqO*_NEO8(yZ3xv-IXql2)/6.0);}
k4U0s+=fabs(sRjiD);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=mdAxL(2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(IXql2>
CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o)*IXql2-q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(-q5nqO*IXql2)*lJXU0(CQMLR-IXql2)-q5nqO*_NEO8(CQMLR-IXql2)/
6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(l4nzo)){k4U0s+=fabs(Q7aqo);}else{
IXql2=-ikGZ0/q5nqO-mdAxL(lJXU0(ikGZ0/q5nqO)-2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+
zv_9k+mG9pV+ia77o+s5XEo)*IXql2+0.5*ikGZ0*lJXU0(IXql2)+q5nqO*_NEO8(IXql2)/6.0)+
fabs(0.5*(ikGZ0+q5nqO*IXql2)*lJXU0(hTABS-IXql2)+q5nqO*_NEO8(hTABS-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo;TH6RH=
zv_9k+mG9pV+ia77o+s5XEo+fO1xN;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-
AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if
(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*
DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((
fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



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
GcdhE+=(yZ3xv);cXGdF+=UczXz;HGmnq+=mG9pV;rM_v0=(0x92b+4363-0x1a36);


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-HGmnq),(-cXGdF),(GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-HGmnq),(GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb
->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+vHzX3;Qy4rb->Ti1i1++;
GcdhE+=(vHzX3);cXGdF+=sRjiD;HGmnq+=ia77o;rM_v0=(0x4b5+1334-0x9eb);


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
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::DGcXb(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,E3hwQ=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=0.0,hTABS=
0.0,SMkYE=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,b0cue=0.0,ldlgi=
0.0,UczXz=0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,EQRtt=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=
0.0,G0Jic=0.0,TH6RH=0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=
0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&ylIwh,
&DfW27,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


E3hwQ=canvx;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}
wxn_F=(E3hwQ-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
yZ3xv=E3hwQ/q5nqO;mG9pV=0.5*lJXU0(E3hwQ)/q5nqO;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*
E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;

ia77o=0.0;

CQMLR=TmpZN/q5nqO;;s5XEo=0.5*lJXU0(TmpZN)/q5nqO;y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*
CQMLR+q5nqO*_NEO8(CQMLR)/6.0;
SMkYE=CQMLR;b0cue=s5XEo;

fO1xN=l4nzo-HGmnq-zv_9k-mG9pV-ia77o-s5XEo-b0cue;if(fO1xN<0.0){fO1xN=0.0;}hTABS=
fO1xN/TmpZN;Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*TmpZN*lJXU0(hTABS);
EQRtt=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*SMkYE+0.5*TmpZN*lJXU0(SMkYE)-q5nqO*
_NEO8(SMkYE)/6.0;
sRjiD=uRwD_-cXGdF-ldlgi-UczXz-y71cs-Q7aqo-EQRtt;if((fabs(HGmnq+zv_9k+mG9pV)<
RgnoL)||(fabs(sRjiD)<RgnoL)){vHzX3=SynchronizationTime-GcdhE-wxn_F-yZ3xv-CQMLR-
hTABS-SMkYE;}else{B8jft=(HGmnq+zv_9k+mG9pV);if(B8jft==0.0){vHzX3=
SynchronizationTime-GcdhE-wxn_F-yZ3xv-CQMLR-hTABS-SMkYE;}else{vHzX3=sRjiD/B8jft;
}}if(vHzX3<0.0){vHzX3=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
E3hwQ/q5nqO-mdAxL(lJXU0(E3hwQ/q5nqO)+2.0*(HGmnq+zv_9k)/q5nqO);if(IXql2<0.0){
IXql2=0.0;}if(IXql2>yZ3xv){IXql2=yZ3xv;}k4U0s+=fabs((HGmnq+zv_9k)*IXql2+0.5*
E3hwQ*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(E3hwQ-q5nqO*IXql2)*lJXU0(
yZ3xv-IXql2)-q5nqO*_NEO8(yZ3xv-IXql2)/6.0);}
k4U0s+=fabs(sRjiD);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=mdAxL(-2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(IXql2>
CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o)*IXql2+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(q5nqO*IXql2)*lJXU0(CQMLR-IXql2)+q5nqO*_NEO8(CQMLR-IXql2)/
6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+
fO1xN)){k4U0s+=fabs(Q7aqo);}else{IXql2=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
TmpZN);k4U0s+=fabs(0.5*TmpZN*lJXU0(IXql2))+fabs(0.5*TmpZN*lJXU0(hTABS-IXql2));}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)==ErhpP(l4nzo)){k4U0s+=fabs(EQRtt);
}else{IXql2=TmpZN/q5nqO-mdAxL(lJXU0(TmpZN/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o+
s5XEo+fO1xN)/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>SMkYE){IXql2=SMkYE;}k4U0s
+=fabs((HGmnq+zv_9k+mG9pV+ia77o+s5XEo+fO1xN)*IXql2+0.5*TmpZN*lJXU0(IXql2)-q5nqO*
_NEO8(IXql2)/6.0)+fabs(0.5*(TmpZN-q5nqO*IXql2)*lJXU0(SMkYE-IXql2)-q5nqO*_NEO8(
SMkYE-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN)+fabs(b0cue);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS+SMkYE;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo+
EQRtt;TH6RH=zv_9k+mG9pV+ia77o+s5XEo+fO1xN+b0cue;if(AwAl0!=0.0){GkBLV=
SynchronizationTime-GcdhE-AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE
)+KUmEn)){*DohAl=true;}}if(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(
fabs(ckOJo*k4U0s)+kwL78)){*DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;
if(fabs(gB33k)>(nwkmK*fabs((fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*
DohAl=true;}}



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


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,-HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[
Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9
(0.0,0.0,q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->
Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=TmpZN;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-TmpZN)),-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,-HGmnq,(GcdhE));Qy4rb->
sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*TmpZN),HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].
TL5H9(0.0,0.0,TmpZN,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,
TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=(0x1053+5042-0x2405);


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-TmpZN)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-TmpZN,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-TmpZN,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*TmpZN),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),TmpZN,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,TmpZN,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+SMkYE;Qy4rb->Ti1i1++;
GcdhE+=(SMkYE);cXGdF+=EQRtt;HGmnq+=b0cue;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}

void BkjIW::bJoM5(const double&pJfW2,const double&SynchronizationTime,const 
double&Dk1wk,const double&qPN_6,const double&qI8hj,const double&_DBry,const 
double&OFgA6,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM,
bool*DohAl){double canvx=0.0,cXGdF=Dk1wk,uRwD_=qPN_6,HGmnq=qI8hj,l4nzo=_DBry,
rM_v0=OFgA6,GcdhE=pJfW2,E3hwQ=0.0,ikGZ0=0.0,wxn_F=0.0,yZ3xv=0.0,vHzX3=0.0,CQMLR=
0.0,hTABS=0.0,zv_9k=0.0,mG9pV=0.0,ia77o=0.0,s5XEo=0.0,fO1xN=0.0,ldlgi=0.0,UczXz=
0.0,sRjiD=0.0,y71cs=0.0,Q7aqo=0.0,N3uJA=0.0,gB33k=0.0,GkBLV=0.0,G0Jic=0.0,TH6RH=
0.0,AwAl0=0.0,Fayok=0.0,B8jft=0.0,k4U0s=0.0,Qv2GC=0.0,IXql2=0.0;

if(rM_v0>TmpZN){rM_v0=TmpZN;}Fayok=SynchronizationTime-GcdhE;canvx=rL86M(&LbUaV,
&m9XAw,cXGdF,uRwD_,HGmnq,l4nzo,rM_v0,TmpZN,q5nqO,Fayok);


E3hwQ=canvx;if(E3hwQ<rM_v0){E3hwQ=rM_v0;}
wxn_F=(E3hwQ-rM_v0)/q5nqO;zv_9k=rM_v0*wxn_F+0.5*q5nqO*lJXU0(wxn_F);ldlgi=HGmnq*
wxn_F+0.5*rM_v0*lJXU0(wxn_F)+q5nqO*_NEO8(wxn_F)/6.0;
yZ3xv=E3hwQ/q5nqO;mG9pV=0.5*lJXU0(E3hwQ)/q5nqO;UczXz=(HGmnq+zv_9k)*yZ3xv+0.5*
E3hwQ*lJXU0(yZ3xv)-q5nqO*_NEO8(yZ3xv)/6.0;

ia77o=0.0;

ikGZ0=mdAxL((l4nzo-HGmnq-zv_9k-mG9pV-ia77o)*q5nqO);
CQMLR=ikGZ0/q5nqO;;s5XEo=0.5*lJXU0(ikGZ0)/q5nqO;y71cs=(HGmnq+zv_9k+mG9pV+ia77o)*
CQMLR+q5nqO*_NEO8(CQMLR)/6.0;
hTABS=CQMLR;fO1xN=s5XEo;Q7aqo=(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)*hTABS+0.5*(ikGZ0)*
lJXU0(hTABS)-q5nqO*_NEO8(hTABS)/6.0;
sRjiD=uRwD_-cXGdF-ldlgi-UczXz-y71cs-Q7aqo;if((fabs(HGmnq+zv_9k+mG9pV)<RgnoL)||(
fabs(sRjiD)<RgnoL)){vHzX3=SynchronizationTime-GcdhE-wxn_F-yZ3xv-CQMLR-hTABS;}
else{B8jft=(HGmnq+zv_9k+mG9pV);if(B8jft==0.0){vHzX3=SynchronizationTime-GcdhE-
wxn_F-yZ3xv-CQMLR-hTABS;}else{vHzX3=sRjiD/B8jft;}}if(vHzX3<0.0){vHzX3=0.0;}


if(ErhpP(HGmnq)==ErhpP(HGmnq+zv_9k)){k4U0s+=fabs(ldlgi);}else{IXql2=-rM_v0/q5nqO
+mdAxL(lJXU0(rM_v0/q5nqO)-2.0*HGmnq/q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>
wxn_F){IXql2=wxn_F;}k4U0s+=fabs(HGmnq*IXql2+0.5*rM_v0*lJXU0(IXql2)+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(rM_v0-q5nqO*IXql2)*lJXU0(wxn_F-IXql2)+q5nqO*_NEO8(wxn_F-
IXql2)/6.0);}
if(ErhpP(HGmnq+zv_9k)==ErhpP(HGmnq+zv_9k+mG9pV)){k4U0s+=fabs(UczXz);}else{IXql2=
E3hwQ/q5nqO-mdAxL(lJXU0(E3hwQ/q5nqO)+2.0*(HGmnq+zv_9k)/q5nqO);if(IXql2<0.0){
IXql2=0.0;}if(IXql2>yZ3xv){IXql2=yZ3xv;}k4U0s+=fabs((HGmnq+zv_9k)*IXql2+0.5*
E3hwQ*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+fabs(0.5*(E3hwQ-q5nqO*IXql2)*lJXU0(
yZ3xv-IXql2)-q5nqO*_NEO8(yZ3xv-IXql2)/6.0);}
k4U0s+=fabs(sRjiD);
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o)==ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)){k4U0s+=
fabs(y71cs);}else{IXql2=mdAxL(-2.0*(HGmnq+zv_9k+mG9pV+ia77o)/q5nqO);if(IXql2>
CQMLR){IXql2=CQMLR;}k4U0s+=fabs((HGmnq+zv_9k+mG9pV+ia77o)*IXql2+q5nqO*_NEO8(
IXql2)/6.0)+fabs(0.5*(q5nqO*IXql2)*lJXU0(CQMLR-IXql2)+q5nqO*_NEO8(CQMLR-IXql2)/
6.0);}
if(ErhpP(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)==ErhpP(l4nzo)){k4U0s+=fabs(Q7aqo);}else{
IXql2=ikGZ0/q5nqO-mdAxL(lJXU0(ikGZ0/q5nqO)+2.0*(HGmnq+zv_9k+mG9pV+ia77o+s5XEo)/
q5nqO);if(IXql2<0.0){IXql2=0.0;}if(IXql2>hTABS){IXql2=hTABS;}k4U0s+=fabs((HGmnq+
zv_9k+mG9pV+ia77o+s5XEo)*IXql2+0.5*ikGZ0*lJXU0(IXql2)-q5nqO*_NEO8(IXql2)/6.0)+
fabs(0.5*(ikGZ0-q5nqO*IXql2)*lJXU0(hTABS-IXql2)-q5nqO*_NEO8(hTABS-IXql2)/6.0);}
Qv2GC=fabs(zv_9k)+fabs(mG9pV)+fabs(ia77o)+fabs(s5XEo)+fabs(fO1xN);


AwAl0=wxn_F+yZ3xv+vHzX3+CQMLR+hTABS;G0Jic=ldlgi+UczXz+sRjiD+y71cs+Q7aqo;TH6RH=
zv_9k+mG9pV+ia77o+s5XEo+fO1xN;if(AwAl0!=0.0){GkBLV=SynchronizationTime-GcdhE-
AwAl0;if(fabs(GkBLV)>(hkPzP*(SynchronizationTime-GcdhE)+KUmEn)){*DohAl=true;}}if
(G0Jic!=0.0){N3uJA=uRwD_-cXGdF-G0Jic;if(fabs(N3uJA)>(fabs(ckOJo*k4U0s)+kwL78)){*
DohAl=true;}}if(TH6RH!=0.0){gB33k=l4nzo-HGmnq-TH6RH;if(fabs(gB33k)>(nwkmK*fabs((
fabs(l4nzo)>fabs(Qv2GC))?(l4nzo):(Qv2GC)))+uE3Dz){*DohAl=true;}}



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


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),0.0,-HGmnq,-cXGdF,(
GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),0.0,-HGmnq,(GcdhE));
Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,0.0,(GcdhE));}else{Qy4rb->ZMssN[
Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->
Ti1i1].TL5H9(0.0,(0.5*q5nqO),0.0,HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9
(0.0,0.0,q5nqO,0.0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(GcdhE)+CQMLR;Qy4rb->
Ti1i1++;
GcdhE+=(CQMLR);cXGdF+=y71cs;HGmnq+=s5XEo;rM_v0=ikGZ0;


if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(0.5*(-ikGZ0)),-HGmnq,-
cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*q5nqO),-ikGZ0,-HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,-ikGZ0,(GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*ikGZ0),HGmnq,cXGdF,(GcdhE))
;Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*(-q5nqO)),ikGZ0,HGmnq,(GcdhE));Qy4rb
->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-q5nqO,ikGZ0,(GcdhE));}Qy4rb->So6Nc[Qy4rb->
Ti1i1]=(GcdhE)+hTABS;Qy4rb->Ti1i1++;
GcdhE+=(hTABS);cXGdF+=Q7aqo;HGmnq+=fO1xN;rM_v0=0.0;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-HGmnq,-cXGdF,(GcdhE));Qy4rb
->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-HGmnq,(GcdhE));Qy4rb->sabLl[Qy4rb->
Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0
,0.0,HGmnq,cXGdF,(GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,HGmnq,(
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,0.0,(GcdhE));}Qy4rb->So6Nc[
Qy4rb->Ti1i1]=(GcdhE)+kiQzO;Qy4rb->Ti1i1++;return;}
