#include "test_code.h"
#include "test_cases.h"

#if(1 == _DEBUG_)
#include <stdio.h>
#endif

int main(void){
   for(
      int tc_index = 0;
          tc_index < NUMBER_OF_TEST_CASES;
          tc_index ++
   ){
#if(1 == _DEBUG_)
      printf("\n\nBefore CyclicRotation:");
      for(
         int i = 0;
             i < N[tc_index];
             i ++
      ){
         printf(" %d", A[tc_index][i]);
      }
#endif

      struct Results result = solution(
            A[tc_index]
         ,  N[tc_index]
         ,  K[tc_index]
      );

#if(1 == _DEBUG_)
      printf("\nAfter CyclicRotation:");
      for(
         int i = 0;
             i < result.N;
             i ++
      ){
         printf(" %d", result.A[i]);
      }
#endif
   }
}