#include "solution.h"
#define L   100000
#define CM 1000000

#include <stdlib.h>
#define Cm 1
int solution(int A[],int N){
   int i,M=Cm;
   for(i=0;i<N;i++)if(M<A[i])M=A[i];
   int* p_c=(int*)calloc(M,sizeof(int));
   for(i=0;i<N;i++)if(0<A[i])p_c[A[i]-1]++;
   for(i=0;i<M;i++)if(0==p_c[i])break;
   free(p_c);
   return i+1;
}

