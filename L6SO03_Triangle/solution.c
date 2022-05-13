#include "solution.h"
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
#define l   0

#define Cm -2147483648
#define CM  2147483648
#define Lth 3
#define Cth 0
int solution(long A[],int N){
   int r=-1;
   if(Lth<=N){
      long M1=Cth,M2=Cth,m1=CM;
      int La=0;
      for(int i=0;i<N;i++){
         if(Cth<A[i]){
            La++;
            if(M1<A[i]){
               M2=M1;
               M1=A[i];
            }
            else if(M2<A[i]){
               M2=A[i];
            }
            if(m1>A[i]){
               m1=A[i];
            }
         }
      }
      if(Lth<=La)r=((M1+M2)>m1)?1:0;
#if(1 == _DEBUG_)
      printf("\nM1=%ld M2=%ld m1=%ld La=%d r=%d", M1, M2, m1, La, r);
#endif
   }
   return r;
}
