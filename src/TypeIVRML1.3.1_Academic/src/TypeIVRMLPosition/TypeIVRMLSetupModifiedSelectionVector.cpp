






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>
#include <RMLVector.h>
using namespace BkjIW;

void TypeIVRMLPosition::KNl2l(void){unsigned int i=(0xd43+4556-0x1f0f);*(this->
SkCtJ)=*(this->CgOpp->SelectionVector);for(i=(0x1068+1067-0x1493);i<this->
NumberOfDOFs;i++){if((this->CgOpp->SelectionVector->VecData)[i]){if(((this->
CgOpp->TargetVelocityVector->VecData)[i]==0.0)&&((this->LSxcd->VecData)[i]<=this
->CycleTime)){(this->SkCtJ->VecData)[i]=false;





(this->CgOpp->CurrentPositionVector->VecData)[i]=(this->CgOpp->
TargetPositionVector->VecData)[i]/(this->VGQF6->VecData)[i];(this->CgOpp->
CurrentVelocityVector->VecData)[i]=0.0;(this->CgOpp->CurrentAccelerationVector->
VecData)[i]=0.0;(this->VGQF6->VecData)[i]=1.0;}}}}
