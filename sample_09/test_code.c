#include "test_code.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#include <stdlib.h>
struct Results solution(int N,int A[],int M){
   struct Results result={(int*)calloc(N,sizeof(int)),N};
   int X,mc=0,i;
   for(int K=0;K<M;K++){
      X=A[K]-1;
      if(/*(0<=X)&&*/(N>X)){
         if(mc<++result.C[X]){
            mc=result.C[X];
         }
      }
      else/*if(N<=X)*/{
         for(i=0;i<N;i++)result.C[i]=mc;
      }
   }
   return result;
}
