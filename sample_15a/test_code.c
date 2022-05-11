#include "test_code.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define l        0
#define L   100000
#define m -1000000
#define M  1000000

#include <stdlib.h>
int solution(int A[],int N){
   int* p_d=(int*)calloc(N,sizeof(int));
   int d_c=1,i_d;
   p_d[0]=A[0];
   for(int i_n=1;i_n<N;i_n++){
      for(i_d=0;i_d<d_c;i_d++)if(p_d[i_d]==A[i_n])break;
      if(i_d==d_c)p_d[d_c++]=A[i_n];
   }
   free(p_d);
   return d_c;
}
