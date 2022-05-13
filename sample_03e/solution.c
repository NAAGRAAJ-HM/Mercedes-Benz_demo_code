#include "solution.h"

#define L    1000000
#define m          1
#define p          0

#include <stdlib.h>
#define M 1000000000
int solution(int A[],int N){
   int* p_c=(int*)calloc(M,sizeof(int));
   int i;
   for(i=0;i<N;i++){
      p_c[A[i]-1]++;
   }
   for(i=0;i<M;i++){
      if(1==p_c[i]){
         break;
      }
   }
   free(p_c);
   return i+1;
}
