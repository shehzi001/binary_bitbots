






























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLPolynomial.h>
#include <RMLPositionOutputParameters.h>
#include <RMLPositionInputParameters.h>
using namespace BkjIW;

void TypeIVRMLPosition::BwbwH(const double&jhvDE,const double&OverrideValue,
RMLPositionOutputParameters*a77oB)const{unsigned int i=(0x1ed5+1218-0x2397),
Z1XcN=(0xc21+4197-0x1c86),m85bi=(0x1e5+1344-0x725),yyWef=(0x1508+1656-0x1b80);
int j=(0x467+1218-0x929);double fdAFn=0.0,OZvU5=0.0,tktop=0.0,P3zrc=0.0,L1sX2=
0.0;a77oB->TrajectoryExceedsTargetPosition=false;for(i=(0x539+836-0x87d);i<this
->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]){
(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i]=(a77oB->NewPositionVector->
VecData)[i];(a77oB->MaxPosExtremaPositionVectorOnly->VecData)[i]=(a77oB->
NewPositionVector->VecData)[i];(a77oB->MaxExtremaTimesVector->VecData)[i]=jhvDE;
(a77oB->MinExtremaTimesVector->VecData)[i]=jhvDE;
for(j=(0xf79+3559-0x1d60);j<((this->Polynomials)[i].Ti1i1-(0x4c6+8413-0x25a2));j
++){if((this->Polynomials)[i].So6Nc[j]>jhvDE){if(ErhpP((j==(0x173a+2821-0x223f))
?((this->Polynomials)[i].YWp8I[j].cPb5F(0.0)):((this->Polynomials)[i].YWp8I[j].
cPb5F((this->Polynomials)[i].So6Nc[j-(0xb66+6832-0x2615)])))!=ErhpP((this->
Polynomials)[i].YWp8I[j].cPb5F((this->Polynomials)[i].So6Nc[j]))){(this->
Polynomials)[i].YWp8I[j].wyYal(&Z1XcN,&OZvU5,&tktop,&P3zrc);if(Z1XcN==
(0xb45+7104-0x2703)){if((((j==(0x94c+4070-0x1932))?(-wyBh7):((this->Polynomials)
[i].So6Nc[j-(0xf5+7454-0x1e12)]-wyBh7))<=OZvU5)&&(((this->Polynomials)[i].So6Nc[
j]+wyBh7)>=OZvU5)&&(OZvU5>jhvDE)){fdAFn=(this->Polynomials)[i].ZMssN[j].cPb5F(
OZvU5);L1sX2=OZvU5;}else{if((((j==(0x16f1+2752-0x21b1))?(-wyBh7):((this->
Polynomials)[i].So6Nc[j-(0x5f4+7943-0x24fa)]-wyBh7))<=tktop)&&(((this->
Polynomials)[i].So6Nc[j]+wyBh7)>=tktop)&&(tktop>jhvDE)){fdAFn=(this->Polynomials
)[i].ZMssN[j].cPb5F(tktop);L1sX2=tktop;}else{continue;}}}else{if((Z1XcN==
(0x221b+434-0x23cc))&&(OZvU5>jhvDE)){fdAFn=(this->Polynomials)[i].ZMssN[j].cPb5F
(OZvU5);L1sX2=OZvU5;}else{continue;}}if((fdAFn>(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i])&&(L1sX2>jhvDE)){(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]=fdAFn;(a77oB->MaxExtremaTimesVector
->VecData)[i]=L1sX2;}if((fdAFn<(a77oB->MinPosExtremaPositionVectorOnly->VecData)
[i])&&(L1sX2>jhvDE)){(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i]=fdAFn;
(a77oB->MinExtremaTimesVector->VecData)[i]=L1sX2;}}}}
if((this->Polynomials)[i].So6Nc[(this->Polynomials)[i].Ti1i1-(0xa05+3239-0x16aa)
]>jhvDE){if(((this->CgOpp->TargetPositionVector->VecData)[i]>(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i])&&(jhvDE<=(this->Polynomials)[i].
So6Nc[(this->Polynomials)[i].Ti1i1-(0x124d+2805-0x1d40)])){(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]=(this->CgOpp->TargetPositionVector
->VecData)[i];if(this->RzgOx){a77oB->MaxExtremaTimesVector->VecData[i]=this->
LSxcd->VecData[i];}else{a77oB->MaxExtremaTimesVector->VecData[i]=this->
SynchronizationTime;}}if(((this->CgOpp->TargetPositionVector->VecData)[i]<(a77oB
->MinPosExtremaPositionVectorOnly->VecData)[i])&&(jhvDE<=(this->Polynomials)[i].
So6Nc[(this->Polynomials)[i].Ti1i1-(0x1228+4761-0x24bf)])){(a77oB->
MinPosExtremaPositionVectorOnly->VecData)[i]=(this->CgOpp->TargetPositionVector
->VecData)[i];if(this->RzgOx){a77oB->MinExtremaTimesVector->VecData[i]=this->
LSxcd->VecData[i];}else{a77oB->MinExtremaTimesVector->VecData[i]=this->
SynchronizationTime;}}}for(m85bi=(0x2ad+1639-0x914);m85bi<this->NumberOfDOFs;
m85bi++){if((this->SkCtJ->VecData)[m85bi]){for(yyWef=(0xee9+4283-0x1fa4);yyWef<
bfmk1;yyWef++){if((this->Polynomials)[m85bi].So6Nc[yyWef]>=(a77oB->
MinExtremaTimesVector->VecData)[i]){break;}}(((a77oB->
MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->Polynomials)[m85bi
].ZMssN[yyWef].cPb5F((a77oB->MinExtremaTimesVector->VecData)[i]);(((a77oB->
MinPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->Polynomials)[m85bi
].YWp8I[yyWef].cPb5F((a77oB->MinExtremaTimesVector->VecData)[i])*OverrideValue;(
((a77oB->MinPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=(this->
Polynomials)[m85bi].sabLl[yyWef].cPb5F((a77oB->MinExtremaTimesVector->VecData)[i
])*lJXU0(OverrideValue);(((a77oB->MinPosExtremaPositionVectorArray)[i])->VecData
)[m85bi]=(this->CgOpp->TargetPositionVector->VecData)[m85bi]-((this->AqM3n->
VecData)[m85bi]-(((a77oB->MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]
);for(yyWef=(0x7cc+5132-0x1bd8);yyWef<bfmk1;yyWef++){if((this->Polynomials)[
m85bi].So6Nc[yyWef]>=(a77oB->MaxExtremaTimesVector->VecData)[i]){break;}}(((
a77oB->MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->Polynomials
)[m85bi].ZMssN[yyWef].cPb5F((a77oB->MaxExtremaTimesVector->VecData)[i]);(((a77oB
->MaxPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=(this->Polynomials)[
m85bi].YWp8I[yyWef].cPb5F((a77oB->MaxExtremaTimesVector->VecData)[i])*
OverrideValue;(((a77oB->MaxPosExtremaAccelerationVectorArray)[i])->VecData)[
m85bi]=(this->Polynomials)[m85bi].sabLl[yyWef].cPb5F((a77oB->
MaxExtremaTimesVector->VecData)[i])*lJXU0(OverrideValue);

(((a77oB->MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
TargetPositionVector->VecData)[m85bi]-((this->AqM3n->VecData)[m85bi]-(((a77oB->
MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]);}else{(((a77oB->
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
VecData[i]<0.0){a77oB->MinExtremaTimesVector->VecData[i]=0.0;}if(((this->CgOpp->
CurrentPositionVector->VecData[i]<this->CgOpp->TargetPositionVector->VecData[i])
&&((a77oB->MaxPosExtremaPositionVectorOnly->VecData)[i]>this->CgOpp->
TargetPositionVector->VecData[i]+ODXCY))||((this->CgOpp->CurrentPositionVector->
VecData[i]>this->CgOpp->TargetPositionVector->VecData[i])&&((a77oB->
MinPosExtremaPositionVectorOnly->VecData)[i]<this->CgOpp->TargetPositionVector->
VecData[i]-ODXCY))){a77oB->TrajectoryExceedsTargetPosition=true;}}else{
(a77oB->MinPosExtremaPositionVectorOnly->VecData)[i]=(this->CgOpp->
CurrentPositionVector->VecData)[i];(a77oB->MaxPosExtremaPositionVectorOnly->
VecData)[i]=(this->CgOpp->CurrentPositionVector->VecData)[i];(a77oB->
MinExtremaTimesVector->VecData)[i]=0.0;(a77oB->MaxExtremaTimesVector->VecData)[i
]=0.0;for(m85bi=(0x1a19+2752-0x24d9);m85bi<this->NumberOfDOFs;m85bi++){(((a77oB
->MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=(this->CgOpp->
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

void TypeIVRMLPosition::MUsk2(RMLPositionOutputParameters*a77oB)const{unsigned 
int i=(0x107a+653-0x1307),m85bi=(0x12bc+4549-0x2481);for(i=(0x1727+1869-0x1e74);
i<this->NumberOfDOFs;i++){for(m85bi=(0x1a26+49-0x1a57);m85bi<this->NumberOfDOFs;
m85bi++){(((a77oB->MinPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=0.0;((
(a77oB->MinPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MinPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MaxPosExtremaPositionVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MaxPosExtremaVelocityVectorArray)[i])->VecData)[m85bi]=0.0;(((a77oB->
MaxPosExtremaAccelerationVectorArray)[i])->VecData)[m85bi]=0.0;}(a77oB->
MinPosExtremaPositionVectorOnly->VecData)[i]=0.0;(a77oB->
MaxPosExtremaPositionVectorOnly->VecData)[i]=0.0;(a77oB->MinExtremaTimesVector->
VecData)[i]=0.0;(a77oB->MaxExtremaTimesVector->VecData)[i]=0.0;}return;}
