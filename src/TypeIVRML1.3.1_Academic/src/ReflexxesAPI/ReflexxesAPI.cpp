
































#include <ReflexxesAPI.h>
#include <TypeIVRMLPosition.h>
#include <TypeIVRMLVelocity.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>
#include <RMLPositionFlags.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVelocityOutputParameters.h>
#include <RMLVelocityFlags.h>
#include <stdlib.h>


ReflexxesAPI::ReflexxesAPI(const unsigned int&tctMo,const double&ypdPO,const 
unsigned int&wTpPJ,const double&SqpNi){this->NumberOfDOFs=tctMo;this->
NumberOfOwnThreads=wTpPJ;this->CycleTime=ypdPO;this->MaxTimeForOverrideFilter=
SqpNi;this->RMLPositionObject=(void*)new TypeIVRMLPosition(tctMo,ypdPO,wTpPJ,
SqpNi);this->RMLVelocityObject=(void*)new TypeIVRMLVelocity(tctMo,ypdPO,false,
SqpNi);}

ReflexxesAPI::~ReflexxesAPI(void){delete(TypeIVRMLVelocity*)this->
RMLVelocityObject;delete(TypeIVRMLPosition*)this->RMLPositionObject;this->
RMLVelocityObject=NULL;this->RMLPositionObject=NULL;}

int ReflexxesAPI::RMLPosition(const RMLPositionInputParameters&k2QiQ,
RMLPositionOutputParameters*aUO0W,const RMLPositionFlags&JKkfQ){return(((
TypeIVRMLPosition*)(this->RMLPositionObject))->EPDb1(k2QiQ,aUO0W,JKkfQ));}

int ReflexxesAPI::RMLPositionAtAGivenSampleTime(const double&jhvDE,
RMLPositionOutputParameters*aUO0W){return(((TypeIVRMLPosition*)(this->
RMLPositionObject))->F6GaD(jhvDE,aUO0W));}

int ReflexxesAPI::RMLVelocity(const RMLVelocityInputParameters&k2QiQ,
RMLVelocityOutputParameters*aUO0W,const RMLVelocityFlags&JKkfQ){return(((
TypeIVRMLVelocity*)(this->RMLVelocityObject))->EPDb1(k2QiQ,aUO0W,JKkfQ));}

int ReflexxesAPI::RMLVelocityAtAGivenSampleTime(const double&jhvDE,
RMLVelocityOutputParameters*aUO0W){return(((TypeIVRMLVelocity*)(this->
RMLVelocityObject))->F6GaD(jhvDE,aUO0W));}

int ReflexxesAPI::SetupOverrideFilter(const double&cAxLR,const double&eIKIe){int
 VbsjQ=RML_ERROR,TXYvV=RML_ERROR;VbsjQ=((TypeIVRMLPosition*)(this->
RMLPositionObject))->SetupOverrideFilter(cAxLR,eIKIe);TXYvV=((TypeIVRMLVelocity*
)(this->RMLVelocityObject))->SetupOverrideFilter(cAxLR,eIKIe);if((VbsjQ!=
RML_NO_ERROR)||(TXYvV!=RML_NO_ERROR)){return(ReflexxesAPI::
RML_ERROR_OVERRIDE_OUT_OF_RANGE);}return(ReflexxesAPI::RML_NO_ERROR);}
