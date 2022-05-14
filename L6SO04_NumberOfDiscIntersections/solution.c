#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define L  100000
#define l  0
#define Cm 0
#define CM 2147483647

#define R 10000000
#define mx(a,b) (((a)<(b))?(a):(b))
#define mn(a,b) (((a)<(b))?(a):(b))
int solution(int A[],int N){
   int i,t=N-1,r=0;
   if(N<=0)return 0;
   int* dps=(int*)calloc(N,sizeof(int));
   int* dpe=(int*)calloc(N,sizeof(int));
   for(i=0;i<N;i++){
      int s=mx(i-A[i],0);
      int e=t-i>A[i]?i+A[i]:t; //TBD?
      dps[s]++;
      dpe[e]++;
   }
   t=0;
   for(i=0;i<N;i++){
      if(0<dps[i]){
         r+=t*dps[i];
         r+=dps[i]*(dps[i]-1)/2;
         if(R<r){
            free(dps);
            free(dpe);
            return -1;
         }
         t+=dps[i];
      }
      t-=dpe[i];
   }
   free(dps);
   free(dpe);
   return r;
}
