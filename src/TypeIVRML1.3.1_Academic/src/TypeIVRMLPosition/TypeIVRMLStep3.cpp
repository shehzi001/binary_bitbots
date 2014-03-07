






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>
#include <ReflexxesAPI.h>


int TypeIVRMLPosition::VTGwO(const double&jhvDE,const double&OverrideValue,
RMLPositionOutputParameters*a77oB)const{unsigned int i=(0xa71+4728-0x1ce9);int 
p_kSI=ReflexxesAPI::RML_FINAL_STATE_REACHED,j=(0x1001+4996-0x2385),m85bi=
(0x2cc+4642-0x14ee);for(i=(0x3fd+3749-0x12a2);i<this->NumberOfDOFs;i++){if((this
->SkCtJ->VecData)[i]){j=(0x125+8670-0x2303);while((jhvDE>(this->Polynomials)[i].
So6Nc[j])&&(j<bfmk1-(0x1a72+36-0x1a95))){j++;}(a77oB->NewPositionVector->VecData
)[i]=(this->Polynomials)[i].ZMssN[j].cPb5F(jhvDE);(a77oB->NewVelocityVector->
VecData)[i]=(this->Polynomials)[i].YWp8I[j].cPb5F(jhvDE)*OverrideValue;(a77oB->
NewAccelerationVector->VecData)[i]=(this->Polynomials)[i].sabLl[j].cPb5F(jhvDE)*
lJXU0(OverrideValue);if(j<((this->Polynomials)[i].Ti1i1)-(0x1430+1084-0x186b)){
p_kSI=ReflexxesAPI::RML_WORKING;}a77oB->Polynomials->
NumberOfCurrentlyValidSegments[i]=(this->Polynomials)[i].Ti1i1-j;for(m85bi=
(0x1314+809-0x163d);m85bi<a77oB->Polynomials->NumberOfCurrentlyValidSegments[i];
m85bi++){a77oB->Polynomials->Coefficients[i][m85bi].Time_ValidUntil=(this->
Polynomials)[i].So6Nc[j+m85bi]-(this->MKEeV-this->CycleTime);a77oB->Polynomials
->Coefficients[i][m85bi].AccelerationPolynomialCoefficients[(0x14b+9048-0x24a3)]
=(this->Polynomials)[i].sabLl[j+m85bi]._Bp69-(this->Polynomials)[i].sabLl[j+
m85bi].yTfgT*(this->Polynomials)[i].sabLl[j+m85bi].Mlr3t;a77oB->Polynomials->
Coefficients[i][m85bi].AccelerationPolynomialCoefficients[(0xb1c+3036-0x16f7)]=(
this->Polynomials)[i].sabLl[j+m85bi].yTfgT;a77oB->Polynomials->Coefficients[i][
m85bi].VelocityPolynomialCoefficients[(0x1001+1276-0x14fd)]=(this->Polynomials)[
i].YWp8I[j+m85bi]._Bp69+(this->Polynomials)[i].YWp8I[j+m85bi].Mlr3t*((this->
Polynomials)[i].YWp8I[j+m85bi].PG51e*(this->Polynomials)[i].YWp8I[j+m85bi].Mlr3t
-(this->Polynomials)[i].YWp8I[j+m85bi].yTfgT);a77oB->Polynomials->Coefficients[i
][m85bi].VelocityPolynomialCoefficients[(0xfcc+200-0x1093)]=(this->Polynomials)[
i].YWp8I[j+m85bi].yTfgT-2.0*(this->Polynomials)[i].YWp8I[j+m85bi].PG51e*(this->
Polynomials)[i].YWp8I[j+m85bi].Mlr3t;a77oB->Polynomials->Coefficients[i][m85bi].
VelocityPolynomialCoefficients[(0x547+719-0x814)]=(this->Polynomials)[i].YWp8I[j
+m85bi].PG51e;a77oB->Polynomials->Coefficients[i][m85bi].
PositionPolynomialCoefficients[(0x1b0d+1825-0x222e)]=(this->Polynomials)[i].
ZMssN[j+m85bi]._Bp69+(this->Polynomials)[i].ZMssN[j+m85bi].Mlr3t*((this->
Polynomials)[i].ZMssN[j+m85bi].Mlr3t*((this->Polynomials)[i].ZMssN[j+m85bi].
PG51e-(this->Polynomials)[i].ZMssN[j+m85bi].Mlr3t*(this->Polynomials)[i].ZMssN[j
+m85bi].FTf8f)-(this->Polynomials)[i].ZMssN[j+m85bi].yTfgT);a77oB->Polynomials->
Coefficients[i][m85bi].PositionPolynomialCoefficients[(0x1f8d+438-0x2142)]=(this
->Polynomials)[i].ZMssN[j+m85bi].yTfgT+(this->Polynomials)[i].ZMssN[j+m85bi].
Mlr3t*(3.0*(this->Polynomials)[i].ZMssN[j+m85bi].FTf8f*(this->Polynomials)[i].
ZMssN[j+m85bi].Mlr3t-2.0*(this->Polynomials)[i].ZMssN[j+m85bi].PG51e);a77oB->
Polynomials->Coefficients[i][m85bi].PositionPolynomialCoefficients[
(0xd41+6087-0x2506)]=(this->Polynomials)[i].ZMssN[j+m85bi].PG51e-3.0*(this->
Polynomials)[i].ZMssN[j+m85bi].FTf8f*(this->Polynomials)[i].ZMssN[j+m85bi].Mlr3t
;a77oB->Polynomials->Coefficients[i][m85bi].PositionPolynomialCoefficients[
(0x1f49+394-0x20d0)]=(this->Polynomials)[i].ZMssN[j+m85bi].FTf8f;}}else{(a77oB->
NewPositionVector->VecData)[i]=(this->CgOpp->CurrentPositionVector->VecData)[i];
(a77oB->NewVelocityVector->VecData)[i]=(this->CgOpp->CurrentVelocityVector->
VecData)[i];(a77oB->NewAccelerationVector->VecData)[i]=(this->CgOpp->
CurrentAccelerationVector->VecData)[i];a77oB->Polynomials->
NumberOfCurrentlyValidSegments[i]=(0x1484+2427-0x1dff);}}return(p_kSI);}
