

































#include <TypeIVRMLStep1IntermediateChangingProfiles.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <math.h>


void BkjIW::FstLa(double*cXGdF,double*HGmnq,double*rM_v0,double*uRwD_,double*
l4nzo){

*cXGdF=-(*cXGdF);*HGmnq=-(*HGmnq);*rM_v0=-(*rM_v0);*uRwD_=-(*uRwD_);*l4nzo=-(*
l4nzo);return;}


void BkjIW::FA6tY(double*cXGdF,double*HGmnq,double*rM_v0,const double&TmpZN,
const double&q5nqO){
double eUSLv=0.0;

eUSLv=((*rM_v0)-TmpZN)/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-
q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(eUSLv);*rM_v0=
TmpZN;return;}


void BkjIW::okX3X(double*cXGdF,double*HGmnq,double*rM_v0,const double&q5nqO){
double eUSLv=0.0;

eUSLv=(*rM_v0)/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-q5nqO*
_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(eUSLv);*rM_v0=0.0;return
;}


void BkjIW::KLpXt(double*cXGdF,double*HGmnq,double*rM_v0,const double&q5nqO){
double eUSLv=0.0;

eUSLv=(-(*rM_v0))/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+q5nqO*
_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=0.0;return
;}


void BkjIW::WJZ4n(double*cXGdF,double*HGmnq,double*rM_v0,const double&qXUgQ,
const double&q5nqO){
double eUSLv=0.0
,jTaOv=0.0;
jTaOv=mdAxL(lJXU0(*rM_v0)-2.0*q5nqO*(qXUgQ+(*HGmnq)));
eUSLv=(jTaOv-(*rM_v0))/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+
q5nqO*_NEO8(eUSLv)/6.0;*HGmnq=-qXUgQ;*rM_v0=jTaOv;return;}


void BkjIW::XcUUH(double*cXGdF,double*HGmnq,double*rM_v0,const double&qXUgQ,
const double&TmpZN,const double&q5nqO){

double eUSLv=0.0;
eUSLv=(TmpZN-(*rM_v0))/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+
q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=
TmpZN;
eUSLv=(-qXUgQ-(*HGmnq))/TmpZN;*cXGdF+=(*HGmnq)*eUSLv+0.5*TmpZN*lJXU0(eUSLv);*
HGmnq=-qXUgQ;*rM_v0=TmpZN;return;}


void BkjIW::zhkRv(double*cXGdF,double*HGmnq,double*rM_v0,const double&qXUgQ,
const double&q5nqO){
double eUSLv=0.0
,J4Few=0.0
,RX73L=0.0;

J4Few=mdAxL((lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ-(*HGmnq)))/2.0);
eUSLv=(J4Few-(*rM_v0))/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+
q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=
J4Few;
RX73L=mdAxL(lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ+(*HGmnq)));
eUSLv=((*rM_v0)-RX73L)/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-
q5nqO*_NEO8(eUSLv)/6.0;*HGmnq=-qXUgQ;*rM_v0=RX73L;return;}


void BkjIW::fnMCM(double*cXGdF,double*HGmnq,double*rM_v0,const double&qXUgQ,
const double&TmpZN,const double&q5nqO){
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
*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;*HGmnq+=
DvG2D;*rM_v0=TmpZN;
*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*rM_v0=TmpZN;
J4Few=mdAxL(lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ+(*HGmnq)));kleeB=((*rM_v0)-J4Few)/
q5nqO;
*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;*HGmnq=-
qXUgQ;*rM_v0=J4Few;return;}


void BkjIW::PEwQA(double*cXGdF,double*HGmnq,double*rM_v0,const double&qXUgQ,
const double&TmpZN,const double&q5nqO){

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
*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl)/6.0;*HGmnq+=
DvG2D;*rM_v0=TmpZN;
*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*rM_v0=TmpZN;
*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB)/6.0;*HGmnq=-
qXUgQ;*rM_v0=0.0;return;}


void BkjIW::Ukjk4(double*cXGdF,double*HGmnq,double*rM_v0,const double&qXUgQ,
const double&q5nqO){
double eUSLv=0.0
,J4Few=0.0;
J4Few=mdAxL((lJXU0((*rM_v0))+2.0*q5nqO*(-qXUgQ-(*HGmnq)))/2.0);
eUSLv=(J4Few-(*rM_v0))/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+
q5nqO*_NEO8(eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=
J4Few;
eUSLv=(*rM_v0)/q5nqO;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-q5nqO*
_NEO8(eUSLv)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}
