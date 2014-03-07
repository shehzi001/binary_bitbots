

































#include <TypeIVRMLStep1IntermediateTimeProfiles.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <math.h>



void BkjIW::LIlfP(double*cXGdF,double*HGmnq,double*rM_v0,double*uRwD_,double*
l4nzo){

*cXGdF=-(*cXGdF);*HGmnq=-(*HGmnq);*rM_v0=-(*rM_v0);*uRwD_=-(*uRwD_);*l4nzo=-(*
l4nzo);return;}


void BkjIW::ZbntB(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&TmpZN,const double&q5nqO){
double eUSLv=0.0;

eUSLv=((*rM_v0)-TmpZN)/q5nqO;*YfM6p+=(eUSLv);*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)
*lJXU0(eUSLv)-q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(
eUSLv);*rM_v0=TmpZN;return;}


void BkjIW::MLSwm(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&q5nqO){
double eUSLv=0.0;

eUSLv=(*rM_v0)/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(
eUSLv)-q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(eUSLv);*
rM_v0=0.0;return;}


void BkjIW::bTcSd(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&q5nqO){
double eUSLv=0.0;

eUSLv=-(*rM_v0)/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(
eUSLv)+q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*
rM_v0=0.0;return;}


void BkjIW::NbC_i(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO){
double eUSLv=0.0
,jTaOv=0.0;
jTaOv=mdAxL(lJXU0(*rM_v0)-2.0*q5nqO*(qXUgQ+(*HGmnq)));
eUSLv=(jTaOv-(*rM_v0))/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*
lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv)/6.0;*HGmnq=-qXUgQ;*rM_v0=jTaOv;return;}


void BkjIW::YPfXT(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO){
double eUSLv=0.0;

eUSLv=(TmpZN-(*rM_v0))/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*
lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv
);*rM_v0=TmpZN;
eUSLv=(-qXUgQ-(*HGmnq))/TmpZN;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*TmpZN*
lJXU0(eUSLv);*HGmnq=-qXUgQ;*rM_v0=TmpZN;return;}


void BkjIW::BKJcM(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO){
double eUSLv=0.0
,J4Few=0.0;
J4Few=mdAxL((lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ-(*HGmnq)))/2.0);
eUSLv=(J4Few-(*rM_v0))/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*
lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv
);*rM_v0=J4Few;
eUSLv=(*rM_v0)/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(
eUSLv)-q5nqO*_NEO8(eUSLv)/6.0;*HGmnq=qXUgQ;*rM_v0=0.0;return;}


void BkjIW::V4ati(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO){
double eUSLv=0.0
,J4Few=0.0
,RX73L=0.0;

J4Few=mdAxL((lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ-(*HGmnq)))/2.0);
eUSLv=(J4Few-(*rM_v0))/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*
lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv
);*rM_v0=J4Few;
RX73L=mdAxL(lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ+(*HGmnq)));
eUSLv=((*rM_v0)-RX73L)/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*
lJXU0(eUSLv)-q5nqO*_NEO8(eUSLv)/6.0;*HGmnq=-qXUgQ;*rM_v0=RX73L;return;}


void BkjIW::yrM2p(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO){

double eUSLv=0.0
,J4Few=0.0;
*HGmnq=-(*HGmnq);
J4Few=mdAxL(q5nqO*(qXUgQ-(*HGmnq)));
J4Few=-J4Few;*HGmnq=-(*HGmnq);
eUSLv=(-J4Few)/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(
eUSLv)-q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(eUSLv);*
rM_v0=J4Few;


*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}


void BkjIW::DyHQ9(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0;

G9ynl=(TmpZN-(*rM_v0))/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=(*rM_v0)*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(
TmpZN)/q5nqO;
svvMZ=qXUgQ-(*HGmnq)-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
*YfM6p+=G9ynl;*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl
)/6.0;*HGmnq+=DvG2D;*rM_v0=TmpZN;
*YfM6p+=U2DcK;*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*
rM_v0=TmpZN;
*YfM6p+=kleeB;*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB
)/6.0;*HGmnq=qXUgQ;*rM_v0=0.0;return;}


void BkjIW::TVxU3(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO){
double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0
,J4Few=0.0;
G9ynl=(TmpZN-(*rM_v0))/q5nqO;


DvG2D=(*rM_v0)*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=qXUgQ-(*HGmnq)-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
*YfM6p+=G9ynl;*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl
)/6.0;*HGmnq+=DvG2D;*rM_v0=TmpZN;
*YfM6p+=U2DcK;*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*
rM_v0=TmpZN;
J4Few=mdAxL(lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ+(*HGmnq)));kleeB=((*rM_v0)-J4Few)/
q5nqO;
*YfM6p+=kleeB;*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB
)/6.0;*HGmnq=-qXUgQ;*rM_v0=J4Few;return;}


void BkjIW::_2D46(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0;

G9ynl=kleeB=TmpZN/q5nqO;DvG2D=kxtWz=-0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=-qXUgQ-(*HGmnq)-DvG2D-kxtWz;U2DcK=svvMZ/(-TmpZN);
*YfM6p+=G9ynl;*cXGdF+=(*HGmnq)*G9ynl-q5nqO*_NEO8(G9ynl)/6.0;*HGmnq+=DvG2D;*rM_v0
=-TmpZN;
*YfM6p+=U2DcK;*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*
rM_v0=-TmpZN;
*YfM6p+=kleeB;*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)+q5nqO*_NEO8(kleeB
)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}


void BkjIW::x96T7(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO){

double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0;

G9ynl=(TmpZN-(*rM_v0))/q5nqO;
kleeB=TmpZN/q5nqO;DvG2D=(*rM_v0)*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(
TmpZN)/q5nqO;
svvMZ=-qXUgQ-(*HGmnq)-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
*YfM6p+=G9ynl;*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl
)/6.0;*HGmnq+=DvG2D;*rM_v0=TmpZN;
*YfM6p+=U2DcK;*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*
rM_v0=TmpZN;
*YfM6p+=kleeB;*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB
)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}


void BkjIW::c8VVD(double*YfM6p,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO){
double eUSLv=0.0
,J4Few=0.0;
J4Few=mdAxL((lJXU0((*rM_v0))+2.0*q5nqO*(-qXUgQ-(*HGmnq)))/2.0);
eUSLv=(J4Few-(*rM_v0))/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*
lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv
);*rM_v0=J4Few;
eUSLv=(*rM_v0)/q5nqO;*YfM6p+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(
eUSLv)-q5nqO*_NEO8(eUSLv)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}
