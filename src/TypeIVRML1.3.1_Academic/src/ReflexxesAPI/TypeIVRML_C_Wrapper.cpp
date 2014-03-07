





























#include <TypeIVRML_C_Wrapper.h>
#include <RMLPositionInputParameters.h>
#include <RMLPositionOutputParameters.h>
#include <ReflexxesAPI.h>
#include <RMLPositionFlags.h>



bool vK6bF=false;
unsigned int hosu6=(0xd19+5556-0x22cd);
ReflexxesAPI*ktZB5=NULL;
RMLPositionInputParameters*Pdoxk=NULL;
RMLPositionOutputParameters*QzVSm=NULL;
RMLPositionFlags iBwEd;
RMLVelocityInputParameters*PL3TG=NULL;
RMLVelocityOutputParameters*RJH1o=NULL;
RMLVelocityFlags BLPSs;

int TypeIVRMLCreate(const unsigned int NumberOfDOFs,const double ypdPO){if((
vK6bF)||(ypdPO<=0.0)){return(-(0x11a+450-0x2db));}ktZB5=new ReflexxesAPI(
NumberOfDOFs,ypdPO);Pdoxk=new RMLPositionInputParameters(NumberOfDOFs);QzVSm=new
 RMLPositionOutputParameters(NumberOfDOFs);PL3TG=new RMLVelocityInputParameters(
NumberOfDOFs);RJH1o=new RMLVelocityOutputParameters(NumberOfDOFs);vK6bF=true;
hosu6=NumberOfDOFs;return((0x8c+9247-0x24ab));}

int TypeIVRMLPosition(const double*Dk1wk,const double*qI8hj,const double*OFgA6,
const double*qXUgQ,const double*TmpZN,const double*q5nqO,const double*qPN_6,
const double*_DBry,const int*SelectionVector,double*dj3ZS,double*GbLIJ,double*
nZE_n){unsigned int i=(0x19f6+473-0x1bcf);int ResultValue=(0x1d04+1964-0x24b0);
if(!vK6bF){return(-(0x20a6+21-0x20ba));}for(i=(0x1407+2754-0x1ec9);i<hosu6;i++){
Pdoxk->CurrentPositionVector->VecData[i]=Dk1wk[i];Pdoxk->CurrentVelocityVector->
VecData[i]=qI8hj[i];Pdoxk->CurrentAccelerationVector->VecData[i]=OFgA6[i];Pdoxk
->MaxVelocityVector->VecData[i]=qXUgQ[i];Pdoxk->MaxAccelerationVector->VecData[i
]=TmpZN[i];Pdoxk->MaxJerkVector->VecData[i]=q5nqO[i];Pdoxk->TargetPositionVector
->VecData[i]=qPN_6[i];Pdoxk->TargetVelocityVector->VecData[i]=_DBry[i];Pdoxk->
SelectionVector->VecData[i]=(SelectionVector[i]>(0x608+6808-0x20a0));}
ResultValue=ktZB5->RMLPosition(*Pdoxk,QzVSm,iBwEd);for(i=(0x1242+447-0x1401);i<
hosu6;i++){dj3ZS[i]=QzVSm->NewPositionVector->VecData[i];GbLIJ[i]=QzVSm->
NewVelocityVector->VecData[i];nZE_n[i]=QzVSm->NewAccelerationVector->VecData[i];
}return(ResultValue);}

int TypeIVRMLVelocity(const double*Dk1wk,const double*qI8hj,const double*OFgA6,
const double*TmpZN,const double*q5nqO,const double*_DBry,const int*
SelectionVector,double*dj3ZS,double*GbLIJ,double*nZE_n){unsigned int i=
(0x3a4+4145-0x13d5);int ResultValue=(0xaf6+3072-0x16f6);if(!vK6bF){return(-
(0x777+4366-0x1884));}for(i=(0x12fd+4255-0x239c);i<hosu6;i++){PL3TG->
CurrentPositionVector->VecData[i]=Dk1wk[i];PL3TG->CurrentVelocityVector->VecData
[i]=qI8hj[i];PL3TG->CurrentAccelerationVector->VecData[i]=OFgA6[i];PL3TG->
MaxAccelerationVector->VecData[i]=TmpZN[i];PL3TG->MaxJerkVector->VecData[i]=
q5nqO[i];PL3TG->TargetVelocityVector->VecData[i]=_DBry[i];PL3TG->SelectionVector
->VecData[i]=(SelectionVector[i]>(0xdf7+4782-0x20a5));}ResultValue=ktZB5->
RMLVelocity(*PL3TG,RJH1o,BLPSs);for(i=(0x1882+3667-0x26d5);i<hosu6;i++){dj3ZS[i]
=RJH1o->NewPositionVector->VecData[i];GbLIJ[i]=RJH1o->NewVelocityVector->VecData
[i];nZE_n[i]=RJH1o->NewAccelerationVector->VecData[i];}return(ResultValue);}

int TypeIVRMLDestroy(void){if(!vK6bF){return(-(0x94f+6299-0x21e9));}delete ktZB5
;delete Pdoxk;delete QzVSm;delete PL3TG;delete RJH1o;hosu6=(0x748+3132-0x1384);
vK6bF=false;return((0xdf1+6337-0x26b2));}
