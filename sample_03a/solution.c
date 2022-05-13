#include "solution.h"

#define L    1000000
#define m          1
#define M 1000000000
#define p          0

#include <stdlib.h>
int solution(
      int A[]
   ,  int N
){
   int* p_c = (int*)calloc(M+1, sizeof(int));
   int i;
   for(
      i = 0;
      i < N;
      i ++
   ){
      p_c[A[i]]++;
   }
   for(
      i = m;
      i < M+m;
      i ++
   ){
      if(1 == p_c[i]){
         break;
      }
   }
   free(p_c);
   return i;
}
