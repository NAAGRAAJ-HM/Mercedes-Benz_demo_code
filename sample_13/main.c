#include "test_code.h"
#include "test_cases.h"

#if(1 == _DEBUG_)
#include <stdio.h>
#include <stdlib.h>
#endif

int main(void){
   for(
      int tc_index = 0;
          tc_index < NUMBER_OF_TEST_CASES;
          tc_index ++
   ){
      struct Results result = solution(
            S[tc_index]
         ,  P[tc_index]
         ,  Q[tc_index]
         ,  M[tc_index]
      );
#if(1 == _DEBUG_)
      printf("\nTest case %d result: [", tc_index+1);
      for(
         int q_index = 0;
             q_index < result.M;
             q_index ++
      ){
         printf(" %d", result.A[q_index]);
      }
      printf("]");
#endif
      free(result.A);
   }
}