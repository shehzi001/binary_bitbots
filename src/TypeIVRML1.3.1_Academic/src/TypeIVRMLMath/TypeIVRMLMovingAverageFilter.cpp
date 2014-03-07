

































#include <TypeIVRMLMovingAverageFilter.h>
#include <TypeIVRMLDefinitions.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


BkjIW::g3_QI::g3_QI(const double&ypdPO,const double&FUA4p,const double&Zi9N9,
const double&qlf40){unsigned int i=(0x111f+2432-0x1a9f);this->CycleTime=ypdPO;
this->ZeN5q=FUA4p;if(Zi9N9<=FUA4p){this->wBnOa=Zi9N9;}else{this->wBnOa=FUA4p;}
this->P90PB=(unsigned int)ceil(0.5*this->wBnOa/ypdPO);this->Pnjha=(unsigned int)
ceil(0.5*FUA4p/ypdPO);this->X2HXi=(0x1875+2970-0x240f);this->NunNk=kiQzO;this->
yPvHT[(0x1a7f+1797-0x2184)]=qlf40;this->yPvHT[(0xce6+90-0xd3f)]=0.0;this->dh7T_=
qlf40;this->D1nm3=qlf40;if(this->P90PB<=(0x654+1087-0xa92)){this->p6eP1=this->
X2HXi;this->P90PB=(0x472+2202-0xd0b);}else{this->p6eP1=this->P90PB-
(0x629+7924-0x251c);}this->jM1zJ=new double[this->Pnjha];for(i=
(0x609+3433-0x1372);i<this->Pnjha;i++){this->jM1zJ[i]=qlf40;}}

BkjIW::g3_QI::g3_QI(const g3_QI&ph8BO){this->jM1zJ=new double[this->Pnjha];*this
=ph8BO;}

BkjIW::g3_QI::~g3_QI(void){delete[]this->jM1zJ;this->jM1zJ=NULL;}

BkjIW::g3_QI&BkjIW::g3_QI::operator=(const g3_QI&ph8BO){this->CycleTime=ph8BO.
CycleTime;this->ZeN5q=ph8BO.ZeN5q;this->wBnOa=ph8BO.wBnOa;this->P90PB=ph8BO.
P90PB;this->Pnjha=ph8BO.Pnjha;this->X2HXi=ph8BO.X2HXi;this->NunNk=ph8BO.NunNk;
this->yPvHT[(0x4b3+2888-0xffb)]=ph8BO.yPvHT[(0x13f5+3926-0x234b)];this->yPvHT[
(0xc98+3812-0x1b7b)]=ph8BO.yPvHT[(0xbf3+5600-0x21d2)];this->dh7T_=ph8BO.dh7T_;
this->D1nm3=ph8BO.D1nm3;memcpy((void*)(this->jM1zJ),(void*)(ph8BO.jM1zJ),(this->
Pnjha*sizeof(double)));return(*this);}

int BkjIW::g3_QI::br6v1(const double&WoMIs,double*KnNXI,bool*DT1PQ){double OflBf
=0.0;

if((KnNXI==NULL)||(DT1PQ==NULL)){return(BkjIW::g3_QI::J2RLo);}if((WoMIs<0.0)||(
WoMIs>R_UAP)){return(BkjIW::g3_QI::buvaP);}

if(!OHHbY(this->dh7T_,WoMIs)){this->NunNk=0.0;this->yPvHT[(0x69d+4664-0x18d5)]=
this->D1nm3;this->dh7T_=WoMIs;if(this->wBnOa*0.5<BLXud){this->yPvHT[
(0xdda+3903-0x1d18)]=kiQzO;}else{this->yPvHT[(0x1a00+1617-0x2050)]=(this->dh7T_-
this->D1nm3)/(this->wBnOa*0.5);}}

this->NunNk+=this->CycleTime;if(this->NunNk<this->ZeN5q){OflBf=this->yPvHT[
(0xf7b+5260-0x2407)]+this->yPvHT[(0xa63+592-0xcb2)]*NunNk;if((OflBf>this->dh7T_)
&&(this->yPvHT[(0x8c0+6057-0x2068)]>0.0)){OflBf=this->dh7T_;}if((OflBf<this->
dh7T_)&&(this->yPvHT[(0x17b3+2825-0x22bb)]<0.0)){OflBf=this->dh7T_;}
*KnNXI=this->BgX_c(OflBf);if(this->NunNk<this->wBnOa){*DT1PQ=true;}else{*DT1PQ=
false;}}else{*KnNXI=this->dh7T_;*DT1PQ=false;}this->D1nm3=*KnNXI;return(BkjIW::
g3_QI::pQEol);}

double BkjIW::g3_QI::BgX_c(const double&WoMIs){unsigned int i=
(0x1409+2787-0x1eec);double F0RVX=0.0;this->X2HXi=(this->X2HXi+
(0xc41+4353-0x1d41))%this->Pnjha;this->p6eP1=(this->p6eP1+(0x1b3b+150-0x1bd0))%
this->Pnjha;this->jM1zJ[this->p6eP1]=WoMIs;for(i=(0x1648+50-0x167a);i<this->
P90PB;i++){F0RVX+=this->jM1zJ[(this->X2HXi+i)%this->Pnjha];}return(F0RVX/((
double)(this->P90PB)));}

int BkjIW::g3_QI::NMWfY(const double&cAxLR,const double&eIKIe){unsigned int i=
(0x184c+1818-0x1f66);if((eIKIe<0.0)||(eIKIe>this->ZeN5q)){return(BkjIW::g3_QI::
RdBSH);}if((cAxLR<0.0)||(cAxLR>R_UAP)){return(BkjIW::g3_QI::buvaP);}for(i=
(0x1307+3071-0x1f06);i<this->Pnjha;i++){this->jM1zJ[i]=cAxLR;}this->NunNk=kiQzO;
this->dh7T_=cAxLR;this->D1nm3=cAxLR;this->yPvHT[(0xb38+3280-0x1808)]=cAxLR;this
->yPvHT[(0x1dcd+890-0x2146)]=0.0;this->wBnOa=eIKIe;this->P90PB=(unsigned int)
ceil(0.5*eIKIe/this->CycleTime);if((int)this->p6eP1-(int)this->P90PB<
(0x1ffb+104-0x2063)){this->X2HXi=this->p6eP1-this->P90PB+this->Pnjha;}else{this
->X2HXi=this->p6eP1-this->P90PB;}if(this->P90PB<=(0x517+4-0x51a)){this->P90PB=
(0x13b9+2961-0x1f49);}return(BkjIW::g3_QI::pQEol);}
