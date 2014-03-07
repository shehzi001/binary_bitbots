






























#include <TypeIVRMLVelocity.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLStep1Decisions.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVelocityOutputParameters.h>
#include <RMLVector.h>
#include <ReflexxesAPI.h>
#include <RMLVelocityFlags.h>
#include <TypeIVRMLVelocityTools.h>
#include <stdlib.h>
using namespace BkjIW;

TypeIVRMLVelocity::TypeIVRMLVelocity(const unsigned int&tctMo,const double&ypdPO
,const bool&ZmVkc,const double&SqpNi){this->RijuD=false;this->jQM8I=false;this->
RzgOx=false;this->ReturnValue=ReflexxesAPI::RML_ERROR;this->P8h37=
(0x113+5200-0x1563);this->NumberOfDOFs=tctMo;this->CycleTime=ypdPO;this->MKEeV=
0.0;this->SynchronizationTime=0.0;this->HPY88=QmAvH;this->lB4UL=QmAvH;this->
MaxTimeForOverrideFilter=SqpNi;this->_aMjT=new RMLBoolVector(this->NumberOfDOFs)
;this->TC8_f=new RMLBoolVector(this->NumberOfDOFs);this->PCBIL=new RMLBoolVector
(this->NumberOfDOFs);this->m7TST=new RMLIntVector(this->NumberOfDOFs);this->
ExecutionTimes=new RMLDoubleVector(this->NumberOfDOFs);this->FiGD5=new 
RMLDoubleVector(this->NumberOfDOFs);this->D1CDw=new RMLDoubleVector(this->
NumberOfDOFs);this->DcVfC=new RMLDoubleVector(this->NumberOfDOFs);this->XAvWp=
new RMLDoubleVector(this->NumberOfDOFs);this->O99pp=new RMLDoubleVector(this->
NumberOfDOFs);this->MGobU=new RMLDoubleVector(this->NumberOfDOFs);this->vUpOL=
new RMLDoubleVector(this->NumberOfDOFs);this->KDMdH=new RMLDoubleVector(this->
NumberOfDOFs);this->f_1Yi=new RMLVelocityInputParameters(this->NumberOfDOFs);
this->CgOpp=new RMLVelocityInputParameters(this->NumberOfDOFs);this->qfrNo=new 
RMLVelocityInputParameters(this->NumberOfDOFs);this->gSTLu=new 
RMLVelocityOutputParameters(this->NumberOfDOFs);this->mDCak=new 
RMLVelocityOutputParameters(this->NumberOfDOFs);this->bthTm=new g3_QI(this->
CycleTime,this->MaxTimeForOverrideFilter,f8CMZ,1.0);if(ZmVkc){this->YQtel=NULL;
this->qLqio=false;}else{this->YQtel=new TypeIVRMLVelocity(this->NumberOfDOFs,
this->CycleTime,true,this->MaxTimeForOverrideFilter);this->qLqio=true;}this->
Polynomials=new jKICA[this->NumberOfDOFs];}

TypeIVRMLVelocity::~TypeIVRMLVelocity(void){delete this->_aMjT;delete this->
TC8_f;delete this->PCBIL;delete this->m7TST;delete this->ExecutionTimes;delete 
this->FiGD5;delete this->D1CDw;delete this->DcVfC;delete this->XAvWp;delete this
->O99pp;delete this->MGobU;delete this->vUpOL;delete this->KDMdH;delete this->
f_1Yi;delete this->CgOpp;delete this->qfrNo;delete this->gSTLu;delete this->
mDCak;if(qLqio){delete this->YQtel;}delete this->bthTm;delete[]this->Polynomials
;this->_aMjT=NULL;this->TC8_f=NULL;this->PCBIL=NULL;this->m7TST=NULL;this->
ExecutionTimes=NULL;this->FiGD5=NULL;this->D1CDw=NULL;this->DcVfC=NULL;this->
XAvWp=NULL;this->O99pp=NULL;this->MGobU=NULL;this->vUpOL=NULL;this->KDMdH=NULL;
this->f_1Yi=NULL;this->CgOpp=NULL;this->qfrNo=NULL;this->gSTLu=NULL;this->mDCak=
NULL;this->YQtel=NULL;this->bthTm=NULL;this->Polynomials=NULL;}

int TypeIVRMLVelocity::EPDb1(const RMLVelocityInputParameters&k2QiQ,
RMLVelocityOutputParameters*aUO0W,const RMLVelocityFlags&JKkfQ){bool GJyHQ=false
,pOQVd=false,hawYI=false;unsigned int i=(0xc7f+77-0xccc);if((aUO0W==NULL)||(&
k2QiQ==NULL)||(&JKkfQ==NULL)){this->ReturnValue=ReflexxesAPI::
RML_ERROR_NULL_POINTER;if(aUO0W!=NULL){aUO0W->ResultValue=this->ReturnValue;}
return(this->ReturnValue);}if((this->NumberOfDOFs!=k2QiQ.GetNumberOfDOFs())||(
this->NumberOfDOFs!=aUO0W->GetNumberOfDOFs())){this->ReturnValue=ReflexxesAPI::
RML_ERROR_NUMBER_OF_DOFS;aUO0W->ResultValue=this->ReturnValue;return(this->
ReturnValue);}
if((k2QiQ.OverrideValue>R_UAP)||(k2QiQ.OverrideValue<0.0)){this->brYVd(*(this->
CgOpp),this->gSTLu);*aUO0W=*(this->gSTLu);this->ReturnValue=ReflexxesAPI::
RML_ERROR_OVERRIDE_OUT_OF_RANGE;aUO0W->ResultValue=this->ReturnValue;return(this
->ReturnValue);}this->jQM8I=JKkfQ.EnableTheCalculationOfTheExtremumMotionStates;
*(this->CgOpp)=k2QiQ;if(JKkfQ!=this->CRSqy){pOQVd=true;}
if(!pOQVd){if(*(this->CgOpp->SelectionVector)!=*(this->f_1Yi->SelectionVector)){
pOQVd=true;}else{for(i=(0x930+5510-0x1eb6);i<this->NumberOfDOFs;i++){if((this->
CgOpp->SelectionVector->VecData)[i]){if(!(OHHbY((this->CgOpp->
CurrentVelocityVector->VecData)[i],(this->gSTLu->NewVelocityVector->VecData)[i])
&&OHHbY((this->CgOpp->CurrentAccelerationVector->VecData)[i],(this->gSTLu->
NewAccelerationVector->VecData)[i])&&OHHbY((this->CgOpp->MaxJerkVector->VecData)
[i],(this->f_1Yi->MaxJerkVector->VecData)[i])&&OHHbY((this->CgOpp->
MaxAccelerationVector->VecData)[i],(this->f_1Yi->MaxAccelerationVector->VecData)
[i])&&OHHbY((this->CgOpp->TargetVelocityVector->VecData)[i],(this->f_1Yi->
TargetVelocityVector->VecData)[i])&&OHHbY((this->CgOpp->CurrentPositionVector->
VecData)[i],(this->gSTLu->NewPositionVector->VecData)[i]))){pOQVd=true;break;}}}
}}

this->bthTm->br6v1(k2QiQ.OverrideValue,&(this->HPY88),&(this->gSTLu->
OverrideFilterIsActive));if((pOQVd)||((this->ReturnValue!=ReflexxesAPI::
RML_WORKING)&&(this->ReturnValue!=ReflexxesAPI::RML_ERROR_POSITIONAL_LIMITS)&&(
this->ReturnValue!=ReflexxesAPI::RML_FINAL_STATE_REACHED))){this->MKEeV=this->
CycleTime*this->HPY88;pOQVd=true;

this->SynchronizationTime=0.0;}else{this->MKEeV+=this->CycleTime*this->HPY88;}*(
this->f_1Yi)=k2QiQ;this->CRSqy=JKkfQ;if(pOQVd){this->PCBIL->Set(false);this->
w_jM2();this->RijuD=(JKkfQ.SynchronizationBehavior==RMLFlags::
ONLY_PHASE_SYNCHRONIZATION)||(JKkfQ.SynchronizationBehavior==RMLFlags::
PHASE_SYNCHRONIZATION_IF_POSSIBLE);for(i=(0xc34+914-0xfc6);i<this->NumberOfDOFs;
i++){if((this->CgOpp->SelectionVector->VecData)[i]){if(((this->CgOpp->
MaxAccelerationVector->VecData)[i]<=0.0)||((this->CgOpp->MaxJerkVector->VecData)
[i]<=0.0)){GJyHQ=true;}}}if(GJyHQ){this->brYVd(*(this->CgOpp),this->gSTLu);*
aUO0W=*(this->gSTLu);this->ReturnValue=ReflexxesAPI::
RML_ERROR_INVALID_INPUT_VALUES;aUO0W->ResultValue=this->ReturnValue;return(this
->ReturnValue);}this->RzgOx=(JKkfQ.SynchronizationBehavior==RMLFlags::
NO_SYNCHRONIZATION);this->RijuD=((JKkfQ.SynchronizationBehavior==RMLFlags::
ONLY_PHASE_SYNCHRONIZATION)||(JKkfQ.SynchronizationBehavior==RMLFlags::
PHASE_SYNCHRONIZATION_IF_POSSIBLE));this->nveH2();this->SynchronizationTime=0.0;
for(i=(0x16df+2889-0x2228);i<this->NumberOfDOFs;i++){if(this->CgOpp->
SelectionVector->VecData[i]){if((this->ExecutionTimes->VecData)[i]>this->
SynchronizationTime){this->SynchronizationTime=(this->ExecutionTimes->VecData)[i
];this->P8h37=i;}}}if((JKkfQ.SynchronizationBehavior!=RMLFlags::
NO_SYNCHRONIZATION)&&(k2QiQ.MinimumSynchronizationTime>this->SynchronizationTime
)){this->SynchronizationTime=k2QiQ.MinimumSynchronizationTime;}if(this->RijuD){
this->VDr0j();}if((!this->RijuD)&&(JKkfQ.SynchronizationBehavior==RMLFlags::
ONLY_PHASE_SYNCHRONIZATION)){this->brYVd(*(this->CgOpp),this->gSTLu);*aUO0W=*(
this->gSTLu);if(k2QiQ.CheckForValidity()){this->ReturnValue=ReflexxesAPI::
RML_ERROR_NO_PHASE_SYNCHRONIZATION;}else{this->ReturnValue=ReflexxesAPI::
RML_ERROR_INVALID_INPUT_VALUES;}aUO0W->ResultValue=this->ReturnValue;return(this
->ReturnValue);}if((JKkfQ.SynchronizationBehavior==RMLFlags::
ONLY_TIME_SYNCHRONIZATION)||((JKkfQ.SynchronizationBehavior==RMLFlags::
PHASE_SYNCHRONIZATION_IF_POSSIBLE)&&(this->RijuD==false))){this->ar_Rj();}else{
this->Fvgfh();}}this->gSTLu->CurrentOverrideValue=this->HPY88;this->lB4UL=this->
HPY88;this->gSTLu->ANewCalculationWasPerformed=pOQVd;this->ReturnValue=this->
A04l_(this->MKEeV,this->HPY88,this->gSTLu);this->gSTLu->
TrajectoryIsPhaseSynchronized=this->RijuD;this->gSTLu->
DOFWithTheGreatestExecutionTime=this->P8h37;if(this->RzgOx){this->gSTLu->
SynchronizationTime=0.0;for(i=(0x1402+2524-0x1dde);i<this->NumberOfDOFs;i++){if(
this->CgOpp->SelectionVector->VecData[i]){if(this->HPY88>BLXud){this->gSTLu->
ExecutionTimes->VecData[i]=((this->ExecutionTimes->VecData)[i]-this->MKEeV+this
->CycleTime)/this->HPY88;}else{this->gSTLu->ExecutionTimes->VecData[i]=kiQzO;}if
(this->gSTLu->ExecutionTimes->VecData[i]<0.0){this->gSTLu->ExecutionTimes->
VecData[i]=0.0;}}else{this->gSTLu->ExecutionTimes->VecData[i]=0.0;}}}else{if(
this->HPY88>BLXud){this->gSTLu->SynchronizationTime=(this->SynchronizationTime-
this->MKEeV+this->CycleTime)/this->HPY88;}else{this->gSTLu->SynchronizationTime=
kiQzO;}if(this->gSTLu->SynchronizationTime<0.0){this->gSTLu->SynchronizationTime
=0.0;}for(i=(0xe3b+4083-0x1e2e);i<this->NumberOfDOFs;i++){if(this->CgOpp->
SelectionVector->VecData[i]){this->gSTLu->ExecutionTimes->VecData[i]=this->gSTLu
->SynchronizationTime;}else{this->gSTLu->ExecutionTimes->VecData[i]=0.0;}}}if((
this->jQM8I)||(JKkfQ.PositionalLimitsBehavior!=RMLFlags::
POSITIONAL_LIMITS_IGNORE)){this->BwbwH(this->MKEeV-this->CycleTime,this->HPY88,
this->gSTLu);}if(!this->jQM8I){this->MUsk2(this->gSTLu);}if(JKkfQ.
PositionalLimitsBehavior!=RMLFlags::POSITIONAL_LIMITS_IGNORE){for(i=
(0x13d3+209-0x14a4);i<this->NumberOfDOFs;i++){if(this->CgOpp->SelectionVector->
VecData[i]){if((this->gSTLu->MinPosExtremaPositionVectorOnly->VecData[i]<=this->
CgOpp->MinPositionVector->VecData[i])||(this->gSTLu->
MaxPosExtremaPositionVectorOnly->VecData[i]>=this->CgOpp->MaxPositionVector->
VecData[i])){this->ReturnValue=ReflexxesAPI::RML_ERROR_POSITIONAL_LIMITS;break;}
}}}if(JKkfQ.PositionalLimitsBehavior==RMLFlags::
POSITIONAL_LIMITS_ACTIVELY_PREVENT){hawYI=this->XDFjK(k2QiQ,this->gSTLu);if(
hawYI){this->ReturnValue=ReflexxesAPI::RML_ERROR_POSITIONAL_LIMITS;}}*aUO0W=*(
this->gSTLu);aUO0W->ResultValue=this->ReturnValue;return(this->ReturnValue);}

int TypeIVRMLVelocity::F6GaD(const double&jhvDE,RMLVelocityOutputParameters*
aUO0W){unsigned int i=(0x2+8226-0x2024);int UGKZr=ReflexxesAPI::
RML_FINAL_STATE_REACHED;double uOuSq=jhvDE+this->MKEeV-this->CycleTime;if((this
->ReturnValue!=ReflexxesAPI::RML_WORKING)&&(this->ReturnValue!=ReflexxesAPI::
RML_FINAL_STATE_REACHED)){aUO0W->ResultValue=this->ReturnValue;return(this->
ReturnValue);}if((jhvDE<0.0)||(uOuSq>zYA0x)){aUO0W->ResultValue=ReflexxesAPI::
RML_ERROR_USER_TIME_OUT_OF_RANGE;return(ReflexxesAPI::
RML_ERROR_USER_TIME_OUT_OF_RANGE);}if(aUO0W==NULL){return(ReflexxesAPI::
RML_ERROR_NULL_POINTER);}if(aUO0W->NumberOfDOFs!=this->NumberOfDOFs){aUO0W->
ResultValue=ReflexxesAPI::RML_ERROR_NUMBER_OF_DOFS;return(ReflexxesAPI::
RML_ERROR_NUMBER_OF_DOFS);}aUO0W->ANewCalculationWasPerformed=false;UGKZr=this->
A04l_(uOuSq,1.0,aUO0W);aUO0W->TrajectoryIsPhaseSynchronized=this->RijuD;aUO0W->
DOFWithTheGreatestExecutionTime=this->P8h37;if(this->RzgOx){aUO0W->
SynchronizationTime=0.0;for(i=(0xdf+5942-0x1815);i<this->NumberOfDOFs;i++){if(
this->CgOpp->SelectionVector->VecData[i]){aUO0W->ExecutionTimes->VecData[i]=(
this->ExecutionTimes->VecData)[i]-this->MKEeV+this->CycleTime-uOuSq;if(aUO0W->
ExecutionTimes->VecData[i]<0.0){aUO0W->ExecutionTimes->VecData[i]=0.0;}}else{
aUO0W->ExecutionTimes->VecData[i]=0.0;}}}else{aUO0W->SynchronizationTime=this->
SynchronizationTime-uOuSq;for(i=(0x8fc+2477-0x12a9);i<this->NumberOfDOFs;i++){if
(this->CgOpp->SelectionVector->VecData[i]){aUO0W->ExecutionTimes->VecData[i]=
this->SynchronizationTime-uOuSq;if(aUO0W->ExecutionTimes->VecData[i]<0.0){aUO0W
->ExecutionTimes->VecData[i]=0.0;}}else{aUO0W->ExecutionTimes->VecData[i]=0.0;}}
}if((this->jQM8I)||(this->CRSqy.PositionalLimitsBehavior!=RMLFlags::
POSITIONAL_LIMITS_IGNORE)){this->BwbwH(this->MKEeV-this->CycleTime,1.0,aUO0W);}
if(!this->jQM8I){this->MUsk2(aUO0W);}aUO0W->ResultValue=UGKZr;return(UGKZr);}

int TypeIVRMLVelocity::SetupOverrideFilter(const double&cAxLR,const double&eIKIe
){if((cAxLR<0.0)||(cAxLR>R_UAP)||(eIKIe<0.0)||(eIKIe>this->
MaxTimeForOverrideFilter)){return(ReflexxesAPI::RML_ERROR_OVERRIDE_OUT_OF_RANGE)
;}this->bthTm->NMWfY(cAxLR,eIKIe);this->HPY88=cAxLR;this->lB4UL=cAxLR;return(
ReflexxesAPI::RML_NO_ERROR);}

void TypeIVRMLVelocity::w_jM2(void){unsigned int i=(0x15f+1481-0x728);double 
Ke5uk=0.0,fHfde=0.0;if(this->lB4UL>baMkR){Ke5uk=1.0/this->lB4UL;fHfde=1.0/lJXU0(
this->lB4UL);for(i=(0x533+5703-0x1b7a);i<this->NumberOfDOFs;i++){if((this->CgOpp
->SelectionVector->VecData)[i]){this->CgOpp->CurrentVelocityVector->VecData[i]*=
Ke5uk;this->CgOpp->CurrentAccelerationVector->VecData[i]*=fHfde;}}}else{for(i=
(0xff0+141-0x107d);i<this->NumberOfDOFs;i++){if((this->CgOpp->SelectionVector->
VecData)[i]){this->CgOpp->CurrentVelocityVector->VecData[i]=0.0;this->CgOpp->
CurrentAccelerationVector->VecData[i]=0.0;}}}return;}

bool TypeIVRMLVelocity::XDFjK(const RMLVelocityInputParameters&k2QiQ,
RMLVelocityOutputParameters*aUO0W){bool Otwo6=false;unsigned int i=
(0x90c+653-0xb99),OjlpL=(0xdb9+96-0xe19);int j=(0x1540+1244-0x1a1c);double cAhwl
=0.0;RMLVelocityFlags JKkfQ;*(this->qfrNo->SelectionVector)=*(k2QiQ.
SelectionVector);*(this->qfrNo->CurrentPositionVector)=*(aUO0W->
NewPositionVector);*(this->qfrNo->CurrentVelocityVector)=*(aUO0W->
NewVelocityVector);*(this->qfrNo->CurrentAccelerationVector)=*(aUO0W->
NewAccelerationVector);*(this->qfrNo->MaxAccelerationVector)=*(k2QiQ.
MaxAccelerationVector);*(this->qfrNo->MaxJerkVector)=*(k2QiQ.MaxJerkVector);*(
this->qfrNo->TargetVelocityVector)=*(this->KDMdH);JKkfQ.PositionalLimitsBehavior
=RMLFlags::POSITIONAL_LIMITS_IGNORE;JKkfQ.SynchronizationBehavior=RMLFlags::
NO_SYNCHRONIZATION;JKkfQ.EnableTheCalculationOfTheExtremumMotionStates=true;this
->qfrNo->OverrideValue=1.0;this->YQtel->EPDb1(*(this->qfrNo),this->mDCak,JKkfQ);
for(i=(0x120d+3818-0x20f7);i<this->NumberOfDOFs;i++){if(k2QiQ.SelectionVector->
VecData[i]){if((this->mDCak->PositionValuesAtTargetVelocity->VecData[i]<=k2QiQ.
MinPositionVector->VecData[i]-s46dd)||(this->mDCak->
PositionValuesAtTargetVelocity->VecData[i]>=k2QiQ.MaxPositionVector->VecData[i]+
s46dd)){this->PCBIL->VecData[i]=true;}}}if(BkjIW::AkYML(*(this->PCBIL))>
(0xbc9+5139-0x1fdc)){Otwo6=true;}if(Otwo6){*(this->qfrNo->CurrentPositionVector)
=*(k2QiQ.CurrentPositionVector);*(this->qfrNo->CurrentVelocityVector)=*(k2QiQ.
CurrentVelocityVector);*(this->qfrNo->CurrentAccelerationVector)=*(k2QiQ.
CurrentAccelerationVector);*(this->qfrNo->SelectionVector)=*(this->PCBIL);this->
YQtel->EPDb1(*(this->qfrNo),this->mDCak,JKkfQ);for(i=(0xced+3152-0x193d);i<this
->NumberOfDOFs;i++){if(this->PCBIL->VecData[i]){aUO0W->NewPositionVector->
VecData[i]=this->mDCak->NewPositionVector->VecData[i];aUO0W->NewVelocityVector->
VecData[i]=this->mDCak->NewVelocityVector->VecData[i];aUO0W->
NewAccelerationVector->VecData[i]=this->mDCak->NewAccelerationVector->VecData[i]
;aUO0W->MinExtremaTimesVector->VecData[i]=this->mDCak->MinExtremaTimesVector->
VecData[i];aUO0W->MaxExtremaTimesVector->VecData[i]=this->mDCak->
MaxExtremaTimesVector->VecData[i];aUO0W->ExecutionTimes->VecData[i]=this->mDCak
->ExecutionTimes->VecData[i];aUO0W->MinPosExtremaPositionVectorOnly->VecData[i]=
this->mDCak->MinPosExtremaPositionVectorOnly->VecData[i];aUO0W->
MaxPosExtremaPositionVectorOnly->VecData[i]=this->mDCak->
MaxPosExtremaPositionVectorOnly->VecData[i];this->mDCak->
GetMotionStateAtMinPosForOneDOF(i,(aUO0W->MinPosExtremaPositionVectorArray)[i],(
aUO0W->MinPosExtremaVelocityVectorArray)[i],(aUO0W->
MinPosExtremaAccelerationVectorArray)[i]);this->mDCak->
GetMotionStateAtMaxPosForOneDOF(i,(aUO0W->MaxPosExtremaPositionVectorArray)[i],(
aUO0W->MaxPosExtremaVelocityVectorArray)[i],(aUO0W->
MaxPosExtremaAccelerationVectorArray)[i]);aUO0W->Polynomials->
NumberOfCurrentlyValidSegments[i]=this->mDCak->Polynomials->
NumberOfCurrentlyValidSegments[i];for(j=(0x1449+2186-0x1cd3);j<aUO0W->
Polynomials->NumberOfCurrentlyValidSegments[i];j++){aUO0W->Polynomials->
Coefficients[i][j]=this->mDCak->Polynomials->Coefficients[i][j];}if((aUO0W->
ExecutionTimes->VecData[i]>cAhwl)&&(k2QiQ.SelectionVector->VecData[i])){cAhwl=
aUO0W->ExecutionTimes->VecData[i];OjlpL=i;}}}aUO0W->
DOFWithTheGreatestExecutionTime=i;aUO0W->TrajectoryIsPhaseSynchronized=false;
aUO0W->SynchronizationTime=cAhwl;aUO0W->ANewCalculationWasPerformed=true;}return
(Otwo6);}
