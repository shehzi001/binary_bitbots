































#include <TypeIVRMLQuicksort.h>


void BkjIW::uewwZ(const int&nr6fN,const int&L4et6,double*pafDx){int W4h7_,uthvv;
double XyO6_,FTmNY;XyO6_=pafDx[(nr6fN+L4et6)/(0x246+9329-0x26b5)];W4h7_=nr6fN;
uthvv=L4et6;
while(W4h7_<=uthvv){while(pafDx[W4h7_]<XyO6_){W4h7_=W4h7_+(0x1cb7+1204-0x216a);}
while(pafDx[uthvv]>XyO6_){uthvv=uthvv-(0x2482+559-0x26b0);}if(W4h7_<=uthvv){
FTmNY=pafDx[W4h7_];pafDx[W4h7_]=pafDx[uthvv];pafDx[uthvv]=FTmNY;W4h7_=W4h7_+
(0x65+8572-0x21e0);uthvv=uthvv-(0xdd4+6266-0x264d);}}
if(nr6fN<uthvv){uewwZ(nr6fN,uthvv,pafDx);}if(W4h7_<L4et6){uewwZ(W4h7_,L4et6,
pafDx);}}
