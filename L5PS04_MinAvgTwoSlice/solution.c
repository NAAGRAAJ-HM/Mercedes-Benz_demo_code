#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define l      2
#define L 100000
#define m -10000
#define M 10000
#include <stdlib.h>

int solution(int A[],int N){
   for(int i=1;i<N;i++){
      A[i]+=A[i-1];
   }
   int p=0,r=0;
   float Api,Ai2,Ai,Am=A[1]/2.0;
   for(int i=2;i<N;i++){
      if(0==p){
         Api=A[i]/(float)(i+1);
      }
      else{
         Api=(A[i]-A[p-1])/(float)(i-p+1);
      }
      Ai2=(A[i]-A[i-2])/2.0;
      if(Ai2<Api){
         Ai=Ai2;
         p=i-1;
      }
      else{
         Ai=Api;
      }
      if(Ai<Am){
         Am=Ai;
         r=p;
      }
   }
   return r;
}
