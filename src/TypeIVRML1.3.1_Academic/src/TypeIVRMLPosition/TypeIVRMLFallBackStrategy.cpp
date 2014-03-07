






























#include <TypeIVRMLPosition.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVelocityOutputParameters.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>
#include <RMLVector.h>
#include <RMLVelocityFlags.h>
#include <TypeIVRMLVelocity.h>


void TypeIVRMLPosition::brYVd(const RMLPositionInputParameters&k2QiQ,
RMLPositionOutputParameters*aUO0W,const RMLPositionFlags&jQwUc){unsigned int i=
(0xd93+2030-0x1581);*(this->Ty8bL->SelectionVector)=*(k2QiQ.SelectionVector);*(
this->Ty8bL->CurrentPositionVector)=*(k2QiQ.CurrentPositionVector);*(this->Ty8bL
->CurrentVelocityVector)=*(k2QiQ.CurrentVelocityVector);*(this->Ty8bL->
CurrentAccelerationVector)=*(k2QiQ.CurrentAccelerationVector);*(this->Ty8bL->
MaxAccelerationVector)=*(k2QiQ.MaxAccelerationVector);*(this->Ty8bL->
MaxJerkVector)=*(k2QiQ.MaxJerkVector);if(jQwUc.
KeepCurrentVelocityInCaseOfFallbackStrategy){*(this->Ty8bL->TargetVelocityVector
)=*(k2QiQ.CurrentVelocityVector);}else{*(this->Ty8bL->TargetVelocityVector)=*(
k2QiQ.AlternativeTargetVelocityVector);}if(jQwUc.SynchronizationBehavior==
RMLFlags::ONLY_PHASE_SYNCHRONIZATION){this->gAdE9.SynchronizationBehavior=
RMLFlags::ONLY_PHASE_SYNCHRONIZATION;}else{this->gAdE9.SynchronizationBehavior=
RMLFlags::NO_SYNCHRONIZATION;}this->Ty8bL->OverrideValue=1.0;this->
RMLVelocityObject->EPDb1(*(this->Ty8bL),this->UKSpI,this->gAdE9);*(aUO0W->
NewPositionVector)=*(this->UKSpI->NewPositionVector);*(aUO0W->NewVelocityVector)
=*(this->UKSpI->NewVelocityVector);*(aUO0W->NewAccelerationVector)=*(this->UKSpI
->NewAccelerationVector);aUO0W->SynchronizationTime=this->UKSpI->
GetGreatestExecutionTime();aUO0W->TrajectoryIsPhaseSynchronized=false;aUO0W->
ANewCalculationWasPerformed=true;*(aUO0W->MinPosExtremaPositionVectorOnly)=*(
this->UKSpI->MinPosExtremaPositionVectorOnly);*(aUO0W->
MaxPosExtremaPositionVectorOnly)=*(this->UKSpI->MaxPosExtremaPositionVectorOnly)
;*(aUO0W->MinExtremaTimesVector)=*(this->UKSpI->MinExtremaTimesVector);*(aUO0W->
MaxExtremaTimesVector)=*(this->UKSpI->MaxExtremaTimesVector);for(i=
(0x1a7+1246-0x685);i<this->NumberOfDOFs;i++){*((aUO0W->
MinPosExtremaPositionVectorArray)[i])=*((this->UKSpI->
MinPosExtremaPositionVectorArray)[i]);*((aUO0W->MinPosExtremaVelocityVectorArray
)[i])=*((this->UKSpI->MinPosExtremaVelocityVectorArray)[i]);*((aUO0W->
MinPosExtremaAccelerationVectorArray)[i])=*((this->UKSpI->
MinPosExtremaAccelerationVectorArray)[i]);*((aUO0W->
MaxPosExtremaPositionVectorArray)[i])=*((this->UKSpI->
MaxPosExtremaPositionVectorArray)[i]);*((aUO0W->MaxPosExtremaVelocityVectorArray
)[i])=*((this->UKSpI->MaxPosExtremaVelocityVectorArray)[i]);*((aUO0W->
MaxPosExtremaAccelerationVectorArray)[i])=*((this->UKSpI->
MaxPosExtremaAccelerationVectorArray)[i]);}}
