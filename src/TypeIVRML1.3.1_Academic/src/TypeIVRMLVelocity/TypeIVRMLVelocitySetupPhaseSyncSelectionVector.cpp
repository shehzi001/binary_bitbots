






























#include <TypeIVRMLVelocity.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVector.h>
using namespace BkjIW;

void TypeIVRMLVelocity::qYvqy(void){unsigned int i=(0x18d8+1019-0x1cd3);*(this->
TC8_f)=*(this->CgOpp->SelectionVector);for(i=(0x3f5+6820-0x1e99);i<this->
NumberOfDOFs;i++){if(((this->CgOpp->SelectionVector->VecData)[i])&&((this->
ExecutionTimes->VecData)[i]<=this->CycleTime)&&(PCYBZ(0.0,(this->CgOpp->
CurrentAccelerationVector->VecData)[i],this->CycleTime*(this->CgOpp->
MaxJerkVector->VecData)[i]))&&(PCYBZ(0.0,(this->CgOpp->CurrentVelocityVector->
VecData)[i],0.5*lJXU0(this->CycleTime)*(this->CgOpp->MaxJerkVector->VecData)[i])
)&&((this->CgOpp->TargetVelocityVector->VecData)[i]==0.0)){(this->TC8_f->VecData
)[i]=false;(this->CgOpp->CurrentVelocityVector->VecData)[i]=0.0;(this->CgOpp->
CurrentAccelerationVector->VecData)[i]=0.0;}}}
