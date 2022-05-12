#include "test_code.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif
//#include <stdlib.h>
// int* p_c=(int*)calloc(N,sizeof(int));
// free(p_c);
#if(1 == _DEBUG_)
//    printf("\nM1=%d M2=%d M3=%d m1=%d m2=%d r=%d", M1, M2, M3, m1, m2, r);
#endif

#define L   100000

#define l   3
#define Cm -1000
#define CM  1000
#define Mx(a,b) ((a)>(b)?(a):(b))
int solution(int A[],int N){
   int r=-1;
   if(l<=N){
      int M1=Cm,M2=Cm,M3=Cm,m1=CM,m2=CM;
      for(int i=0;i<N;i++){
         if(M1<A[i]){
            M3=M2;
            M2=M1;
            M1=A[i];
         }
         else if(M2<A[i]){
            M3=M2;
            M2=A[i];
         }
         else if(M3<A[i]){
            M3=A[i];
         }
         if(m1>A[i]){
            m2=m1;
            m1=A[i];
         }
         else if(m2>A[i]){
            m2=A[i];
         }
      }
      r=Mx(M1*M2*M3,M1*m1*m2);
   }
   return r;
}
