






























#include <TypeIVRMLVelocity.h>
#include <TypeIVRMLDefinitions.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVelocityOutputParameters.h>
using namespace BkjIW;

void TypeIVRMLVelocity::brYVd(const RMLVelocityInputParameters&k2QiQ,
RMLVelocityOutputParameters*aUO0W){unsigned int i=(0x571+6901-0x2066);for(i=
(0x10a4+3790-0x1f72);i<this->NumberOfDOFs;i++){if(k2QiQ.SelectionVector->VecData
[i]){(aUO0W->NewPositionVector->VecData)[i]=k2QiQ.CurrentPositionVector->VecData
[i]+this->CycleTime*(k2QiQ.CurrentVelocityVector->VecData)[i]+0.5*lJXU0(this->
CycleTime)*(k2QiQ.CurrentAccelerationVector->VecData)[i];(aUO0W->
NewVelocityVector->VecData)[i]=k2QiQ.CurrentVelocityVector->VecData[i]+this->
CycleTime*(k2QiQ.CurrentAccelerationVector->VecData)[i];(aUO0W->
NewAccelerationVector->VecData)[i]=k2QiQ.CurrentAccelerationVector->VecData[i];}
else{(aUO0W->NewPositionVector->VecData)[i]=k2QiQ.CurrentPositionVector->VecData
[i];(aUO0W->NewVelocityVector->VecData)[i]=k2QiQ.CurrentVelocityVector->VecData[
i];(aUO0W->NewAccelerationVector->VecData)[i]=k2QiQ.CurrentAccelerationVector->
VecData[i];}aUO0W->ExecutionTimes->VecData[i]=0.0;aUO0W->
PositionValuesAtTargetVelocity->VecData[i]=k2QiQ.CurrentPositionVector->VecData[
i];}this->MUsk2(aUO0W);aUO0W->TrajectoryIsPhaseSynchronized=false;aUO0W->
SynchronizationTime=0.0;aUO0W->DOFWithTheGreatestExecutionTime=
(0x12e7+3017-0x1eb0);return;}
