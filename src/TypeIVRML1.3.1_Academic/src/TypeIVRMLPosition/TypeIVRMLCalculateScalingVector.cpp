






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLDefinitions.h>


void TypeIVRMLPosition::v27dc(void){unsigned int i=(0x5a+4660-0x128e);this->
X2crk=false;for(i=(0xdc8+1995-0x1593);i<this->NumberOfDOFs;i++){if((this->CgOpp
->SelectionVector->VecData)[i]){if((this->CgOpp->MaxJerkVector->VecData)[i]<
wel_4){(this->VGQF6->VecData)[i]=wel_4/(this->CgOpp->MaxJerkVector->VecData)[i];
this->X2crk=true;continue;}else{if((this->CgOpp->MaxAccelerationVector->VecData)
[i]<wel_4){(this->VGQF6->VecData)[i]=wel_4/(this->CgOpp->MaxAccelerationVector->
VecData)[i];this->X2crk=true;continue;}else{if((this->CgOpp->MaxVelocityVector->
VecData)[i]<wel_4){(this->VGQF6->VecData)[i]=wel_4/(this->CgOpp->
MaxVelocityVector->VecData)[i];this->X2crk=true;continue;}else{if((this->CgOpp->
MaxVelocityVector->VecData)[i]>Dpmh_){(this->VGQF6->VecData)[i]=Dpmh_/(this->
CgOpp->MaxVelocityVector->VecData)[i];this->X2crk=true;}else{if((this->CgOpp->
MaxAccelerationVector->VecData)[i]>Dpmh_){(this->VGQF6->VecData)[i]=Dpmh_/(this
->CgOpp->MaxAccelerationVector->VecData)[i];this->X2crk=true;}else{if((this->
CgOpp->MaxJerkVector->VecData)[i]>Dpmh_){(this->VGQF6->VecData)[i]=Dpmh_/(this->
CgOpp->MaxJerkVector->VecData)[i];this->X2crk=true;}else{(this->VGQF6->VecData)[
i]=1.0;continue;}}}}}}if(((this->CgOpp->MaxJerkVector->VecData)[i]*(this->VGQF6
->VecData)[i])<wel_4){(this->VGQF6->VecData)[i]*=wel_4/((this->CgOpp->
MaxJerkVector->VecData)[i]*(this->VGQF6->VecData)[i]);continue;}if(((this->CgOpp
->MaxAccelerationVector->VecData)[i]*(this->VGQF6->VecData)[i])<wel_4){(this->
VGQF6->VecData)[i]*=wel_4/((this->CgOpp->MaxAccelerationVector->VecData)[i]*(
this->VGQF6->VecData)[i]);continue;}if(((this->CgOpp->MaxVelocityVector->VecData
)[i]*(this->VGQF6->VecData)[i])<wel_4){(this->VGQF6->VecData)[i]*=wel_4/((this->
CgOpp->MaxVelocityVector->VecData)[i]*(this->VGQF6->VecData)[i]);continue;}}else
{(this->VGQF6->VecData)[i]=1.0;}}}

void TypeIVRMLPosition::_XQLx(void){unsigned int i=(0xd66+2141-0x15c3);if(this->
X2crk){for(i=(0x8cd+263-0x9d4);i<this->NumberOfDOFs;i++){if((this->CgOpp->
SelectionVector->VecData)[i]){(this->CgOpp->CurrentPositionVector->VecData)[i]*=
(this->VGQF6->VecData)[i];(this->CgOpp->CurrentVelocityVector->VecData)[i]*=(
this->VGQF6->VecData)[i];(this->CgOpp->CurrentAccelerationVector->VecData)[i]*=(
this->VGQF6->VecData)[i];(this->CgOpp->MaxVelocityVector->VecData)[i]*=(this->
VGQF6->VecData)[i];(this->CgOpp->MaxAccelerationVector->VecData)[i]*=(this->
VGQF6->VecData)[i];(this->CgOpp->MaxJerkVector->VecData)[i]*=(this->VGQF6->
VecData)[i];(this->CgOpp->TargetPositionVector->VecData)[i]*=(this->VGQF6->
VecData)[i];(this->CgOpp->TargetVelocityVector->VecData)[i]*=(this->VGQF6->
VecData)[i];}}}}

void TypeIVRMLPosition::hGSmW(RMLPositionOutputParameters*a77oB)const{unsigned 
int i=(0x1a+2102-0x850),j=(0x114a+5539-0x26ed);if(this->X2crk){for(i=
(0xdf3+1070-0x1221);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){(
a77oB->NewPositionVector->VecData)[i]/=(this->VGQF6->VecData)[i];(a77oB->
NewVelocityVector->VecData)[i]/=(this->VGQF6->VecData)[i];(a77oB->
NewAccelerationVector->VecData)[i]/=(this->VGQF6->VecData)[i];(a77oB->
MinPosExtremaPositionVectorOnly->VecData)[i]/=(this->VGQF6->VecData)[i];(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]/=(this->VGQF6->VecData)[i];for(j=
(0x1548+1740-0x1c14);j<this->NumberOfDOFs;j++){(((a77oB->
MinPosExtremaPositionVectorArray)[i])->VecData)[j]/=(this->VGQF6->VecData)[i];((
(a77oB->MinPosExtremaVelocityVectorArray)[i])->VecData)[j]/=(this->VGQF6->
VecData)[i];(((a77oB->MinPosExtremaAccelerationVectorArray)[i])->VecData)[j]/=(
this->VGQF6->VecData)[i];(((a77oB->MaxPosExtremaPositionVectorArray)[i])->
VecData)[j]/=(this->VGQF6->VecData)[i];(((a77oB->
MaxPosExtremaVelocityVectorArray)[i])->VecData)[j]/=(this->VGQF6->VecData)[i];((
(a77oB->MaxPosExtremaAccelerationVectorArray)[i])->VecData)[j]/=(this->VGQF6->
VecData)[i];}for(j=(0x1060+536-0x1278);(int)j<a77oB->Polynomials->
NumberOfCurrentlyValidSegments[i];j++){a77oB->Polynomials->Coefficients[i][j].
AccelerationPolynomialCoefficients[(0xd83+2521-0x175c)]/=(this->VGQF6->VecData)[
i];a77oB->Polynomials->Coefficients[i][j].AccelerationPolynomialCoefficients[
(0x38+2504-0x9ff)]/=(this->VGQF6->VecData)[i];a77oB->Polynomials->Coefficients[i
][j].VelocityPolynomialCoefficients[(0x196+1480-0x75e)]/=(this->VGQF6->VecData)[
i];a77oB->Polynomials->Coefficients[i][j].VelocityPolynomialCoefficients[
(0xf81+2931-0x1af3)]/=(this->VGQF6->VecData)[i];a77oB->Polynomials->Coefficients
[i][j].VelocityPolynomialCoefficients[(0x1238+5321-0x26ff)]/=(this->VGQF6->
VecData)[i];a77oB->Polynomials->Coefficients[i][j].
PositionPolynomialCoefficients[(0xf69+341-0x10be)]/=(this->VGQF6->VecData)[i];
a77oB->Polynomials->Coefficients[i][j].PositionPolynomialCoefficients[
(0xbf0+2794-0x16d9)]/=(this->VGQF6->VecData)[i];a77oB->Polynomials->Coefficients
[i][j].PositionPolynomialCoefficients[(0x3ea+7529-0x2151)]/=(this->VGQF6->
VecData)[i];a77oB->Polynomials->Coefficients[i][j].
PositionPolynomialCoefficients[(0x1d0+6225-0x1a1e)]/=(this->VGQF6->VecData)[i];}
}}}}
