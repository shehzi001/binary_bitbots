






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLStep1Profiles.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDecisionTree1A.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>
#include <RMLVector.h>
#include <ReflexxesAPI.h>
#include <RMLPositionFlags.h>
#include <TypeIVRMLThreadControl.h>
#ifdef zmpmF
#include <pthread.h>
#endif
using namespace BkjIW;

TypeIVRMLPosition::TypeIVRMLPosition(const unsigned int&tctMo,const double&ypdPO
,const unsigned int&wTpPJ,const double&SqpNi){
#ifdef zmpmF	
int EVz5o=(0xaeb+1880-0x1243);unsigned int i=(0x7a0+6733-0x21ed);this->Mp3_I=
false;pthread_mutex_init(&(this->ZmUm9),NULL);pthread_cond_init(&(this->mb1i9),
NULL);
#endif
this->RijuD=false;this->X2crk=false;this->RzgOx=false;this->jQM8I=false;this->
b9NhV=false;this->KraDu=false;this->ReturnValue=ReflexxesAPI::RML_ERROR;this->
NumberOfDOFs=tctMo;this->yyynZ=(0x16cd+2365-0x200a);this->BRD94=BkjIW::Kv2Oe;
this->CycleTime=ypdPO;this->SynchronizationTime=0.0;this->MKEeV=0.0;this->HPY88=
QmAvH;this->lB4UL=QmAvH;this->MaxTimeForOverrideFilter=SqpNi;this->Spk5E=
TypeIVRMLPosition::S2aDR;this->mpz_d=new RMLBoolVector(this->NumberOfDOFs);this
->SkCtJ=new RMLBoolVector(this->NumberOfDOFs);this->PCBIL=new RMLBoolVector(this
->NumberOfDOFs);this->GR2PP=new RMLVector<d49nB>(this->NumberOfDOFs);this->qSPLG
=new RMLVector<d49nB>(this->NumberOfDOFs);this->AqM3n=new RMLDoubleVector(this->
NumberOfDOFs);this->LSxcd=new RMLDoubleVector(this->NumberOfDOFs);this->HdV60=
new RMLDoubleVector(this->NumberOfDOFs);this->qVJUu=new RMLDoubleVector(this->
NumberOfDOFs);this->_HAh0=new RMLDoubleVector(this->NumberOfDOFs);this->FiGD5=
new RMLDoubleVector(this->NumberOfDOFs);this->BDQdv=new RMLDoubleVector(this->
NumberOfDOFs);this->nmoER=new RMLDoubleVector(this->NumberOfDOFs);this->TPRec=
new RMLDoubleVector(this->NumberOfDOFs);this->DcVfC=new RMLDoubleVector(this->
NumberOfDOFs);this->D1CDw=new RMLDoubleVector(this->NumberOfDOFs);this->XAvWp=
new RMLDoubleVector(this->NumberOfDOFs);this->r9YqX=new RMLDoubleVector(this->
NumberOfDOFs);this->MGobU=new RMLDoubleVector(this->NumberOfDOFs);this->O99pp=
new RMLDoubleVector(this->NumberOfDOFs);this->w4hDu=new RMLDoubleVector(this->
NumberOfDOFs);this->LeGHY=new RMLDoubleVector(this->NumberOfDOFs);this->L152P=
new RMLDoubleVector((0x1627+1355-0x1b70)*this->NumberOfDOFs);this->VGQF6=new 
RMLDoubleVector(this->NumberOfDOFs);this->KDMdH=new RMLDoubleVector(this->
NumberOfDOFs);this->f_1Yi=new RMLPositionInputParameters(this->NumberOfDOFs);
this->CgOpp=new RMLPositionInputParameters(this->NumberOfDOFs);this->gSTLu=new 
RMLPositionOutputParameters(this->NumberOfDOFs);this->Ty8bL=new 
RMLVelocityInputParameters(this->NumberOfDOFs);this->UKSpI=new 
RMLVelocityOutputParameters(this->NumberOfDOFs);this->Polynomials=new jKICA[this
->NumberOfDOFs];this->bthTm=new g3_QI(this->CycleTime,this->
MaxTimeForOverrideFilter,f8CMZ,1.0);this->RMLVelocityObject=new 
TypeIVRMLVelocity(this->NumberOfDOFs,this->CycleTime,false,this->
MaxTimeForOverrideFilter);memset(this->Polynomials,(0x322+7193-0x1f3b),this->
NumberOfDOFs*sizeof(jKICA));this->KDMdH->Set(0.0);this->tMr7Q=RMLPositionFlags()
;this->CRSqy=RMLPositionFlags();



#ifdef zmpmF	
this->xLwRq=(0x101a+2132-0x186e);this->NumberOfOwnThreads=wTpPJ;this->pWcrs=
(0x44a+6802-0x1edc);pthread_attr_t tn_FX;struct OhhH7 oKeX1;this->aAXyd=new 
LVHAx(this->NumberOfOwnThreads+(0x38a+5955-0x1acc),this->NumberOfDOFs);if(this->
NumberOfOwnThreads>(0xd7f+3723-0x1c0a)){this->SKpQP=new pthread_t[this->
NumberOfOwnThreads];pthread_getschedparam(pthread_self(),&EVz5o,&oKeX1);
pthread_attr_init(&tn_FX);pthread_attr_setschedpolicy(&tn_FX,EVz5o);
pthread_attr_setinheritsched(&tn_FX,PTHREAD_EXPLICIT_SCHED);
pthread_attr_setschedparam(&tn_FX,&oKeX1);for(i=(0x9b9+7326-0x2657);i<this->
NumberOfOwnThreads;i++){

this->xLwRq=i+(0x1677+1855-0x1db5);pthread_create(&((this->SKpQP)[i]),&tn_FX,&
TypeIVRMLPosition::Zt3yZ,this);
pthread_mutex_lock(&(this->ZmUm9));while(!this->Mp3_I){pthread_cond_wait(&(this
->mb1i9),&(this->ZmUm9));}this->Mp3_I=false;pthread_mutex_unlock(&(this->ZmUm9))
;}this->aAXyd->ZMXYL();}else{this->SKpQP=NULL;}
#else
this->NumberOfOwnThreads=(0x113+4379-0x122e);this->aAXyd=new LVHAx(this->
NumberOfOwnThreads+(0x38+478-0x215),this->NumberOfDOFs);
#endif
}

TypeIVRMLPosition::~TypeIVRMLPosition(void){
#ifdef zmpmF	
if(this->NumberOfOwnThreads>(0x280+5691-0x18bb)){unsigned int i=
(0x126a+2510-0x1c38);this->aAXyd->ANhqp();for(i=(0x1193+578-0x13d5);i<this->
NumberOfOwnThreads;i++){pthread_join(((this->SKpQP)[i]),NULL);}delete[](
pthread_t*)(this->SKpQP);}this->SKpQP=NULL;
#endif
delete this->bthTm;delete this->aAXyd;delete this->f_1Yi;delete this->CgOpp;
delete this->gSTLu;delete this->RMLVelocityObject;delete this->mpz_d;delete this
->SkCtJ;delete this->PCBIL;delete this->GR2PP;delete this->qSPLG;delete this->
AqM3n;delete this->LSxcd;delete this->HdV60;delete this->qVJUu;delete this->
_HAh0;delete this->FiGD5;delete this->TPRec;delete this->BDQdv;delete this->
nmoER;delete this->DcVfC;delete this->D1CDw;delete this->XAvWp;delete this->
r9YqX;delete this->MGobU;delete this->O99pp;delete this->w4hDu;delete this->
LeGHY;delete this->L152P;delete this->VGQF6;delete this->KDMdH;delete this->
Ty8bL;delete this->UKSpI;delete[](jKICA*)this->Polynomials;this->aAXyd=NULL;this
->bthTm=NULL;this->f_1Yi=NULL;this->CgOpp=NULL;this->gSTLu=NULL;this->
RMLVelocityObject=NULL;this->mpz_d=NULL;this->SkCtJ=NULL;this->PCBIL=NULL;this->
GR2PP=NULL;this->qSPLG=NULL;this->AqM3n=NULL;this->LSxcd=NULL;this->HdV60=NULL;
this->qVJUu=NULL;this->_HAh0=NULL;this->FiGD5=NULL;this->BDQdv=NULL;this->nmoER=
NULL;this->TPRec=NULL;this->DcVfC=NULL;this->D1CDw=NULL;this->XAvWp=NULL;this->
r9YqX=NULL;this->MGobU=NULL;this->O99pp=NULL;this->w4hDu=NULL;this->LeGHY=NULL;
this->L152P=NULL;this->VGQF6=NULL;this->KDMdH=NULL;this->Ty8bL=NULL;this->UKSpI=
NULL;this->Polynomials=NULL;}

int TypeIVRMLPosition::EPDb1(const RMLPositionInputParameters&k2QiQ,
RMLPositionOutputParameters*aUO0W,const RMLPositionFlags&JKkfQ){bool Ln9QW=false
,pOQVd=false,hawYI=false;unsigned int i=(0xc7d+5265-0x210e);if((aUO0W==NULL)||(&
k2QiQ==NULL)||(&JKkfQ==NULL)){this->ReturnValue=ReflexxesAPI::
RML_ERROR_NULL_POINTER;if(aUO0W!=NULL){aUO0W->ResultValue=this->ReturnValue;}
return(this->ReturnValue);}if((this->NumberOfDOFs!=k2QiQ.GetNumberOfDOFs())||(
this->NumberOfDOFs!=aUO0W->GetNumberOfDOFs())){this->brYVd(k2QiQ,this->gSTLu,
JKkfQ);*aUO0W=*(this->gSTLu);this->ReturnValue=ReflexxesAPI::
RML_ERROR_NUMBER_OF_DOFS;aUO0W->ResultValue=this->ReturnValue;return(this->
ReturnValue);}
if((k2QiQ.OverrideValue>R_UAP)||(k2QiQ.OverrideValue<0.0)){this->brYVd(k2QiQ,
this->gSTLu,JKkfQ);*aUO0W=*(this->gSTLu);this->ReturnValue=ReflexxesAPI::
RML_ERROR_OVERRIDE_OUT_OF_RANGE;aUO0W->ResultValue=this->ReturnValue;return(this
->ReturnValue);}*(this->CgOpp)=k2QiQ;this->tMr7Q=JKkfQ;this->jQM8I=JKkfQ.
EnableTheCalculationOfTheExtremumMotionStates;if(((this->ReturnValue==
ReflexxesAPI::RML_FINAL_STATE_REACHED)&&(JKkfQ.
BehaviorAfterFinalStateOfMotionIsReached==RMLPositionFlags::RECOMPUTE_TRAJECTORY
))||(JKkfQ!=this->CRSqy)){pOQVd=true;}else{pOQVd=false;}if(!pOQVd){if(*(this->
CgOpp->SelectionVector)!=*(this->f_1Yi->SelectionVector)){pOQVd=true;}else{for(i
=(0x1739+2629-0x217e);i<this->NumberOfDOFs;i++){if((this->CgOpp->SelectionVector
->VecData)[i]){if(!(OHHbY((this->CgOpp->CurrentVelocityVector->VecData)[i],(this
->gSTLu->NewVelocityVector->VecData)[i])&&OHHbY((this->CgOpp->
CurrentAccelerationVector->VecData)[i],(this->gSTLu->NewAccelerationVector->
VecData)[i])&&OHHbY((this->CgOpp->MaxJerkVector->VecData)[i],(this->f_1Yi->
MaxJerkVector->VecData)[i])&&OHHbY((this->CgOpp->MaxAccelerationVector->VecData)
[i],(this->f_1Yi->MaxAccelerationVector->VecData)[i])&&OHHbY((this->CgOpp->
MaxVelocityVector->VecData)[i],(this->f_1Yi->MaxVelocityVector->VecData)[i])&&
OHHbY((this->CgOpp->TargetVelocityVector->VecData)[i],(this->f_1Yi->
TargetVelocityVector->VecData)[i])&&OHHbY(((this->CgOpp->TargetPositionVector->
VecData)[i]-(this->CgOpp->CurrentPositionVector->VecData)[i]),((this->f_1Yi->
TargetPositionVector->VecData)[i]-(this->gSTLu->NewPositionVector->VecData)[i]))
)){pOQVd=true;break;}}}}}if((pOQVd)||((this->ReturnValue!=ReflexxesAPI::
RML_WORKING)&&(this->ReturnValue!=ReflexxesAPI::RML_ERROR_POSITIONAL_LIMITS)&&(
this->ReturnValue!=ReflexxesAPI::RML_FINAL_STATE_REACHED))){

pOQVd=true;this->SynchronizationTime=0.0;this->KraDu=false;for(i=
(0x5c9+124-0x645);i<this->NumberOfDOFs;i++){if((this->CgOpp->SelectionVector->
VecData)[i]){if((fabs((this->CgOpp->TargetVelocityVector->VecData)[i])>(this->
CgOpp->MaxVelocityVector->VecData)[i])||((this->CgOpp->MaxVelocityVector->
VecData)[i]<=0.0)||((this->CgOpp->MaxAccelerationVector->VecData)[i]<=0.0)||((
this->CgOpp->MaxJerkVector->VecData)[i]<=0.0)){this->brYVd(k2QiQ,this->gSTLu,
JKkfQ);*aUO0W=*(this->gSTLu);this->ReturnValue=ReflexxesAPI::
RML_ERROR_INVALID_INPUT_VALUES;aUO0W->ResultValue=this->ReturnValue;return(this
->ReturnValue);}}}}else{pOQVd=false;}


this->bthTm->br6v1(k2QiQ.OverrideValue,&(this->HPY88),&(this->gSTLu->
OverrideFilterIsActive));*(this->f_1Yi)=k2QiQ;this->CRSqy=JKkfQ;if(pOQVd){this->
MKEeV=this->CycleTime*this->HPY88;this->PCBIL->Set(false);this->v27dc();this->
_XQLx();this->w_jM2();this->pWcrs=(0xa6a+3108-0x168e);for(i=(0x9f1+509-0xbee);i<
this->NumberOfDOFs;i++){if(k2QiQ.SelectionVector->VecData[i]){this->pWcrs++;}}
this->b9NhV=(this->pWcrs==(0x15cd+955-0x1987));*(this->AqM3n)=*(this->CgOpp->
TargetPositionVector);this->w4N6v();this->RijuD=((JKkfQ.SynchronizationBehavior
==RMLFlags::ONLY_PHASE_SYNCHRONIZATION)||(JKkfQ.SynchronizationBehavior==
RMLFlags::PHASE_SYNCHRONIZATION_IF_POSSIBLE));this->RzgOx=(JKkfQ.
SynchronizationBehavior==RMLFlags::NO_SYNCHRONIZATION);







Ln9QW=Z4Qny();if(Ln9QW){this->brYVd(k2QiQ,this->gSTLu,JKkfQ);*aUO0W=*(this->
gSTLu);if(k2QiQ.CheckForValidity()){
this->ReturnValue=ReflexxesAPI::RML_ERROR_EXECUTION_TIME_CALCULATION;}else{this
->ReturnValue=ReflexxesAPI::RML_ERROR_INVALID_INPUT_VALUES;}aUO0W->ResultValue=
this->ReturnValue;return(this->ReturnValue);}if((JKkfQ.SynchronizationBehavior==
RMLFlags::ONLY_PHASE_SYNCHRONIZATION)&&(!(this->RijuD))){this->brYVd(k2QiQ,this
->gSTLu,JKkfQ);*aUO0W=*(this->gSTLu);if(k2QiQ.CheckForValidity()){this->
ReturnValue=ReflexxesAPI::RML_ERROR_NO_PHASE_SYNCHRONIZATION;}else{this->
ReturnValue=ReflexxesAPI::RML_ERROR_INVALID_INPUT_VALUES;}aUO0W->ResultValue=
this->ReturnValue;return(this->ReturnValue);}if(this->SynchronizationTime>zYA0x)
{this->brYVd(k2QiQ,this->gSTLu,JKkfQ);*aUO0W=*(this->gSTLu);if(k2QiQ.
CheckForValidity()){this->ReturnValue=ReflexxesAPI::
RML_ERROR_EXECUTION_TIME_TOO_BIG;}else{this->ReturnValue=ReflexxesAPI::
RML_ERROR_INVALID_INPUT_VALUES;}aUO0W->ResultValue=this->ReturnValue;return(this
->ReturnValue);}for(i=(0x1280+3462-0x2006);i<this->NumberOfDOFs;i++){(this->
Polynomials)[i].Ti1i1=(0x12d4+488-0x14bc);}if((JKkfQ.SynchronizationBehavior!=
RMLFlags::NO_SYNCHRONIZATION)&&(k2QiQ.MinimumSynchronizationTime>this->
SynchronizationTime)){for(i=(0x6a1+1943-0xe38);i<(0x17ac+3255-0x2461)*this->
NumberOfDOFs;i++){if((this->L152P->VecData)[i]>k2QiQ.MinimumSynchronizationTime)
{break;}}this->SynchronizationTime=k2QiQ.MinimumSynchronizationTime;
while((YqOu_(this->SynchronizationTime,*(this->qVJUu),*(this->_HAh0)))&&(i<
(0x1471+4509-0x260c)*this->NumberOfDOFs)){this->SynchronizationTime=(this->L152P
->VecData)[i];i++;}}Ln9QW=OOB8g();if(Ln9QW){this->brYVd(k2QiQ,this->gSTLu,JKkfQ)
;*aUO0W=*(this->gSTLu);if(k2QiQ.CheckForValidity()){
this->ReturnValue=ReflexxesAPI::RML_ERROR_SYNCHRONIZATION;}else{this->
ReturnValue=ReflexxesAPI::RML_ERROR_INVALID_INPUT_VALUES;}aUO0W->ResultValue=
this->ReturnValue;return(this->ReturnValue);}}else{this->MKEeV+=this->CycleTime*
this->HPY88;this->_XQLx();}this->gSTLu->CurrentOverrideValue=this->HPY88;this->
lB4UL=this->HPY88;if(BkjIW::AkYML(*(this->SkCtJ))==(0x537+39-0x55e)){this->
SynchronizationTime=0.0;if(JKkfQ.SynchronizationBehavior==RMLFlags::
ONLY_TIME_SYNCHRONIZATION){this->RijuD=false;}else{this->RijuD=true;}}
this->ReturnValue=VTGwO(this->MKEeV,this->HPY88,this->gSTLu);this->gSTLu->
ANewCalculationWasPerformed=pOQVd;this->gSTLu->TrajectoryIsPhaseSynchronized=
this->RijuD;this->gSTLu->DOFWithTheGreatestExecutionTime=this->yyynZ;if(this->
RzgOx){this->gSTLu->SynchronizationTime=0.0;for(i=(0x53d+1269-0xa32);i<this->
NumberOfDOFs;i++){if(this->CgOpp->SelectionVector->VecData[i]){if(this->HPY88>
BLXud){this->gSTLu->ExecutionTimes->VecData[i]=(this->LSxcd->VecData[i]-this->
MKEeV+this->CycleTime)/this->HPY88;}else{this->gSTLu->ExecutionTimes->VecData[i]
=kiQzO;}if(this->gSTLu->ExecutionTimes->VecData[i]<0.0){this->gSTLu->
ExecutionTimes->VecData[i]=0.0;}}else{this->gSTLu->ExecutionTimes->VecData[i]=
0.0;}}}else{if(this->HPY88>BLXud){this->gSTLu->SynchronizationTime=(this->
SynchronizationTime-this->MKEeV+this->CycleTime)/this->HPY88;}else{this->gSTLu->
SynchronizationTime=kiQzO;}if(this->gSTLu->SynchronizationTime<0.0){this->gSTLu
->SynchronizationTime=0.0;}for(i=(0x715+2571-0x1120);i<this->NumberOfDOFs;i++){
if(this->CgOpp->SelectionVector->VecData[i]){this->gSTLu->ExecutionTimes->
VecData[i]=this->gSTLu->SynchronizationTime;}else{this->gSTLu->ExecutionTimes->
VecData[i]=0.0;}}}if((this->jQM8I)||(this->tMr7Q.PositionalLimitsBehavior!=
RMLFlags::POSITIONAL_LIMITS_IGNORE)){this->BwbwH(this->MKEeV-this->CycleTime,
this->HPY88,this->gSTLu);}if(!this->jQM8I){this->MUsk2(this->gSTLu);}if(this->
tMr7Q.PositionalLimitsBehavior!=RMLFlags::POSITIONAL_LIMITS_IGNORE){for(i=
(0x7f0+283-0x90b);i<this->NumberOfDOFs;i++){if(this->CgOpp->SelectionVector->
VecData[i]){if((this->gSTLu->MinPosExtremaPositionVectorOnly->VecData[i]<=this->
CgOpp->MinPositionVector->VecData[i])||(this->gSTLu->
MaxPosExtremaPositionVectorOnly->VecData[i]>=this->CgOpp->MaxPositionVector->
VecData[i])){this->KraDu=true;this->ReturnValue=ReflexxesAPI::
RML_ERROR_POSITIONAL_LIMITS;break;}}}}for(i=(0x174b+2327-0x2062);i<this->
NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(this->gSTLu->NewPositionVector
->VecData)[i]=(this->CgOpp->TargetPositionVector->VecData)[i]-((this->AqM3n->
VecData)[i]-(this->gSTLu->NewPositionVector->VecData)[i]);}}if((this->
ReturnValue==ReflexxesAPI::RML_FINAL_STATE_REACHED)&&(pOQVd)){this->gSTLu->
SynchronizationTime=this->LSxcd->VecData[this->yyynZ]/this->HPY88;}this->hGSmW(
this->gSTLu);if(this->tMr7Q.PositionalLimitsBehavior==RMLFlags::
POSITIONAL_LIMITS_ACTIVELY_PREVENT){hawYI=this->XDFjK(k2QiQ,this->gSTLu);if(
hawYI){this->ReturnValue=ReflexxesAPI::RML_ERROR_POSITIONAL_LIMITS;}}*aUO0W=*(
this->gSTLu);aUO0W->ResultValue=this->ReturnValue;return(this->ReturnValue);}

int TypeIVRMLPosition::F6GaD(const double&jhvDE,RMLPositionOutputParameters*
aUO0W){unsigned int i=(0xb7d+3700-0x19f1);int UGKZr=ReflexxesAPI::RML_ERROR;
double uOuSq=jhvDE+this->MKEeV-this->CycleTime;if((this->ReturnValue!=
ReflexxesAPI::RML_WORKING)&&(this->ReturnValue!=ReflexxesAPI::
RML_FINAL_STATE_REACHED)){aUO0W->ResultValue=this->ReturnValue;return(this->
ReturnValue);}if((jhvDE<0.0)||(uOuSq>zYA0x)){aUO0W->ResultValue=ReflexxesAPI::
RML_ERROR_USER_TIME_OUT_OF_RANGE;return(ReflexxesAPI::
RML_ERROR_USER_TIME_OUT_OF_RANGE);}if(aUO0W==NULL){return(ReflexxesAPI::
RML_ERROR_NULL_POINTER);}if(aUO0W->NumberOfDOFs!=this->NumberOfDOFs){aUO0W->
ResultValue=ReflexxesAPI::RML_ERROR_NUMBER_OF_DOFS;return(ReflexxesAPI::
RML_ERROR_NUMBER_OF_DOFS);}aUO0W->ANewCalculationWasPerformed=false;UGKZr=VTGwO(
uOuSq,1.0,aUO0W);aUO0W->TrajectoryIsPhaseSynchronized=this->RijuD;aUO0W->
DOFWithTheGreatestExecutionTime=this->yyynZ;if(this->RzgOx){aUO0W->
SynchronizationTime=0.0;for(i=(0xacf+1561-0x10e8);i<this->NumberOfDOFs;i++){if(
this->CgOpp->SelectionVector->VecData[i]){aUO0W->ExecutionTimes->VecData[i]=(
this->LSxcd->VecData)[i]-c42JT-jhvDE;if(aUO0W->ExecutionTimes->VecData[i]<0.0){
aUO0W->ExecutionTimes->VecData[i]=0.0;}}else{aUO0W->ExecutionTimes->VecData[i]=
0.0;}}}else{aUO0W->SynchronizationTime=this->SynchronizationTime-jhvDE;for(i=
(0x19ac+3405-0x26f9);i<this->NumberOfDOFs;i++){if(this->CgOpp->SelectionVector->
VecData[i]){aUO0W->ExecutionTimes->VecData[i]=this->SynchronizationTime-jhvDE;if
(aUO0W->ExecutionTimes->VecData[i]<0.0){aUO0W->ExecutionTimes->VecData[i]=0.0;}}
else{aUO0W->ExecutionTimes->VecData[i]=0.0;}}}if((this->jQM8I)||(this->tMr7Q.
PositionalLimitsBehavior!=RMLFlags::POSITIONAL_LIMITS_IGNORE)){this->BwbwH(this
->MKEeV-this->CycleTime,1.0,aUO0W);}if(!this->jQM8I){this->MUsk2(aUO0W);}for(i=
(0xd28+4157-0x1d65);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
aUO0W->NewPositionVector->VecData)[i]=(this->CgOpp->TargetPositionVector->
VecData)[i]-((this->AqM3n->VecData)[i]-(aUO0W->NewPositionVector->VecData)[i]);}
}this->hGSmW(aUO0W);aUO0W->ResultValue=UGKZr;return(UGKZr);}

void TypeIVRMLPosition::w4N6v(void){unsigned int i=(0x7cb+3872-0x16eb);for(i=
(0x14db+2278-0x1dc1);i<this->NumberOfDOFs;i++){if((this->CgOpp->SelectionVector
->VecData)[i]){if(!(((this->CgOpp->CurrentPositionVector->VecData)[i]==(this->
CgOpp->TargetPositionVector->VecData)[i])&&((this->CgOpp->CurrentVelocityVector
->VecData)[i]==(this->CgOpp->TargetVelocityVector->VecData)[i])&&((this->CgOpp->
TargetVelocityVector->VecData)[i]!=0.0)&&((this->CgOpp->
CurrentAccelerationVector->VecData)[i]==0.0))){return;}}}for(i=(0x6e7+48-0x717);
i<this->NumberOfDOFs;i++){if((this->CgOpp->SelectionVector->VecData)[i]){if((
this->CgOpp->CurrentPositionVector->VecData)[i]!=0.0){(this->CgOpp->
CurrentPositionVector->VecData)[i]*=1.0+dnGW6((this->CgOpp->
CurrentVelocityVector->VecData)[i])*LxPlg;}else{(this->CgOpp->
CurrentPositionVector->VecData)[i]+=dnGW6((this->CgOpp->CurrentVelocityVector->
VecData)[i])*eikdp;}}}return;}

bool TypeIVRMLPosition::XDFjK(const RMLPositionInputParameters&k2QiQ,
RMLPositionOutputParameters*aUO0W){bool Otwo6=false;unsigned int i=
(0x0+2359-0x937),OjlpL=(0x116+1275-0x611);int j=(0x732+6678-0x2148);double cAhwl
=0.0;*(this->Ty8bL->SelectionVector)=*(k2QiQ.SelectionVector);*(this->Ty8bL->
CurrentPositionVector)=*(aUO0W->NewPositionVector);*(this->Ty8bL->
CurrentVelocityVector)=*(aUO0W->NewVelocityVector);*(this->Ty8bL->
CurrentAccelerationVector)=*(aUO0W->NewAccelerationVector);*(this->Ty8bL->
MaxAccelerationVector)=*(k2QiQ.MaxAccelerationVector);*(this->Ty8bL->
MaxJerkVector)=*(k2QiQ.MaxJerkVector);*(this->Ty8bL->TargetVelocityVector)=*(
this->KDMdH);this->Ty8bL->OverrideValue=1.0;this->gAdE9.PositionalLimitsBehavior
=RMLFlags::POSITIONAL_LIMITS_IGNORE;this->gAdE9.SynchronizationBehavior=RMLFlags
::NO_SYNCHRONIZATION;this->gAdE9.EnableTheCalculationOfTheExtremumMotionStates=
true;this->RMLVelocityObject->EPDb1(*(this->Ty8bL),this->UKSpI,this->gAdE9);for(
i=(0x226b+4-0x226f);i<this->NumberOfDOFs;i++){if(this->Ty8bL->SelectionVector->
VecData[i]){if((this->UKSpI->PositionValuesAtTargetVelocity->VecData[i]<=k2QiQ.
MinPositionVector->VecData[i]-s46dd)||(this->UKSpI->
PositionValuesAtTargetVelocity->VecData[i]>=k2QiQ.MaxPositionVector->VecData[i]+
s46dd)){this->PCBIL->VecData[i]=true;}}}if(BkjIW::AkYML(*(this->PCBIL))>
(0x16ef+3285-0x23c4)){Otwo6=true;}if(Otwo6){*(this->Ty8bL->CurrentPositionVector
)=*(k2QiQ.CurrentPositionVector);*(this->Ty8bL->CurrentVelocityVector)=*(k2QiQ.
CurrentVelocityVector);*(this->Ty8bL->CurrentAccelerationVector)=*(k2QiQ.
CurrentAccelerationVector);*(this->Ty8bL->SelectionVector)=*(this->PCBIL);this->
RMLVelocityObject->EPDb1(*(this->Ty8bL),this->UKSpI,this->gAdE9);for(i=
(0x1007+1152-0x1487);i<this->NumberOfDOFs;i++){if(this->PCBIL->VecData[i]){aUO0W
->NewPositionVector->VecData[i]=this->UKSpI->NewPositionVector->VecData[i];aUO0W
->NewVelocityVector->VecData[i]=this->UKSpI->NewVelocityVector->VecData[i];aUO0W
->NewAccelerationVector->VecData[i]=this->UKSpI->NewAccelerationVector->VecData[
i];aUO0W->MinExtremaTimesVector->VecData[i]=this->UKSpI->MinExtremaTimesVector->
VecData[i];aUO0W->MaxExtremaTimesVector->VecData[i]=this->UKSpI->
MaxExtremaTimesVector->VecData[i];aUO0W->ExecutionTimes->VecData[i]=this->UKSpI
->ExecutionTimes->VecData[i];aUO0W->MinPosExtremaPositionVectorOnly->VecData[i]=
this->UKSpI->MinPosExtremaPositionVectorOnly->VecData[i];aUO0W->
MaxPosExtremaPositionVectorOnly->VecData[i]=this->UKSpI->
MaxPosExtremaPositionVectorOnly->VecData[i];this->UKSpI->
GetMotionStateAtMinPosForOneDOF(i,(aUO0W->MinPosExtremaPositionVectorArray)[i],(
aUO0W->MinPosExtremaVelocityVectorArray)[i],(aUO0W->
MinPosExtremaAccelerationVectorArray)[i]);this->UKSpI->
GetMotionStateAtMaxPosForOneDOF(i,(aUO0W->MaxPosExtremaPositionVectorArray)[i],(
aUO0W->MaxPosExtremaVelocityVectorArray)[i],(aUO0W->
MaxPosExtremaAccelerationVectorArray)[i]);aUO0W->Polynomials->
NumberOfCurrentlyValidSegments[i]=this->UKSpI->Polynomials->
NumberOfCurrentlyValidSegments[i];for(j=(0x1a6d+845-0x1dba);j<aUO0W->Polynomials
->NumberOfCurrentlyValidSegments[i];j++){aUO0W->Polynomials->Coefficients[i][j]=
this->UKSpI->Polynomials->Coefficients[i][j];}}if((aUO0W->ExecutionTimes->
VecData[i]>cAhwl)&&(k2QiQ.SelectionVector->VecData[i])){cAhwl=aUO0W->
ExecutionTimes->VecData[i];OjlpL=i;}}aUO0W->DOFWithTheGreatestExecutionTime=i;
aUO0W->TrajectoryIsPhaseSynchronized=false;aUO0W->SynchronizationTime=cAhwl;
aUO0W->ANewCalculationWasPerformed=true;}return(Otwo6);}

void TypeIVRMLPosition::w_jM2(void){unsigned int i=(0x125b+2828-0x1d67);double 
Ke5uk=0.0,fHfde=0.0;if(this->lB4UL>baMkR){Ke5uk=1.0/this->lB4UL;fHfde=1.0/lJXU0(
this->lB4UL);for(i=(0x1626+1133-0x1a93);i<this->NumberOfDOFs;i++){if((this->
CgOpp->SelectionVector->VecData)[i]){this->CgOpp->CurrentVelocityVector->VecData
[i]*=Ke5uk;this->CgOpp->CurrentAccelerationVector->VecData[i]*=fHfde;}}}else{for
(i=(0xc7c+6446-0x25aa);i<this->NumberOfDOFs;i++){if((this->CgOpp->
SelectionVector->VecData)[i]){this->CgOpp->CurrentVelocityVector->VecData[i]=0.0
;this->CgOpp->CurrentAccelerationVector->VecData[i]=0.0;}}}return;}

int TypeIVRMLPosition::SetupOverrideFilter(const double&cAxLR,const double&eIKIe
){if((cAxLR<0.0)||(cAxLR>R_UAP)||(eIKIe<0.0)||(eIKIe>this->
MaxTimeForOverrideFilter)){return(ReflexxesAPI::RML_ERROR_OVERRIDE_OUT_OF_RANGE)
;}this->bthTm->NMWfY(cAxLR,eIKIe);this->HPY88=cAxLR;this->lB4UL=cAxLR;return(
ReflexxesAPI::RML_NO_ERROR);}
