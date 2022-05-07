#include "test_code.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define l          1
#define L    1000000
#define m          1
#define M 1000000000

#include <stdlib.h>
int solution(int A[],int N){
   int* D=(int*)calloc(N,sizeof(int));
   int t,d,r;
   for(t=0;t<N;t++){
      if(A[t]>N){
         break;
      }
      else{
         D[A[t]-1]++;
      }
   }
   if(t==N){
      for(d=0;d<N;d++)if(1!=D[d])break;
      if(N==d)r=1;
      else r=0;
   }
   else r=0;
   free(D);
   return r;
}
