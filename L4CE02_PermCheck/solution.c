#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define l          1
#define L    1000000
#define m          1
#define M 1000000000

#include <stdlib.h>
int solution(int A[],int N){
   int* p_c=(int*)calloc(N,sizeof(int));
   int i,r=-1;
   for(i=0;i<N;i++){
      if(N<A[i]){
         r=0;
         break;
      }
      else{
         if(0==p_c[A[i]-1])p_c[A[i]-1]++;
         else{
            r=0;
            break;
         }
      }
   }
   if((-1==r)&&(N==i))r=1;
   free(p_c);
   return r;
}
