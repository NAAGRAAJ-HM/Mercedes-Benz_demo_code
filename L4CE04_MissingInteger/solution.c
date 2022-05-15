#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define L   1000000
#define p         0
#define Cm -1000000
#define CM  1000000

#include <stdlib.h>
int solution(int A[],int N){
   int i,M=1;
   for(i=0;i<N;i++)if(M<A[i])M=A[i];
   int* p_c=(int*)calloc(M+1,sizeof(int));
   for(i=0;i<N;i++)if(A[i]>0)p_c[A[i]-1]++;
   for(i=0;i<M+1;i++)if(0==p_c[i])break;
   free(p_c);
   return i+1;
}
