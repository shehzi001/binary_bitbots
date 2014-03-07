





























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLThreadControl.h>
#include <TypeIVRMLDecisionTree2.h>
#include <TypeIVRMLStep2WithoutSynchronization.h>
#include <RMLPositionInputParameters.h>
#include <ReflexxesAPI.h>
#ifdef zmpmF
#include <pthread.h>
#endif
using namespace BkjIW;

bool TypeIVRMLPosition::OOB8g(void){unsigned int ErFg5=(0x27+8832-0x22a7),i=
(0x1168+2804-0x1c5c);if((this->RijuD)&&(!this->b9NhV)){

this->wYLxr();}else{if((this->RzgOx)||(this->b9NhV)){for(i=(0x15d5+633-0x184e);i
<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){K0DuV((this->CgOpp->
CurrentPositionVector->VecData)[i],(this->CgOpp->CurrentVelocityVector->VecData)
[i],(this->CgOpp->CurrentAccelerationVector->VecData)[i],(this->CgOpp->
MaxJerkVector->VecData)[i],(this->CgOpp->MaxAccelerationVector->VecData)[i],(
this->CgOpp->MaxVelocityVector->VecData)[i],(this->CgOpp->TargetPositionVector->
VecData)[i],(this->CgOpp->TargetVelocityVector->VecData)[i],(this->HdV60->
VecData)[i],(this->GR2PP->VecData)[i],this->tMr7Q.
BehaviorIfInitialStateBreachesConstraints,&((this->Polynomials)[i]));}}}else{
this->aAXyd->Jo1cd(this->SkCtJ->VecData,LVHAx::RRc8q);


while(this->aAXyd->pR7Vi(&ErFg5)){h4kNS(this,ErFg5);}
this->aAXyd->tfLMt();}}for(i=(0x62a+7026-0x219c);i<this->NumberOfDOFs;i++){if((
this->SkCtJ->VecData)[i]){if((this->mpz_d->VecData)[i]){return(TypeIVRMLPosition
::KeQfP);}}}return(TypeIVRMLPosition::wO433);}
