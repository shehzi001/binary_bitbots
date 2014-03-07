






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLThreadControl.h>
#include <TypeIVRMLStep1IntermediateTimeProfiles.h>
#include <TypeIVRMLStep1Profiles.h>
#include <TypeIVRMLStep1RootFunctions.h>
#include <TypeIVRMLQuicksort.h>
#include <TypeIVRMLStep1Decisions.h>
#include <TypeIVRMLDecisionTree1A.h>
#include <TypeIVRMLDecisionTree1B1.h>
#include <TypeIVRMLDecisionTree1B2.h>
#include <TypeIVRMLDecisionTree1B3.h>
#include <TypeIVRMLDecisionTree1C.h>
#include <TypeIVRMLABK.h>
#include <RMLPositionInputParameters.h>
#include <ReflexxesAPI.h>
#ifdef zmpmF
#include <pthread.h>
#endif
using namespace BkjIW;

bool TypeIVRMLPosition::Z4Qny(void){bool bZn23=true;double AMzCZ=0.0,s8RNc=0.0,
K80Yb=0.0,PVKm3=0.0,zVyfZ=0.0;unsigned int i=(0x20b5+511-0x22b4),ErFg5=
(0xa4b+5612-0x2037),tcm7G=(0x2d8+759-0x5cf),oTcCZ=(0xddb+2665-0x1844);this->
aAXyd->Jo1cd(this->CgOpp->SelectionVector->VecData,LVHAx::TlOP4);


while(this->aAXyd->pR7Vi(&ErFg5)){sTfov(this,ErFg5);}
this->aAXyd->tfLMt();for(i=(0x28+1558-0x63e);i<this->NumberOfDOFs;i++){if((this
->CgOpp->SelectionVector->VecData)[i]){if((this->mpz_d->VecData)[i]){return(
TypeIVRMLPosition::KeQfP);}if((this->LSxcd->VecData)[i]>AMzCZ){AMzCZ=(this->
LSxcd->VecData)[i];this->yyynZ=i;}}}
this->KNl2l();
if((this->RzgOx)||(BkjIW::AkYML(*(this->SkCtJ))==(0x6a3+6742-0x20f9))){this->
SynchronizationTime=AMzCZ;return(TypeIVRMLPosition::wO433);}

if(this->RijuD){
this->RijuD=mhIY0(this->FiGD5);}if((this->RijuD)&&(fabs((this->FiGD5->VecData)[
this->yyynZ])>UbufW)){s8RNc=(this->CgOpp->MaxJerkVector->VecData)[this->yyynZ]/
fabs((this->FiGD5->VecData)[this->yyynZ]);K80Yb=(this->CgOpp->
MaxAccelerationVector->VecData)[this->yyynZ]/fabs((this->FiGD5->VecData)[this->
yyynZ]);PVKm3=(this->CgOpp->MaxVelocityVector->VecData)[this->yyynZ]/fabs((this
->FiGD5->VecData)[this->yyynZ]);for(i=(0x25+3781-0xeea);i<this->NumberOfDOFs;i++
){if((this->SkCtJ->VecData)[i]){(this->w4hDu->VecData)[i]=0.0;(this->O99pp->
VecData)[i]=fabs(s8RNc*(this->FiGD5->VecData)[i]);(this->MGobU->VecData)[i]=fabs
(K80Yb*(this->FiGD5->VecData)[i]);(this->r9YqX->VecData)[i]=fabs(PVKm3*(this->
FiGD5->VecData)[i]);if(((this->O99pp->VecData)[i]>((this->CgOpp->MaxJerkVector->
VecData)[i]*(1.0+lpAYg)+UbufW))||((this->MGobU->VecData)[i]>((this->CgOpp->
MaxAccelerationVector->VecData)[i]*(1.0+lpAYg)+UbufW))||((this->r9YqX->VecData)[
i]>((this->CgOpp->MaxVelocityVector->VecData)[i]*(1.0+lpAYg)+UbufW))){this->
RijuD=false;break;}}}}else{this->RijuD=false;}if(this->RijuD){*(this->BDQdv)=*(
this->CgOpp->CurrentPositionVector);*(this->DcVfC)=*(this->CgOpp->
CurrentVelocityVector);*(this->D1CDw)=*(this->CgOpp->CurrentAccelerationVector);
*(this->nmoER)=*(this->CgOpp->TargetPositionVector);*(this->XAvWp)=*(this->CgOpp
->TargetVelocityVector);
for(i=(0x1afc+2753-0x25bd);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i
]){if((ErhpP((this->nmoER->VecData)[i]-(this->BDQdv->VecData)[i])!=ErhpP((this->
nmoER->VecData)[this->yyynZ]-(this->BDQdv->VecData)[this->yyynZ]))){LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}}}
for(i=(0x1a96+2476-0x2442);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i
]){X0n_9(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->
DcVfC->VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i],(this
->MGobU->VecData)[i],(this->r9YqX->VecData)[i],this->tMr7Q.
BehaviorIfInitialStateBreachesConstraints,&((this->nmoER->VecData)[i]),&((this->
XAvWp->VecData)[i]));}}switch((this->GR2PP->VecData)[this->yyynZ]){case cDXnH:
case rT8JN:for(i=(0x6d3+7339-0x237e);i<this->NumberOfDOFs;i++){if((this->SkCtJ->
VecData)[i]){if((this->D1CDw->VecData)[i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]
),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[i]),&((this->nmoER->
VecData)[i]),&((this->XAvWp->VecData)[i]));}if((this->GR2PP->VecData)[this->
yyynZ]==rT8JN){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!G9bu7(&bZTw5,&cXyBU,&wEEQc,(this->D1CDw->VecData)[i],(this->MGobU->VecData)[
i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i]
,(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i]))
{this->RijuD=false;break;}}}break;case BGSZ3:case wzOBw:for(i=
(0x4e8+2882-0x102a);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((
this->D1CDw->VecData)[i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC
->VecData)[i]),&((this->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this
->XAvWp->VecData)[i]));}if((this->GR2PP->VecData)[this->yyynZ]==wzOBw){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!G9bu7(&hb_uG,&_WRKy,&uAHWQ,(this->D1CDw->VecData)[i],(this->MGobU->VecData)[
i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i]
,(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i]))
{this->RijuD=false;break;}}}break;case mCpRV:case DnaXB:for(i=
(0x2f0+3863-0x1207);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((
this->D1CDw->VecData)[i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC
->VecData)[i]),&((this->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this
->XAvWp->VecData)[i]));}if((this->GR2PP->VecData)[this->yyynZ]==DnaXB){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!G9bu7(&pf4Ta,&feOXP,&FvvwK,(this->D1CDw->VecData)[i],(this->MGobU->VecData)[
i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i]
,(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i]))
{this->RijuD=false;break;}}}break;case CBvij:case OifK3:for(i=
(0x11d1+5268-0x2665);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if(
(this->D1CDw->VecData)[i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC
->VecData)[i]),&((this->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this
->XAvWp->VecData)[i]));}if((this->GR2PP->VecData)[this->yyynZ]==OifK3){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!G9bu7(&Pudeu,&njmTh,&GKo70,(this->D1CDw->VecData)[i],(this->MGobU->VecData)[
i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i]
,(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i]))
{this->RijuD=false;break;}}}break;case Sxc5U:case HyDYY:for(i=
(0xe9b+2442-0x1825);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((
this->D1CDw->VecData)[i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC
->VecData)[i]),&((this->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this
->XAvWp->VecData)[i]));}if((this->GR2PP->VecData)[this->yyynZ]==HyDYY){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!EPMMP((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->O99pp->VecData)[i],false)){this->
RijuD=false;break;}else{
if(bj6T0((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->O99pp->
VecData)[i],true)){this->RijuD=false;break;}else{
if(!h_JPE((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->BDQdv->
VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i],false)){this->
RijuD=false;break;}}}}}break;case Uawc_:case F9rJD:for(i=(0x1b29+2284-0x2415);i<
this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((this->D1CDw->VecData)[
i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this
->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]))
;}if((this->GR2PP->VecData)[this->yyynZ]==F9rJD){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!EPMMP((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->O99pp->VecData)[i],false)){this->
RijuD=false;break;}else{
if(!bj6T0((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->O99pp->
VecData)[i],false)){this->RijuD=false;break;}else{
if(!rmbbS((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->BDQdv->
VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i],false)){this->
RijuD=false;break;}}}}}break;case RJPE9:case UgzL4:for(i=(0x342+9160-0x270a);i<
this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((this->D1CDw->VecData)[
i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this
->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]))
;}if((this->GR2PP->VecData)[this->yyynZ]==UgzL4){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(EPMMP((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->O99pp->VecData)[i],true)){this->
RijuD=false;break;}else{
if(bW6_1((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->O99pp->
VecData)[i],true)){this->RijuD=false;break;}else{
if(!KeXUw((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->BDQdv->
VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i],false)){this->
RijuD=false;break;}}}}}break;case pVKSx:case eIutJ:for(i=(0x13a4+2810-0x1e9e);i<
this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((this->D1CDw->VecData)[
i]<0.0){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this
->D1CDw->VecData)[i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]))
;}if((this->GR2PP->VecData)[this->yyynZ]==eIutJ){
MLSwm(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->
VecData)[i]),&((this->D1CDw->VecData)[i]),(this->O99pp->VecData)[i]);LIlfP(&((
this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[
i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(EPMMP((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->O99pp->VecData)[i],true)){this->
RijuD=false;break;}else{
if(!bW6_1((this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->O99pp->
VecData)[i],false)){this->RijuD=false;break;}else{
if(!jHbl2((this->D1CDw->VecData)[i],(this->DcVfC->VecData)[i],(this->r9YqX->
VecData)[i],(this->XAvWp->VecData)[i],(this->BDQdv->VecData)[i],(this->nmoER->
VecData)[i],(this->O99pp->VecData)[i],false)){this->RijuD=false;break;}}}}}break
;case J1ner:for(i=(0xdcd+5213-0x222a);i<this->NumberOfDOFs;i++){if((this->SkCtJ
->VecData)[i]){if((this->D1CDw->VecData)[i]<0.0){LIlfP(&((this->BDQdv->VecData)[
i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[i]),&((this->nmoER->
VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!G9bu7(&oDY5u,&yT7D7,&oWl1f,(this->D1CDw->VecData)[i],(this->MGobU->VecData)[
i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i]
,(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i]))
{this->RijuD=false;break;}}}break;case jgijf:for(i=(0xbfb+5723-0x2256);i<this->
NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if((this->D1CDw->VecData)[i]<0.0
){LIlfP(&((this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw
->VecData)[i]),&((this->nmoER->VecData)[i]),&((this->XAvWp->VecData)[i]));}
if(!G9bu7(&vyuDp,&sypVN,&aXdEM,(this->D1CDw->VecData)[i],(this->MGobU->VecData)[
i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i]
,(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->O99pp->VecData)[i]))
{this->RijuD=false;break;}}}break;default:this->RijuD=false;break;}}if(this->
RijuD){this->BRD94=(unsigned int)(this->GR2PP->VecData)[this->yyynZ];




switch(this->BRD94){case cDXnH:case rT8JN:for(i=(0x1000+757-0x12f5);i<this->
NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){U5xly(&((this->w4hDu->VecData)[i
]),(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->DcVfC->VecData)[i]
,(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(
this->MGobU->VecData)[i],(this->O99pp->VecData)[i],&bZn23);}}break;case BGSZ3:
case wzOBw:for(i=(0x1b40+729-0x1e19);i<this->NumberOfDOFs;i++){if((this->SkCtJ->
VecData)[i]){eI_XK(&((this->w4hDu->VecData)[i]),(this->BDQdv->VecData)[i],(this
->nmoER->VecData)[i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->
XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->
O99pp->VecData)[i],&bZn23);}}break;case mCpRV:case DnaXB:for(i=
(0x5f2+6333-0x1eaf);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){
cCleZ(&((this->w4hDu->VecData)[i]),(this->BDQdv->VecData)[i],(this->nmoER->
VecData)[i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->
VecData)[i],(this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->O99pp->
VecData)[i],&bZn23);}}break;case CBvij:case OifK3:for(i=(0xaf7+6699-0x2522);i<
this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){RoLS1(&((this->w4hDu->
VecData)[i]),(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->DcVfC->
VecData)[i],(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->D1CDw->
VecData)[i],(this->MGobU->VecData)[i],(this->O99pp->VecData)[i],&bZn23);}}break;
case Sxc5U:case HyDYY:for(i=(0x251b+460-0x26e7);i<this->NumberOfDOFs;i++){if((
this->SkCtJ->VecData)[i]){DyHQ9(&((this->w4hDu->VecData)[i]),&((this->BDQdv->
VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[i]),(this->
r9YqX->VecData)[i],(this->MGobU->VecData)[i],(this->O99pp->VecData)[i]);FW1Ej(&(
(this->w4hDu->VecData)[i]),(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(
this->DcVfC->VecData)[i],(this->XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(
this->MGobU->VecData)[i],(this->O99pp->VecData)[i],&bZn23);}}break;case Uawc_:
case F9rJD:for(i=(0x1c67+897-0x1fe8);i<this->NumberOfDOFs;i++){if((this->SkCtJ->
VecData)[i]){DyHQ9(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((
this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[i]),(this->r9YqX->VecData)[i]
,(this->MGobU->VecData)[i],(this->O99pp->VecData)[i]);r8vS1(&((this->w4hDu->
VecData)[i]),(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->DcVfC->
VecData)[i],(this->XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(this->O99pp->
VecData)[i],&bZn23);}}break;case RJPE9:case UgzL4:for(i=(0x6b4+3896-0x15ec);i<
this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){BKJcM(&((this->w4hDu->
VecData)[i]),&((this->BDQdv->VecData)[i]),&((this->DcVfC->VecData)[i]),&((this->
D1CDw->VecData)[i]),(this->r9YqX->VecData)[i],(this->O99pp->VecData)[i]);FW1Ej(&
((this->w4hDu->VecData)[i]),(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],
(this->DcVfC->VecData)[i],(this->XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(
this->MGobU->VecData)[i],(this->O99pp->VecData)[i],&bZn23);}}break;case pVKSx:
case eIutJ:for(i=(0xd5+5328-0x15a5);i<this->NumberOfDOFs;i++){if((this->SkCtJ->
VecData)[i]){BKJcM(&((this->w4hDu->VecData)[i]),&((this->BDQdv->VecData)[i]),&((
this->DcVfC->VecData)[i]),&((this->D1CDw->VecData)[i]),(this->r9YqX->VecData)[i]
,(this->O99pp->VecData)[i]);r8vS1(&((this->w4hDu->VecData)[i]),(this->BDQdv->
VecData)[i],(this->nmoER->VecData)[i],(this->DcVfC->VecData)[i],(this->XAvWp->
VecData)[i],(this->D1CDw->VecData)[i],(this->O99pp->VecData)[i],&bZn23);}}break;
case J1ner:for(i=(0xe16+6280-0x269e);i<this->NumberOfDOFs;i++){if((this->SkCtJ->
VecData)[i]){RVbZT(&((this->w4hDu->VecData)[i]),(this->BDQdv->VecData)[i],(this
->nmoER->VecData)[i],(this->DcVfC->VecData)[i],(this->r9YqX->VecData)[i],(this->
XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(this->MGobU->VecData)[i],(this->
O99pp->VecData)[i],&bZn23);}}break;case jgijf:for(i=(0xcf4+4499-0x1e87);i<this->
NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){CfX0a(&((this->w4hDu->VecData)[i
]),(this->BDQdv->VecData)[i],(this->nmoER->VecData)[i],(this->DcVfC->VecData)[i]
,(this->r9YqX->VecData)[i],(this->XAvWp->VecData)[i],(this->D1CDw->VecData)[i],(
this->MGobU->VecData)[i],(this->O99pp->VecData)[i],&bZn23);}}break;default:this
->RijuD=false;break;}zVyfZ=0.0;oTcCZ=(0x127a+107-0x12e5);for(i=(0x8a+2028-0x876)
;i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){zVyfZ+=(this->w4hDu->
VecData)[i];oTcCZ++;}}if(oTcCZ==(0x821+548-0xa45)){return(TypeIVRMLPosition::
wO433);}zVyfZ/=((double)oTcCZ);for(i=(0x1456+4301-0x2523);i<this->NumberOfDOFs;i
++){if((this->SkCtJ->VecData)[i]){if(fabs((this->w4hDu->VecData)[i]-zVyfZ)>(
UbufW+lpAYg*zVyfZ)){this->RijuD=false;break;}}}}if(this->RijuD){this->
SynchronizationTime=this->LSxcd->VecData[this->yyynZ];return(TypeIVRMLPosition::
wO433);}

this->aAXyd->Jo1cd(this->SkCtJ->VecData,LVHAx::lOqfu);


while(this->aAXyd->pR7Vi(&ErFg5)){kQnjp(this,ErFg5);}
this->aAXyd->tfLMt();for(i=(0x7a3+1233-0xc74);i<this->NumberOfDOFs;i++){if((this
->SkCtJ->VecData)[i]){if((this->mpz_d->VecData)[i]){return(TypeIVRMLPosition::
KeQfP);}(this->LSxcd->VecData)[i]+=c42JT;if((this->qVJUu->VecData)[i]<(this->
LSxcd->VecData)[i]){(this->qVJUu->VecData)[i]=(this->LSxcd->VecData)[i];}if((
this->_HAh0->VecData)[i]<(this->qVJUu->VecData)[i]){(this->_HAh0->VecData)[i]=(
this->qVJUu->VecData)[i]=((this->qVJUu->VecData)[i]+(this->_HAh0->VecData)[i])*
0.5;(this->qVJUu->VecData)[i]-=c42JT;(this->_HAh0->VecData)[i]+=c42JT;if((this->
qVJUu->VecData)[i]<(this->LSxcd->VecData)[i]){(this->LSxcd->VecData)[i]=(this->
_HAh0->VecData)[i];(this->qVJUu->VecData)[i]=kiQzO;(this->_HAh0->VecData)[i]=
kiQzO;}}if((this->_HAh0->VecData)[i]<(this->LSxcd->VecData)[i]){(this->qVJUu->
VecData)[i]=kiQzO;(this->_HAh0->VecData)[i]=kiQzO;}}}


for(i=(0x384+7785-0x21ed);i<this->NumberOfDOFs;i++){if(!(this->SkCtJ->VecData)[i
]){(this->qVJUu->VecData)[i]=kiQzO;(this->_HAh0->VecData)[i]=kiQzO;}(this->L152P
->VecData)[i]=(this->qVJUu->VecData)[i];(this->L152P->VecData)[i+this->
NumberOfDOFs]=(this->_HAh0->VecData)[i];}


uewwZ((0xe6c+3349-0x1b81),((0x16b2+44-0x16dc)*this->NumberOfDOFs-
(0xc68+151-0xcfe)),&((this->L152P->VecData)[(0xdf3+2964-0x1987)]));
for(tcm7G=(0x1d92+1039-0x21a1);tcm7G<(0x171a+1935-0x1ea7)*this->NumberOfDOFs;
tcm7G++){if((this->L152P->VecData)[tcm7G]>AMzCZ){break;}}this->
SynchronizationTime=AMzCZ;
while((YqOu_(this->SynchronizationTime,*(this->qVJUu),*(this->_HAh0)))&&(tcm7G<
(0x7f8+6225-0x2047)*this->NumberOfDOFs)){this->SynchronizationTime=(this->L152P
->VecData)[tcm7G];tcm7G++;}return(TypeIVRMLPosition::wO433);}

bool TypeIVRMLPosition::YqOu_(const double&gQ4hn,const RMLDoubleVector&kaQXN,
const RMLDoubleVector&VKJPU)const{unsigned int i;for(i=(0xda4+6098-0x2576);i<
this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){if(((kaQXN.VecData)[i]<
gQ4hn)&&(gQ4hn<(VKJPU.VecData)[i])){return(true);}}}return(false);}
