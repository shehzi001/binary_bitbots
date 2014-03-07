






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLDecisionTree1A.h>
#include <TypeIVRMLDecisionTree1B1.h>
#include <TypeIVRMLDecisionTree1B2.h>
#include <TypeIVRMLDecisionTree1B3.h>
#include <TypeIVRMLDecisionTree1C.h>
#include <TypeIVRMLDecisionTree2.h>
#include <TypeIVRMLThreadControl.h>
#include <TypeIVRMLMath.h>
#ifdef zmpmF
#include <pthread.h>
#endif
using namespace BkjIW;
#ifdef zmpmF


void*TypeIVRMLPosition::Zt3yZ(void*C9gkm){unsigned int ErFg5=
(0x184d+3658-0x2697),LKNPI=LVHAx::vzXbk,C8FaE=(0x1d5d+2002-0x252f);
TypeIVRMLPosition*i75kT=(TypeIVRMLPosition*)C9gkm;C8FaE=i75kT->xLwRq;
pthread_mutex_lock(&(i75kT->ZmUm9));i75kT->Mp3_I=true;pthread_mutex_unlock(&(
i75kT->ZmUm9));pthread_cond_signal(&(i75kT->mb1i9));for(;;){i75kT->aAXyd->nKv9A(
C8FaE);if(i75kT->aAXyd->LUti5()){break;}i75kT->aAXyd->NB96T(C8FaE,&ErFg5,&LKNPI)
;if(LKNPI==LVHAx::TlOP4){sTfov(i75kT,ErFg5);continue;}if(LKNPI==LVHAx::lOqfu){
kQnjp(i75kT,ErFg5);continue;}if(LKNPI==LVHAx::RRc8q){h4kNS(i75kT,ErFg5);continue
;}}pthread_exit(NULL);return((void*)NULL);
}
#endif


void TypeIVRMLPosition::sTfov(TypeIVRMLPosition*i75kT,unsigned int&ErFg5){(i75kT
->mpz_d->VecData)[ErFg5]=RldDr((i75kT->CgOpp->CurrentPositionVector->VecData)[
ErFg5],(i75kT->CgOpp->CurrentVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->
CurrentAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->MaxJerkVector->VecData
)[ErFg5],(i75kT->CgOpp->MaxAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->
MaxVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->TargetPositionVector->VecData)
[ErFg5],(i75kT->CgOpp->TargetVelocityVector->VecData)[ErFg5],i75kT->tMr7Q.
BehaviorIfInitialStateBreachesConstraints,&((i75kT->GR2PP->VecData)[ErFg5]),&((
i75kT->LSxcd->VecData)[ErFg5]),&((i75kT->HdV60->VecData)[ErFg5]));}

void TypeIVRMLPosition::kQnjp(TypeIVRMLPosition*i75kT,unsigned int&ErFg5){RnVrR 
qSXnr;(i75kT->qVJUu->VecData)[ErFg5]=kiQzO;(i75kT->_HAh0->VecData)[ErFg5]=kiQzO;
qSXnr=dTpcB((i75kT->CgOpp->CurrentPositionVector->VecData)[ErFg5],(i75kT->CgOpp
->CurrentVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->
CurrentAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->MaxJerkVector->VecData
)[ErFg5],(i75kT->CgOpp->MaxAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->
MaxVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->TargetPositionVector->VecData)
[ErFg5],(i75kT->CgOpp->TargetVelocityVector->VecData)[ErFg5],i75kT->tMr7Q.
BehaviorIfInitialStateBreachesConstraints);if(qSXnr==h0Qso){(i75kT->mpz_d->
VecData)[ErFg5]=bfRQ_((i75kT->CgOpp->CurrentPositionVector->VecData)[ErFg5],(
i75kT->CgOpp->CurrentVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->
CurrentAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->MaxJerkVector->VecData
)[ErFg5],(i75kT->CgOpp->MaxAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->
MaxVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->TargetPositionVector->VecData)
[ErFg5],(i75kT->CgOpp->TargetVelocityVector->VecData)[ErFg5],(i75kT->LSxcd->
VecData)[ErFg5],i75kT->tMr7Q.BehaviorIfInitialStateBreachesConstraints,&((i75kT
->qSPLG->VecData)[ErFg5]),&((i75kT->qVJUu->VecData)[ErFg5]));}if(qSXnr==sJjGC){(
i75kT->mpz_d->VecData)[ErFg5]=Cz3Ip((i75kT->CgOpp->CurrentPositionVector->
VecData)[ErFg5],(i75kT->CgOpp->CurrentVelocityVector->VecData)[ErFg5],(i75kT->
CgOpp->CurrentAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->MaxJerkVector->
VecData)[ErFg5],(i75kT->CgOpp->MaxAccelerationVector->VecData)[ErFg5],(i75kT->
CgOpp->MaxVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->TargetPositionVector->
VecData)[ErFg5],(i75kT->CgOpp->TargetVelocityVector->VecData)[ErFg5],(i75kT->
GR2PP->VecData)[ErFg5],i75kT->tMr7Q.BehaviorIfInitialStateBreachesConstraints,&(
(i75kT->qSPLG->VecData)[ErFg5]),&((i75kT->qVJUu->VecData)[ErFg5]),&((i75kT->
_HAh0->VecData)[ErFg5]));}
if(!((i75kT->mpz_d->VecData)[ErFg5])&&((i75kT->qVJUu->VecData)[ErFg5]!=kiQzO)){
if((i75kT->_HAh0->VecData)[ErFg5]==kiQzO){(i75kT->mpz_d->VecData)[ErFg5]=zQcxg((
i75kT->CgOpp->CurrentPositionVector->VecData)[ErFg5],(i75kT->CgOpp->
CurrentVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->CurrentAccelerationVector
->VecData)[ErFg5],(i75kT->CgOpp->MaxJerkVector->VecData)[ErFg5],(i75kT->CgOpp->
MaxAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->MaxVelocityVector->VecData
)[ErFg5],(i75kT->CgOpp->TargetPositionVector->VecData)[ErFg5],(i75kT->CgOpp->
TargetVelocityVector->VecData)[ErFg5],(i75kT->GR2PP->VecData)[ErFg5],(i75kT->
qSPLG->VecData)[ErFg5],i75kT->tMr7Q.BehaviorIfInitialStateBreachesConstraints,&(
(i75kT->_HAh0->VecData)[ErFg5]));}if(!(i75kT->mpz_d->VecData)[ErFg5]){(i75kT->
_HAh0->VecData)[ErFg5]+=c42JT;(i75kT->qVJUu->VecData)[ErFg5]-=c42JT;}}else{(
i75kT->_HAh0->VecData)[ErFg5]=kiQzO;}}

void TypeIVRMLPosition::h4kNS(TypeIVRMLPosition*i75kT,unsigned int&ErFg5){(i75kT
->mpz_d->VecData)[ErFg5]=TuoDL((i75kT->CgOpp->CurrentPositionVector->VecData)[
ErFg5],(i75kT->CgOpp->CurrentVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->
CurrentAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->MaxJerkVector->VecData
)[ErFg5],(i75kT->CgOpp->MaxAccelerationVector->VecData)[ErFg5],(i75kT->CgOpp->
MaxVelocityVector->VecData)[ErFg5],(i75kT->CgOpp->TargetPositionVector->VecData)
[ErFg5],(i75kT->CgOpp->TargetVelocityVector->VecData)[ErFg5],i75kT->
SynchronizationTime,i75kT->tMr7Q.BehaviorIfInitialStateBreachesConstraints,&((
i75kT->Polynomials)[ErFg5]));}
