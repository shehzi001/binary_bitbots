






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLStep1IntermediateTimeProfiles.h>
#include <TypeIVRMLStep1Profiles.h>
#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLDecisionTree1A.h>
#include <RMLPositionInputParameters.h>
using namespace BkjIW;

bool TypeIVRMLPosition::mhIY0(RMLDoubleVector*fRzNn){bool BEGEG=true,Esn4v=false
;unsigned int i=(0x10b+3714-0xf8d);double bzQVt=0.0,uy7Jb=0.0,GLJ3a=0.0,cVCv1=
0.0,xnGyf=0.0;for(i=(0xa64+6624-0x2444);i<this->NumberOfDOFs;i++){if((this->
SkCtJ->VecData)[i]){(this->TPRec->VecData)[i]=(this->CgOpp->TargetPositionVector
->VecData)[i]-(this->CgOpp->CurrentPositionVector->VecData)[i];(this->DcVfC->
VecData)[i]=(this->CgOpp->CurrentVelocityVector->VecData)[i];(this->D1CDw->
VecData)[i]=(this->CgOpp->CurrentAccelerationVector->VecData)[i];(this->XAvWp->
VecData)[i]=(this->CgOpp->TargetVelocityVector->VecData)[i];uy7Jb+=lJXU0((this->
TPRec->VecData)[i]);bzQVt+=lJXU0((this->D1CDw->VecData)[i]);GLJ3a+=lJXU0((this->
DcVfC->VecData)[i]);cVCv1+=lJXU0((this->XAvWp->VecData)[i]);}else{(this->TPRec->
VecData)[i]=0.0;(this->DcVfC->VecData)[i]=0.0;(this->D1CDw->VecData)[i]=0.0;(
this->XAvWp->VecData)[i]=0.0;}}uy7Jb=mdAxL(uy7Jb);bzQVt=mdAxL(bzQVt);GLJ3a=mdAxL
(GLJ3a);cVCv1=mdAxL(cVCv1);if((uy7Jb!=CshoR)&&(uy7Jb!=0.0)){for(i=
(0x153+2036-0x947);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(this
->TPRec->VecData)[i]/=uy7Jb;}}}else{for(i=(0x1411+4787-0x26c4);i<this->
NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(this->TPRec->VecData)[i]=0.0;}}
}if((bzQVt!=CshoR)&&(bzQVt!=0.0)){for(i=(0x74b+2604-0x1177);i<this->NumberOfDOFs
;i++){if((this->SkCtJ->VecData)[i]){(this->D1CDw->VecData)[i]/=bzQVt;}}}else{for
(i=(0xe02+948-0x11b6);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
this->D1CDw->VecData)[i]=0.0;}}}if((GLJ3a!=CshoR)&&(GLJ3a!=0.0)){for(i=
(0x11e7+2865-0x1d18);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
this->DcVfC->VecData)[i]/=GLJ3a;}}}else{for(i=(0x1583+4222-0x2601);i<this->
NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(this->DcVfC->VecData)[i]=0.0;}}
}if((cVCv1!=CshoR)&&(cVCv1!=0.0)){for(i=(0x1cc+9104-0x255c);i<this->NumberOfDOFs
;i++){if((this->SkCtJ->VecData)[i]){(this->XAvWp->VecData)[i]/=cVCv1;}}}else{for
(i=(0x26f+1228-0x73b);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
this->XAvWp->VecData)[i]=0.0;}}}
xnGyf=UbufW;if((uy7Jb>=bzQVt)&&(uy7Jb>=GLJ3a)&&(uy7Jb>=cVCv1)&&(uy7Jb>=UbufW)){*
(this->LeGHY)=*(this->TPRec);xnGyf=uy7Jb;this->Spk5E=TypeIVRMLPosition::xES8C;}
if((bzQVt>=uy7Jb)&&(bzQVt>=GLJ3a)&&(bzQVt>=cVCv1)&&(bzQVt>=UbufW)){*(this->LeGHY
)=*(this->D1CDw);xnGyf=bzQVt;this->Spk5E=TypeIVRMLPosition::WPhTZ;}if((GLJ3a>=
uy7Jb)&&(GLJ3a>=bzQVt)&&(GLJ3a>=cVCv1)&&(GLJ3a>=UbufW)){*(this->LeGHY)=*(this->
DcVfC);xnGyf=GLJ3a;this->Spk5E=TypeIVRMLPosition::XCbNM;}if((cVCv1>=uy7Jb)&&(
cVCv1>=GLJ3a)&&(cVCv1>=bzQVt)&&(cVCv1>=UbufW)){*(this->LeGHY)=*(this->XAvWp);
xnGyf=cVCv1;this->Spk5E=TypeIVRMLPosition::mUYjy;}if(xnGyf>UbufW){
Esn4v=true;for(i=(0x1361+1559-0x1978);i<this->NumberOfDOFs;i++){if((this->SkCtJ
->VecData)[i]){if((ErhpP((this->TPRec->VecData)[i])==ErhpP((this->LeGHY->VecData
)[i]))&&(fabs((this->TPRec->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){
for(i=(0xdb2+2894-0x1900);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]
){(this->TPRec->VecData)[i]=-(this->TPRec->VecData)[i];}}}Esn4v=true;for(i=
(0x1217+4151-0x224e);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if(
(ErhpP((this->D1CDw->VecData)[i])==ErhpP((this->LeGHY->VecData)[i]))&&(fabs((
this->D1CDw->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){for(i=
(0x570+4648-0x1798);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
this->D1CDw->VecData)[i]=-(this->D1CDw->VecData)[i];}}}Esn4v=true;for(i=
(0xb0+5518-0x163e);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((
ErhpP((this->DcVfC->VecData)[i])==ErhpP((this->LeGHY->VecData)[i]))&&(fabs((this
->DcVfC->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){for(i=
(0x13b7+4330-0x24a1);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
this->DcVfC->VecData)[i]=-(this->DcVfC->VecData)[i];}}}Esn4v=true;for(i=
(0x238+2781-0xd15);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((
ErhpP((this->XAvWp->VecData)[i])==ErhpP((this->LeGHY->VecData)[i]))&&(fabs((this
->XAvWp->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){for(i=
(0x4a8+268-0x5b4);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(this
->XAvWp->VecData)[i]=-(this->XAvWp->VecData)[i];}}}
for(i=(0x657+5567-0x1c16);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]
){if(((fabs((this->LeGHY->VecData)[i]-(this->TPRec->VecData)[i])>(UOJDp*fabs((
this->LeGHY->VecData)[i])))&&(uy7Jb>=UbufW))||((fabs((this->LeGHY->VecData)[i]-(
this->D1CDw->VecData)[i])>(UOJDp*fabs((this->LeGHY->VecData)[i])))&&(bzQVt>=
UbufW))||((fabs((this->LeGHY->VecData)[i]-(this->DcVfC->VecData)[i])>(UOJDp*fabs
((this->LeGHY->VecData)[i])))&&(GLJ3a>=UbufW))||((fabs((this->LeGHY->VecData)[i]
-(this->XAvWp->VecData)[i])>(UOJDp*fabs((this->LeGHY->VecData)[i])))&&(cVCv1>=
UbufW))){BEGEG=false;break;}}}}else{BEGEG=false;}if(BEGEG){*fRzNn=*(this->LeGHY)
;}else{fRzNn->Set(0.0);}if(BkjIW::AkYML(*(this->SkCtJ))==(0x12a3+2249-0x1b6c)){
fRzNn->Set(0.0);BEGEG=true;}return(BEGEG);}
