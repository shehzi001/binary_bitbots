






























#include <TypeIVRMLVelocity.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVelocityOutputParameters.h>
#include <RMLVector.h>
#include <ReflexxesAPI.h>
using namespace BkjIW;

void TypeIVRMLVelocity::BwbwH(const double&jhvDE,const double&OverrideValue,
RMLVelocityOutputParameters*a77oB)const{unsigned int i=(0x3e7+3695-0x1256),Z1XcN
=(0x1111+541-0x132e),m85bi=(0x7bc+1354-0xd06),yyWef=(0x767+5528-0x1cff);int j=
(0x656+3348-0x136a);double fdAFn=0.0,OZvU5=0.0,tktop=0.0,P3zrc=0.0,L1sX2=0.0;for
(i=(0xe7a+2880-0x19ba);i<this->NumberOfDOFs;i++){if((this->CgOpp->
SelectionVector->VecData)[i]){
(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i]=(a77oB->NewPositionVector->
VecData)[i];(a77oB->MaxPosExtremaPositionVectorOnly->VecData)[i]=(a77oB->
NewPositionVector->VecData)[i];(a77oB->MaxExtremaTimesVector->VecData)[i]=jhvDE;
(a77oB->MinExtremaTimesVector->VecData)[i]=jhvDE;for(j=(0x740+7940-0x2644);j<((
this->Polynomials)[i].Ti1i1-(0xf2d+4467-0x209f));j++){if((this->Polynomials)[i].
So6Nc[j]>jhvDE){if(ErhpP((j==(0x9e2+252-0xade))?((this->Polynomials)[i].YWp8I[j]
.cPb5F(0.0)):((this->Polynomials)[i].YWp8I[j].cPb5F((this->Polynomials)[i].So6Nc
[j-(0x2162+1004-0x254d)])))!=ErhpP((this->Polynomials)[i].YWp8I[j].cPb5F((this->
Polynomials)[i].So6Nc[j]))){(this->Polynomials)[i].YWp8I[j].wyYal(&Z1XcN,&OZvU5,
&tktop,&P3zrc);if(Z1XcN==(0x230+9308-0x268a)){if((((j==(0x300+8789-0x2555))?(-
wyBh7):((this->Polynomials)[i].So6Nc[j-(0x473+7787-0x22dd)]-wyBh7))<=OZvU5)&&(((
this->Polynomials)[i].So6Nc[j]+wyBh7)>=OZvU5)&&(OZvU5>jhvDE)){fdAFn=(this->
Polynomials)[i].ZMssN[j].cPb5F(OZvU5);L1sX2=OZvU5;}else{if((((j==
(0x6ad+2129-0xefe))?(-wyBh7):((this->Polynomials)[i].So6Nc[j-(0x60f+1408-0xb8e)]
-wyBh7))<=tktop)&&(((this->Polynomials)[i].So6Nc[j]+wyBh7)>=tktop)&&(tktop>jhvDE
)){fdAFn=(this->Polynomials)[i].ZMssN[j].cPb5F(tktop);L1sX2=tktop;}else{continue
;}}}else{if((Z1XcN==(0xb9a+6521-0x2512))&&(OZvU5>jhvDE)){fdAFn=(this->
Polynomials)[i].ZMssN[j].cPb5F(OZvU5);L1sX2=OZvU5;}else{continue;}}if(fdAFn>(
a77oB->MaxPosExtremaPositionVectorOnly->VecData)[i]){(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]=fdAFn;(a77oB->MaxExtremaTimesVector
->VecData)[i]=L1sX2;}if(fdAFn<(a77oB->MinPosExtremaPositionVectorOnly->VecData)[
i]){(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i]=fdAFn;(a77oB->
MinExtremaTimesVector->VecData)[i]=L1sX2;}}}}fdAFn=(this->Polynomials)[i].ZMssN[
((this->Polynomials)[i].Ti1i1-(0x778+3602-0x1589))].cPb5F((this->Polynomials)[i]
.So6Nc[((this->Polynomials)[i].Ti1i1-(0x281+1087-0x6be))]);L1sX2=(this->
Polynomials)[i].So6Nc[((this->Polynomials)[i].Ti1i1-(0x1b65+1555-0x2176))];if((
this->Polynomials)[i].So6Nc[(this->Polynomials)[i].Ti1i1-(0x7a8+7762-0x25f9)]>
jhvDE){if((fdAFn<(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i])&&(jhvDE<=
(this->Polynomials)[i].So6Nc[((this->Polynomials)[i].Ti1i1-(0xca0+30-0xcbc))])){
(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i]=fdAFn;(a77oB->
MinExtremaTimesVector->VecData)[i]=L1sX2;}if((fdAFn>(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i])&&(jhvDE<=(this->Polynomials)[i].
So6Nc[((this->Polynomials)[i].Ti1i1-(0x9a8+891-0xd21))])){(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]=fdAFn;(a77oB->MaxExtremaTimesVector
->VecData)[i]=L1sX2;}}for(m85bi=(0xacb+2874-0x1605);m85bi<this->NumberOfDOFs;
m85bi++){if((this->CgOpp->SelectionVector->VecData)[m85bi]){for(yyWef=
(0x38c+2053-0xb91);yyWef<bfmk1;yyWef++){if((this->Polynomials)[m85bi].So6Nc[
yyWef]>=(a77oB->MinExtremaTimesVector->VecData)[i]){break;}}(((a77oB->
MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->Polynomials)[m85bi
].ZMssN[yyWef].cPb5F((a77oB->MinExtremaTimesVector->VecData)[i]);(((a77oB->
MinPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->Polynomials)[m85bi
].YWp8I[yyWef].cPb5F((a77oB->MinExtremaTimesVector->VecData)[i])*OverrideValue;(
((a77oB->MinPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=(this->
Polynomials)[m85bi].sabLl[yyWef].cPb5F((a77oB->MinExtremaTimesVector->VecData)[i
])*lJXU0(OverrideValue);for(yyWef=(0x1ca0+2245-0x2565);yyWef<bfmk1;yyWef++){if((
this->Polynomials)[m85bi].So6Nc[yyWef]>=(a77oB->MaxExtremaTimesVector->VecData)[
i]){break;}}(((a77oB->MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(
this->Polynomials)[m85bi].ZMssN[yyWef].cPb5F((a77oB->MaxExtremaTimesVector->
VecData)[i]);(((a77oB->MaxPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(
this->Polynomials)[m85bi].YWp8I[yyWef].cPb5F((a77oB->MaxExtremaTimesVector->
VecData)[i])*OverrideValue;(((a77oB->MaxPosExtremaAccelerationVectorArray)[i])->
VecData)[m85bi]=(this->Polynomials)[m85bi].sabLl[yyWef].cPb5F((a77oB->
MaxExtremaTimesVector->VecData)[i])*lJXU0(OverrideValue);}else{(((a77oB->
MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentPositionVector->VecData)[m85bi];(((a77oB->
MinPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentVelocityVector->VecData)[m85bi];(((a77oB->
MinPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentAccelerationVector->VecData)[m85bi];(((a77oB->
MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentPositionVector->VecData)[m85bi];(((a77oB->
MaxPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentVelocityVector->VecData)[m85bi];(((a77oB->
MaxPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentAccelerationVector->VecData)[m85bi];}}if(OverrideValue>BLXud){a77oB->
MaxExtremaTimesVector->VecData[i]=(a77oB->MaxExtremaTimesVector->VecData[i]-
jhvDE)/OverrideValue;}else{a77oB->MaxExtremaTimesVector->VecData[i]=kiQzO;}if(
a77oB->MaxExtremaTimesVector->VecData[i]<0.0){a77oB->MaxExtremaTimesVector->
VecData[i]=0.0;}if(OverrideValue>BLXud){a77oB->MinExtremaTimesVector->VecData[i]
=(a77oB->MinExtremaTimesVector->VecData[i]-jhvDE)/OverrideValue;}else{a77oB->
MinExtremaTimesVector->VecData[i]=kiQzO;}if(a77oB->MinExtremaTimesVector->
VecData[i]<0.0){a77oB->MinExtremaTimesVector->VecData[i]=0.0;}}else{(a77oB->
MinPosExtremaPositionVectorOnly->VecData)[i]=(this->CgOpp->CurrentPositionVector
->VecData)[i];(a77oB->MaxPosExtremaPositionVectorOnly->VecData)[i]=(this->CgOpp
->CurrentPositionVector->VecData)[i];(a77oB->MinExtremaTimesVector->VecData)[i]=
0.0;(a77oB->MaxExtremaTimesVector->VecData)[i]=0.0;for(m85bi=
(0x1241+3871-0x2160);m85bi<this->NumberOfDOFs;m85bi++){(((a77oB->
MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentPositionVector->VecData)[m85bi];(((a77oB->
MinPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentVelocityVector->VecData)[m85bi];(((a77oB->
MinPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentAccelerationVector->VecData)[m85bi];(((a77oB->
MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentPositionVector->VecData)[m85bi];(((a77oB->
MaxPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentVelocityVector->VecData)[m85bi];(((a77oB->
MaxPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
CurrentAccelerationVector->VecData)[m85bi];}}}return;}

void TypeIVRMLVelocity::MUsk2(RMLVelocityOutputParameters*a77oB)const{unsigned 
int i=(0x649+698-0x903),m85bi=(0x1249+5045-0x25fe);for(i=(0x16ad+95-0x170c);i<
this->NumberOfDOFs;i++){for(m85bi=(0x1366+2194-0x1bf8);m85bi<this->NumberOfDOFs;
m85bi++){(((a77oB->MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=0.0;((
(a77oB->MinPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MinPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MaxPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MaxPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=0.0;}(a77oB->
MinPosExtremaPositionVectorOnly->VecData)[i]=0.0;(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]=0.0;(a77oB->MinExtremaTimesVector->
VecData)[i]=0.0;(a77oB->MaxExtremaTimesVector->VecData)[i]=0.0;}}
