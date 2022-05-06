#include "test_code.h"

#define L    1000000
#define m          1
#define M        L+1
#define p          0

#include <stdlib.h>
int solution(
      int A[]
   ,  int N
){
   int* p_c = (int*)calloc(N+1, sizeof(int));
   int i;
   for(
      i = 0;
      i < N;
      i ++
   ){
      p_c[A[i]]++;
   }
   for(
      i = 1;
      i < N+1;
      i ++
   ){
      if(0 == p_c[i]){
         break;
      }
   }
   free(p_c);
   return i;
}
