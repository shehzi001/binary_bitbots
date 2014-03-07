





























#include <TypeIVRMLPosition.h>
#include <TypeIVRMLMath.h>
using namespace BkjIW;

void TypeIVRMLPosition::wYLxr(void){unsigned int i=(0x307+2642-0xd59);int j=
(0xd4a+728-0x1022);double obeEw=0.0,WGczk=0.0,nTAtf=0.0,mUkdM=0.0,BKeHN=0.0,
cmCcw=0.0,mLeW3=0.0,UTkBD=0.0,D8Ur6=0.0,_JE_D=0.0,K6H02=0.0,FVGK6=0.0,Mlr3t=0.0,
sUtGX=0.0,zaG8H=0.0,gYH26=0.0,mqVUq=0.0,LPLG9=0.0;
h4kNS(this,this->yyynZ);if(!((this->mpz_d->VecData)[this->yyynZ])){



this->SynchronizationTime=(((this->Polynomials)[this->yyynZ]).So6Nc)[((this->
Polynomials)[this->yyynZ]).Ti1i1-(0xbac+4701-0x1e07)];
for(i=(0x647+3678-0x14a5);i<this->NumberOfDOFs;i++){if((this->SkCtJ->VecData)[i]
&&(i!=this->yyynZ)){sUtGX=(this->FiGD5->VecData)[i]/(this->FiGD5->VecData)[this
->yyynZ];for(j=(0x817+2349-0x1144);j<((this->Polynomials)[this->yyynZ]).Ti1i1;j
++){((this->Polynomials)[this->yyynZ]).ZMssN[j].qkMx3(&mUkdM,&nTAtf,&WGczk,&
obeEw,&Mlr3t);((this->Polynomials)[this->yyynZ]).YWp8I[j].qkMx3(&UTkBD,&mLeW3,&
cmCcw,&BKeHN,&Mlr3t);((this->Polynomials)[this->yyynZ]).sabLl[j].qkMx3(&FVGK6,&
K6H02,&_JE_D,&D8Ur6,&Mlr3t);mUkdM*=sUtGX;nTAtf*=sUtGX;WGczk*=sUtGX;obeEw=((this
->CgOpp->CurrentPositionVector->VecData)[i]+(obeEw-(this->CgOpp->
CurrentPositionVector->VecData)[this->yyynZ])*sUtGX);mLeW3*=sUtGX;cmCcw*=sUtGX;
BKeHN*=sUtGX;_JE_D*=sUtGX;D8Ur6*=sUtGX;((this->Polynomials)[i]).ZMssN[j].TL5H9(
mUkdM,nTAtf,WGczk,obeEw,Mlr3t);((this->Polynomials)[i]).YWp8I[j].TL5H9(UTkBD,
mLeW3,cmCcw,BKeHN,Mlr3t);((this->Polynomials)[i]).sabLl[j].TL5H9(FVGK6,K6H02,
_JE_D,D8Ur6,Mlr3t);((this->Polynomials)[i]).So6Nc[j]=((this->Polynomials)[this->
yyynZ]).So6Nc[j];}((this->Polynomials)[i]).Ti1i1=((this->Polynomials)[this->
yyynZ]).Ti1i1;


if(this->SynchronizationTime>this->CycleTime){gYH26=(this->CgOpp->
CurrentAccelerationVector->VecData)[i]-((this->Polynomials)[i]).sabLl[
(0x8d9+30-0x8f7)].cPb5F(0.0);for(j=(0x1457+2743-0x1f0e);j<((this->Polynomials)[i
]).Ti1i1;j++){((this->Polynomials)[i]).ZMssN[j].qkMx3(&mUkdM,&nTAtf,&WGczk,&
obeEw,&Mlr3t);((this->Polynomials)[i]).YWp8I[j].qkMx3(&UTkBD,&mLeW3,&cmCcw,&
BKeHN,&Mlr3t);((this->Polynomials)[i]).sabLl[j].qkMx3(&FVGK6,&K6H02,&_JE_D,&
D8Ur6,&Mlr3t);_JE_D-=gYH26/this->SynchronizationTime;D8Ur6+=gYH26+Mlr3t*gYH26/
this->SynchronizationTime;cmCcw=D8Ur6;nTAtf=0.5*D8Ur6;((this->Polynomials)[i]).
ZMssN[j].TL5H9(mUkdM,nTAtf,WGczk,obeEw,Mlr3t);((this->Polynomials)[i]).YWp8I[j].
TL5H9(UTkBD,mLeW3,cmCcw,BKeHN,Mlr3t);((this->Polynomials)[i]).sabLl[j].TL5H9(
FVGK6,K6H02,_JE_D,D8Ur6,Mlr3t);}zaG8H=(this->CgOpp->CurrentVelocityVector->
VecData)[i]-((this->Polynomials)[i]).YWp8I[(0xc74+5646-0x2282)].cPb5F(0.0);LPLG9
=(this->CgOpp->TargetVelocityVector->VecData)[i]-((this->Polynomials)[i]).YWp8I[
((this->Polynomials)[i]).Ti1i1-(0x421+2772-0xef4)].cPb5F(this->
SynchronizationTime);for(j=(0x33f+3086-0xf4d);j<((this->Polynomials)[i]).Ti1i1;j
++){((this->Polynomials)[i]).ZMssN[j].qkMx3(&mUkdM,&nTAtf,&WGczk,&obeEw,&Mlr3t);
((this->Polynomials)[i]).YWp8I[j].qkMx3(&UTkBD,&mLeW3,&cmCcw,&BKeHN,&Mlr3t);
cmCcw+=(LPLG9-zaG8H)/this->SynchronizationTime;BKeHN+=zaG8H-Mlr3t*(LPLG9-zaG8H)/
this->SynchronizationTime;WGczk=BKeHN;((this->Polynomials)[i]).ZMssN[j].TL5H9(
mUkdM,nTAtf,WGczk,obeEw,Mlr3t);((this->Polynomials)[i]).YWp8I[j].TL5H9(UTkBD,
mLeW3,cmCcw,BKeHN,Mlr3t);}mqVUq=(this->CgOpp->TargetPositionVector->VecData)[i]-
((this->Polynomials)[i]).ZMssN[((this->Polynomials)[i]).Ti1i1-
(0x9fd+3800-0x18d4)].cPb5F(this->SynchronizationTime);for(j=(0x10a1+1637-0x1706)
;j<((this->Polynomials)[i]).Ti1i1;j++){((this->Polynomials)[i]).ZMssN[j].qkMx3(&
mUkdM,&nTAtf,&WGczk,&obeEw,&Mlr3t);WGczk+=mqVUq/this->SynchronizationTime;obeEw
-=Mlr3t*mqVUq/this->SynchronizationTime;((this->Polynomials)[i]).ZMssN[j].TL5H9(
mUkdM,nTAtf,WGczk,obeEw,Mlr3t);}}
}}}}
