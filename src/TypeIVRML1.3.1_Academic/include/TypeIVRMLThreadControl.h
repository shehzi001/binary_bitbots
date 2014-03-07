





























#ifndef XdJmQ
#define XdJmQ
#include <string.h>
#include <math.h>
#ifdef zmpmF
#include <pthread.h>
#endif













































class LVHAx{public:




















LVHAx(const unsigned int&o4XNZ,const unsigned int&ZvCNA){unsigned int i=
(0x306+511-0x505);this->rYJJY=o4XNZ;this->NumberOfDOFs=ZvCNA;this->LKNPI=LVHAx::
vzXbk;this->ek03L=(unsigned int)floor((float)this->NumberOfDOFs/(float)this->
rYJJY)+(0x584+6471-0x1eca);this->mQs10=(0x197c+1759-0x205b);this->lrhNG=
(0x3cb+3159-0x1022);this->UXjr5=new unsigned int[this->rYJJY];this->EwvvM=new 
unsigned int*[this->rYJJY];for(i=(0x2202+351-0x2361);i<this->rYJJY;i++){(this->
EwvvM)[i]=new unsigned int[this->ek03L];memset((this->EwvvM)[i],
(0xee1+216-0xfb9),(this->ek03L*sizeof(unsigned int)));(this->UXjr5)[i]=
(0x1c7c+1498-0x2256);}
#ifdef zmpmF
pthread_mutex_init(&(this->Hxh3L),NULL);pthread_cond_init(&(this->m_TfT),NULL);
pthread_cond_init(&(this->WDOUx),NULL);
#endif
}












LVHAx(const LVHAx&bKurN){unsigned int i=(0x4fd+923-0x898);this->UXjr5=new 
unsigned int[bKurN.rYJJY];this->EwvvM=new unsigned int*[bKurN.rYJJY];for(i=
(0x6e9+6369-0x1fca);i<this->rYJJY;i++){(this->EwvvM)[i]=new unsigned int[bKurN.
ek03L];}*this=bKurN;}





~LVHAx(void){unsigned int i=(0x9ef+5005-0x1d7c);for(i=(0xce5+2138-0x153f);i<this
->rYJJY;i++){delete[](this->EwvvM)[i];}delete[]this->EwvvM;delete[]this->UXjr5;
this->EwvvM=NULL;this->UXjr5=NULL;
#ifdef zmpmF		
pthread_mutex_destroy(&(this->Hxh3L));pthread_cond_destroy(&(this->m_TfT));
pthread_cond_destroy(&(this->WDOUx));
#endif
}











LVHAx&operator=(const LVHAx&bKurN){unsigned int i=(0x19e6+1739-0x20b1);this->
rYJJY=bKurN.rYJJY;this->NumberOfDOFs=bKurN.NumberOfDOFs;this->LKNPI=bKurN.LKNPI;
this->ek03L=bKurN.ek03L;this->mQs10=bKurN.mQs10;this->lrhNG=bKurN.lrhNG;memcpy(
this->UXjr5,bKurN.UXjr5,(this->rYJJY*sizeof(unsigned int)));memcpy(this->EwvvM,
bKurN.EwvvM,(this->rYJJY*sizeof(unsigned int*)));for(i=(0x1fe3+1309-0x2500);i<
this->rYJJY;i++){memcpy((this->EwvvM)[i],(bKurN.EwvvM)[i],(this->ek03L*sizeof(
unsigned int)));}
#ifdef zmpmF
this->Hxh3L=bKurN.Hxh3L;this->m_TfT=bKurN.m_TfT;this->WDOUx=bKurN.WDOUx;
#endif
return(*this);}



















enum J8oQs{
vzXbk=(0x966+4115-0x1979),

TlOP4=(0x392+7772-0x21ed),

lOqfu=(0x8f4+2875-0x142d),

RRc8q=(0x532+7044-0x20b3),

ABqAH=(0xc8c+4593-0x1e3e)};





























inline bool pR7Vi(unsigned int*LhYH2){if((this->UXjr5)[(0x896+209-0x967)]==
(0x5db+7623-0x23a2)){
#ifdef zmpmF		
pthread_mutex_lock(&(this->Hxh3L));
#endif
(this->mQs10)++;
#ifdef zmpmF			
pthread_mutex_unlock(&(this->Hxh3L));
#endif
return(false);}else{*LhYH2=((this->EwvvM)[(0xeca+3301-0x1baf)])[(this->UXjr5)[
(0x1881+178-0x1933)]-(0x391+5236-0x1804)];((this->UXjr5)[(0xe16+1262-0x1304)])--
;return(true);}}

































inline void NB96T(const unsigned int&dNe1K,unsigned int*LhYH2,unsigned int*NUjKe
){*LhYH2=(this->EwvvM)[dNe1K][(this->UXjr5)[dNe1K]-(0x167c+1580-0x1ca7)];((this
->UXjr5)[dNe1K])--;*NUjKe=this->LKNPI;}
#ifdef zmpmF



















inline void nKv9A(const unsigned int&dNe1K){if((this->UXjr5)[dNe1K]==
(0x69+3469-0xdf6)){pthread_mutex_lock(&(this->Hxh3L));(this->mQs10)++;
pthread_mutex_unlock(&(this->Hxh3L));pthread_cond_signal(&(this->m_TfT));}
pthread_mutex_lock(&(this->Hxh3L));while(((this->UXjr5)[dNe1K]==
(0x2548+351-0x26a7))&&(this->LKNPI!=LVHAx::ABqAH)){pthread_cond_wait(&(this->
WDOUx),&(this->Hxh3L));}pthread_mutex_unlock(&(this->Hxh3L));}
#endif











inline void tfLMt(void){
#ifdef zmpmF	
pthread_mutex_lock(&(this->Hxh3L));while(this->mQs10<this->lrhNG){
pthread_cond_wait(&(this->m_TfT),&(this->Hxh3L));}pthread_mutex_unlock(&(this->
Hxh3L));
#endif
return;}









inline void ANhqp(void){
#ifdef zmpmF	
pthread_mutex_lock(&(this->Hxh3L));this->LKNPI=LVHAx::ABqAH;pthread_mutex_unlock
(&(this->Hxh3L));pthread_cond_broadcast(&(this->WDOUx));
#endif
return;}











inline bool LUti5(void){bool ResultValue=false;
#ifdef zmpmF	
pthread_mutex_lock(&(this->Hxh3L));ResultValue=(this->LKNPI==LVHAx::ABqAH);
pthread_mutex_unlock(&(this->Hxh3L));
#endif		
return(ResultValue);}
































inline void Jo1cd(const bool*SelectionVector,const unsigned int&NUjKe){unsigned 
int i=(0xb7c+404-0xd10),pWcrs=(0x7eb+6442-0x2115),OefWy=(0x1367+1650-0x19d9),
P5005=(0x658+3211-0x12e3),t9WuR=(0x316+2847-0xe35),GUHJ7=(0xec3+634-0x113d);for(
i=(0x1ee2+1966-0x2690);i<this->NumberOfDOFs;i++){if(SelectionVector[i]){pWcrs++;
}}OefWy=(unsigned int)floor((float)pWcrs/(float)this->rYJJY);P5005=pWcrs-(OefWy*
this->rYJJY);
#ifdef zmpmF
pthread_mutex_lock(&(this->Hxh3L));
#endif
this->mQs10=(0xcdd+2773-0x17b2);for(i=(0x407+4990-0x1785);i<this->rYJJY;i++){if(
P5005>(0x86d+5948-0x1fa9)){(this->UXjr5)[i]=OefWy+(0xf4d+1692-0x15e8);P5005--;}
else{(this->UXjr5)[i]=OefWy;}}GUHJ7=(0x1ecd+1939-0x2660);t9WuR=
(0xbb+7890-0x1f8d);for(i=(0x1519+4533-0x26ce);i<this->NumberOfDOFs;i++){if(
SelectionVector[i]){(this->EwvvM)[GUHJ7][t9WuR]=i;t9WuR++;if(t9WuR==(this->UXjr5
)[GUHJ7]){t9WuR=(0x855+1515-0xe40);GUHJ7++;}}}this->LKNPI=NUjKe;if(pWcrs<this->
rYJJY){this->lrhNG=pWcrs;}else{this->lrhNG=this->rYJJY;}
#ifdef zmpmF		
pthread_mutex_unlock(&(this->Hxh3L));pthread_cond_broadcast(&(this->WDOUx));
#endif
}









inline void ZMXYL(void){
#ifdef zmpmF
pthread_mutex_lock(&(this->Hxh3L));while(this->mQs10<this->rYJJY-
(0xada+4070-0x1abf)){pthread_cond_wait(&(this->m_TfT),&(this->Hxh3L));}
pthread_mutex_unlock(&(this->Hxh3L));
#endif
return;}









unsigned int ek03L;








unsigned int LKNPI;









unsigned int rYJJY;








unsigned int NumberOfDOFs;









unsigned int*UXjr5;









unsigned int**EwvvM;








unsigned int lrhNG;











unsigned int mQs10;
#ifdef zmpmF







pthread_mutex_t Hxh3L;






pthread_cond_t m_TfT;






pthread_cond_t WDOUx;
#endif
};
#endif

