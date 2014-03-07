






























#include <TypeIVRMLVelocity.h>
#include <TypeIVRMLDefinitions.h>
#include <TypeIVRMLMath.h>
#include <RMLVelocityInputParameters.h>
#include <RMLVelocityOutputParameters.h>
#include <RMLVector.h>
#include <ReflexxesAPI.h>
#include <RMLVelocityFlags.h>
using namespace BkjIW;

bool TypeIVRMLVelocity::mhIY0(void){bool BEGEG=true,Esn4v=false;unsigned int i=
(0x1303+3774-0x21c1);double bzQVt=0.0,GLJ3a=0.0,cVCv1=0.0,xnGyf=0.0;for(i=
(0xc68+1419-0x11f3);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(
this->DcVfC->VecData)[i]=(this->CgOpp->CurrentVelocityVector->VecData)[i];(this
->D1CDw->VecData)[i]=(this->CgOpp->CurrentAccelerationVector->VecData)[i];(this
->XAvWp->VecData)[i]=(this->CgOpp->TargetVelocityVector->VecData)[i];bzQVt+=
lJXU0((this->D1CDw->VecData)[i]);GLJ3a+=lJXU0((this->DcVfC->VecData)[i]);cVCv1+=
lJXU0((this->XAvWp->VecData)[i]);}else{(this->DcVfC->VecData)[i]=0.0;(this->
D1CDw->VecData)[i]=0.0;(this->XAvWp->VecData)[i]=0.0;}}bzQVt=mdAxL(bzQVt);GLJ3a=
mdAxL(GLJ3a);cVCv1=mdAxL(cVCv1);if((bzQVt!=CshoR)&&(bzQVt!=0.0)){for(i=
(0x9ba+3195-0x1635);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(
this->D1CDw->VecData)[i]/=bzQVt;}}}else{for(i=(0x1c9+2632-0xc11);i<this->
NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(this->D1CDw->VecData)[i]=0.0;}}
}if((GLJ3a!=CshoR)&&(GLJ3a!=0.0)){for(i=(0x20f0+875-0x245b);i<this->NumberOfDOFs
;i++){if((this->TC8_f->VecData)[i]){(this->DcVfC->VecData)[i]/=GLJ3a;}}}else{for
(i=(0x916+5702-0x1f5c);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(
this->DcVfC->VecData)[i]=0.0;}}}if((cVCv1!=CshoR)&&(cVCv1!=0.0)){for(i=
(0xd4+6258-0x1946);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(this
->XAvWp->VecData)[i]/=cVCv1;}}}else{for(i=(0x8b9+5202-0x1d0b);i<this->
NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(this->XAvWp->VecData)[i]=0.0;}}
}
xnGyf=UbufW;if((bzQVt>=GLJ3a)&&(bzQVt>=cVCv1)&&(bzQVt>=UbufW)){*(this->FiGD5)=*(
this->D1CDw);xnGyf=bzQVt;}if((GLJ3a>=bzQVt)&&(GLJ3a>=cVCv1)&&(GLJ3a>=UbufW)){*(
this->FiGD5)=*(this->DcVfC);xnGyf=GLJ3a;}if((cVCv1>=bzQVt)&&(cVCv1>=GLJ3a)&&(
cVCv1>=UbufW)){*(this->FiGD5)=*(this->XAvWp);xnGyf=cVCv1;}if(xnGyf>UbufW){
Esn4v=true;for(i=(0x410+6523-0x1d8b);i<this->NumberOfDOFs;i++){if((this->TC8_f->
VecData)[i]){if((ErhpP((this->D1CDw->VecData)[i])==ErhpP((this->FiGD5->VecData)[
i]))&&(fabs((this->D1CDw->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){
for(i=(0x4a0+4868-0x17a4);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]
){(this->D1CDw->VecData)[i]=-(this->D1CDw->VecData)[i];}}}Esn4v=true;for(i=
(0x2a0+3982-0x122e);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){if((
ErhpP((this->DcVfC->VecData)[i])==ErhpP((this->FiGD5->VecData)[i]))&&(fabs((this
->DcVfC->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){for(i=
(0x2cc+8554-0x2436);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(
this->DcVfC->VecData)[i]=-(this->DcVfC->VecData)[i];}}}Esn4v=true;for(i=
(0x16f0+2175-0x1f6f);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){if(
(ErhpP((this->XAvWp->VecData)[i])==ErhpP((this->FiGD5->VecData)[i]))&&(fabs((
this->XAvWp->VecData)[i])>UbufW)){Esn4v=false;break;}}}if(Esn4v){for(i=
(0xaaf+572-0xceb);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){(this
->XAvWp->VecData)[i]=-(this->XAvWp->VecData)[i];}}}
for(i=(0xe3+3488-0xe83);i<this->NumberOfDOFs;i++){if((this->TC8_f->VecData)[i]){
if(((fabs((this->FiGD5->VecData)[i]-(this->D1CDw->VecData)[i])>UbufW)&&(fabs((
this->D1CDw->VecData)[i])>UbufW))||((fabs((this->FiGD5->VecData)[i]-(this->DcVfC
->VecData)[i])>UbufW)&&(fabs((this->DcVfC->VecData)[i])>UbufW))||((fabs((this->
FiGD5->VecData)[i]-(this->XAvWp->VecData)[i])>UbufW)&&(fabs((this->XAvWp->
VecData)[i])>UbufW))){BEGEG=false;break;}}}}else{BEGEG=false;}if(!BEGEG){this->
FiGD5->Set(0.0);}return(BEGEG);}
