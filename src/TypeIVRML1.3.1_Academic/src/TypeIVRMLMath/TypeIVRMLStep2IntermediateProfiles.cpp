

































#include <TypeIVRMLStep2IntermediateProfiles.h>
#include <TypeIVRMLPolynomial.h>
#include <TypeIVRMLMath.h>
#include <TypeIVRMLDefinitions.h>
#include <math.h>



void BkjIW::mO1pa(double*cXGdF,double*HGmnq,double*rM_v0,double*uRwD_,double*
l4nzo,bool*frwbM){

*cXGdF=-(*cXGdF);*HGmnq=-(*HGmnq);*rM_v0=-(*rM_v0);*uRwD_=-(*uRwD_);*l4nzo=-(*
l4nzo);*frwbM=!(*frwbM);return;}


void BkjIW::vw22v(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM){
double eUSLv=0.0;

eUSLv=((*rM_v0)-TmpZN)/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),(0.5*(-(*rM_v0))),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(
-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,
(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5
*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-
q5nqO)*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0
,(-q5nqO),(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->
Ti1i1++;
*GcdhE+=(eUSLv);*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-q5nqO*_NEO8(
eUSLv)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(eUSLv);*rM_v0=TmpZN;return;}


void BkjIW::hDBkU(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&q5nqO,jKICA*Qy4rb,const bool&frwbM){
double eUSLv=0.0;

eUSLv=(*rM_v0)/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((q5nqO)/6.0),(0.5*(-(*rM_v0))),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(
-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,
(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5
*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-
q5nqO)*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0
,(-q5nqO),(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->
Ti1i1++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq+=(*rM_v0)*eUSLv-0.5*q5nqO*lJXU0(eUSLv);*rM_v0=0.0;return;}


void BkjIW::KaAcO(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM){
double eUSLv=0.0
,jTaOv=0.0;

jTaOv=mdAxL(lJXU0(*rM_v0)-2.0*q5nqO*(qXUgQ+(*HGmnq)));
eUSLv=(jTaOv-(*rM_v0))/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(-0.5*(*rM_v0)),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(-q5nqO*0.5),
(-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-
q5nqO,(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(
0.5*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(
q5nqO*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,
q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->Ti1i1
++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq=-qXUgQ;*rM_v0=jTaOv;return;}


void BkjIW::Zsd8N(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM)
{
double eUSLv=0.0;

eUSLv=(TmpZN-(*rM_v0))/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(-0.5*(*rM_v0)),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(-q5nqO*0.5),
(-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-
q5nqO,(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(
0.5*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(
q5nqO*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,
q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->Ti1i1
++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=TmpZN;
eUSLv=(-qXUgQ-(*HGmnq))/TmpZN;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*TmpZN),(-(*HGmnq)),(-(*
cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,(-TmpZN),(-(*HGmnq)),
(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,(-TmpZN),(*GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),(*HGmnq),(*cXGdF),(*GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,(*HGmnq),(*GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*
GcdhE)+eUSLv;Qy4rb->Ti1i1++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*TmpZN*lJXU0(eUSLv);*HGmnq=-qXUgQ;*rM_v0
=TmpZN;return;}


void BkjIW::Uphbw(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM){
double eUSLv=0.0
,J4Few=0.0
,RX73L=0.0;

J4Few=mdAxL((lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ-(*HGmnq)))/2.0);
eUSLv=(J4Few-(*rM_v0))/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(-0.5*(*rM_v0)),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(-q5nqO*0.5),
(-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-
q5nqO,(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(
0.5*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(
q5nqO*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,
q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->Ti1i1
++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=J4Few;
RX73L=mdAxL(lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ+(*HGmnq)));
eUSLv=((*rM_v0)-RX73L)/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(-0.5*(*rM_v0)),(-(*HGmnq
)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-(*
rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-(
*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(*
rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-
q5nqO)*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0
,-q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->
Ti1i1++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq=-qXUgQ;*rM_v0=RX73L;return;}


void BkjIW::v2_Br(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM)
{
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
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(-0.5*(*rM_v0)),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*q5nqO),
(-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-
q5nqO,(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(
0.5*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(
0.5*q5nqO),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,
q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+G9ynl;Qy4rb->Ti1i1
++;
*GcdhE+=G9ynl;*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl
)/6.0;*HGmnq+=DvG2D;*rM_v0=TmpZN;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*TmpZN),(-(*HGmnq)),(-(*
cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,(-(*HGmnq)),(*
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(*GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),(*HGmnq),(*cXGdF),(*GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,(*HGmnq),(*GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*
GcdhE)+U2DcK;Qy4rb->Ti1i1++;
*GcdhE+=U2DcK;*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*
rM_v0=TmpZN;
J4Few=mdAxL(lJXU0((*rM_v0))+2.0*q5nqO*(qXUgQ+(*HGmnq)));kleeB=((*rM_v0)-J4Few)/
q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(-0.5*(*rM_v0)),(-(*HGmnq
)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-(*
rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-(
*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(*
rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-
q5nqO)*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0
,-q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+kleeB;Qy4rb->
Ti1i1++;
*GcdhE+=kleeB;*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB
)/6.0;*HGmnq=-qXUgQ;*rM_v0=J4Few;return;}


void BkjIW::XqkX3(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&TmpZN,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM)
{
double G9ynl=0.0
,U2DcK=0.0
,kleeB=0.0
,DvG2D=0.0
,svvMZ=0.0
,kxtWz=0.0;

G9ynl=(TmpZN-(*rM_v0))/q5nqO;


DvG2D=(*rM_v0)*G9ynl+0.5*q5nqO*lJXU0(G9ynl);kxtWz=0.5*lJXU0(TmpZN)/q5nqO;
svvMZ=-qXUgQ-(*HGmnq)-DvG2D-kxtWz;U2DcK=svvMZ/TmpZN;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(-0.5*(*rM_v0)),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*q5nqO),
(-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-
q5nqO,(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(
0.5*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(
0.5*q5nqO),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,
q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+G9ynl;Qy4rb->Ti1i1
++;
*GcdhE+=G9ynl;*cXGdF+=(*HGmnq)*G9ynl+0.5*(*rM_v0)*lJXU0(G9ynl)+q5nqO*_NEO8(G9ynl
)/6.0;*HGmnq+=DvG2D;*rM_v0=TmpZN;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(-0.5*TmpZN),(-(*HGmnq)),(-(*
cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-TmpZN,(-(*HGmnq)),(*
GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,-TmpZN,(*GcdhE));}else{
Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(0.0,(0.5*TmpZN),(*HGmnq),(*cXGdF),(*GcdhE));
Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,0.0,TmpZN,(*HGmnq),(*GcdhE));Qy4rb->sabLl[
Qy4rb->Ti1i1].TL5H9(0.0,0.0,0.0,TmpZN,(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*
GcdhE)+U2DcK;Qy4rb->Ti1i1++;
*GcdhE+=U2DcK;*cXGdF+=(*HGmnq)*U2DcK+0.5*(*rM_v0)*lJXU0(U2DcK);*HGmnq+=svvMZ;*
rM_v0=TmpZN;kleeB=(*rM_v0)/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(-0.5*(*rM_v0)),(-(*HGmnq
)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-(*
rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-(
*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(*
rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-
q5nqO)*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0
,-q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+kleeB;Qy4rb->
Ti1i1++;
*GcdhE+=kleeB;*cXGdF+=(*HGmnq)*kleeB+0.5*(*rM_v0)*lJXU0(kleeB)-q5nqO*_NEO8(kleeB
)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}


void BkjIW::vXjXz(double*GcdhE,double*cXGdF,double*HGmnq,double*rM_v0,const 
double&qXUgQ,const double&q5nqO,jKICA*Qy4rb,const bool&frwbM){
double eUSLv=0.0
,ENArr=0.0;
ENArr=0.70710678118654752440084436210485*mdAxL(lJXU0(q5nqO)*(lJXU0(*rM_v0)+2.0*
q5nqO*(-qXUgQ-(*HGmnq))))/q5nqO;
eUSLv=(ENArr-(*rM_v0))/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(-0.5*(*rM_v0)),(-(*
HGmnq)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(-q5nqO*0.5),
(-(*rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,-
q5nqO,(-(*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(
0.5*(*rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(
q5nqO*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,
q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->Ti1i1
++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)+q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq+=(*rM_v0)*eUSLv+0.5*q5nqO*lJXU0(eUSLv);*rM_v0=ENArr;
eUSLv=(*rM_v0)/q5nqO;
if(frwbM){Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9((q5nqO/6.0),(-0.5*(*rM_v0)),(-(*HGmnq
)),(-(*cXGdF)),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,(q5nqO*0.5),(-(*
rM_v0)),(-(*HGmnq)),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0,q5nqO,(-(
*rM_v0)),(*GcdhE));}else{Qy4rb->ZMssN[Qy4rb->Ti1i1].TL5H9(((-q5nqO)/6.0),(0.5*(*
rM_v0)),(*HGmnq),(*cXGdF),(*GcdhE));Qy4rb->YWp8I[Qy4rb->Ti1i1].TL5H9(0.0,((-
q5nqO)*0.5),(*rM_v0),(*HGmnq),(*GcdhE));Qy4rb->sabLl[Qy4rb->Ti1i1].TL5H9(0.0,0.0
,-q5nqO,(*rM_v0),(*GcdhE));}Qy4rb->So6Nc[Qy4rb->Ti1i1]=(*GcdhE)+eUSLv;Qy4rb->
Ti1i1++;
*GcdhE+=eUSLv;*cXGdF+=(*HGmnq)*eUSLv+0.5*(*rM_v0)*lJXU0(eUSLv)-q5nqO*_NEO8(eUSLv
)/6.0;*HGmnq=-qXUgQ;*rM_v0=0.0;return;}
