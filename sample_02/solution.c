#include "solution.h"

struct Results result;
int result_A[100];

struct Results solution(
      int A[]
   ,  int N
   ,  int K
){
   for(
      int i = 0;
          i < N;
          i ++
   ){
      result_A[(i+K)%N] = A[i];
   }

   result.A = result_A;
   result.N = N;

   return result;
}
