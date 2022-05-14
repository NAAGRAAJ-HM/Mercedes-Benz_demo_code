#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif
//#include <stdlib.h>

#define L  100000
#define l  0
#define Cm 0
#define CM 2147483647

#define R 10000000
#define mn(a,b) (((a)<(b))?(a):(b))
int solution(int A[],int N){
   int r=0;
   if(N<=0)return -1;
   for(int i=0;i<N;i++){
      int c_i=mn(A[i],N-i-1);
      int r_i=i+c_i;
#if(1 == _DEBUG_)
      printf("\nA[%d]=%d c_i_i=%d [j", i, A[i], c_i);
#endif
      for(int j=r_i+1;j<N;j++){
         if((j-A[j])<=r_i){
#if(1 == _DEBUG_)
            printf(" %d", j);
#endif
            c_i++;
         }
      }
      r+=c_i;
      if(R<r)return -1;
#if(1 == _DEBUG_)
      printf("] c_i_N=%d r=%d", c_i, r);
#endif
   }
   return r;
}

#define R 10000000
#define mn(a,b) (((a)<(b))?(a):(b))
int solution(int A[],int N){
   int r=0;
   if(N<=0)return 0;
   for(int i=0;i<N;i++){
      int c_i=mn(A[i],N-i-1);
      int r_i=i+c_i;
      for(int j=r_i+1;j<N;j++)if((j-A[j])<=r_i)c_i++;
      r+=c_i;
      if(R<r)return -1;
   }
   return r;
}
