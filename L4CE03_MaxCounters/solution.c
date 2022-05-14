#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define Cm 1
#define CM 100000

// Correctness = 33%, performance = 0%
/*
#include <stdlib.h>
struct Results solution(int N,int A[],int M){
   struct Results result={(int*)calloc(N,sizeof(int)),N};
   int X,mc=0,i;
   for(int K=0;K<M;K++){
      X=A[K]-1;
      if(N>X){
         if(mc<++result.C[X]){
            mc=result.C[X];
         }
      }
      else{
         for(i=0;i<N;i++)result.C[i]=mc;
      }
   }
   return result;
}
*/

#include <stdlib.h>
struct Results solution(int N,int A[],int M){
   struct Results r={(int*)calloc(N,sizeof(int)),N};
   int bc=0,mc=0;
#if(1 == _DEBUG_)
   printf("\n\nN=%d", N);
#endif
   for(int K=0;K<M;K++){
      int X=A[K]-1;
      if(N==X){
         bc=mc;
      }
      else if(N>X){
         if(r.C[X]<bc){
            r.C[X]=bc+1;
         }
         else{
            r.C[X]++;
            if(mc<r.C[X]){
               mc=r.C[X];
            }
         }
      }
#if(1 == _DEBUG_)
      printf("\nA[%d]=%d X=%d mc=%d bc=%d", K, A[K], X, mc, bc);
      for(int i=0;i<N;i++){
         printf(" %d", r.C[i]);
      }
#endif
   }
   for(int K=0;K<N;K++){
      if(r.C[K]<bc){
         r.C[K]=bc;
      }
   }
   return r;
}
