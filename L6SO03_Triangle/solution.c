#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define L   100000
#define l   0
#define Cm -2147483648
#define CM  2147483647
#define Lth 3
#define Cth 0

#include <stdlib.h>
int cmpfunc(const void* a, const void* b){return((long)*(int*)a-(long)*(int*)b);}
int solution(int A[],int N){
   int i;
   if(3<=N){
      qsort(&A[0],N,sizeof(int),cmpfunc);
      for(i=0;i<N-2;i++)if(0<A[i])break;
      for(;i<N-2;i++)if((A[i]!=-2147483648)&&(A[i+1]!=-2147483648)&&(A[i+2]!=-2147483648)&&(((long)A[i]+(long)A[i+1])>(long)A[i+2]))return 1;
   }
   return 0;
}
