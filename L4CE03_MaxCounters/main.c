#include "solution.h"
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
            N[tc_index]
         ,  A[tc_index]
         ,  M[tc_index]
      );
#if(1 == _DEBUG_)
      printf("\nTest case %d result: {", tc_index+1);
      for(
         int counter_index = 0;
             counter_index < result.L;
             counter_index ++
      ){
         printf(" %d", result.C[counter_index]);
      }
      printf("}");
      free(result.C);
#endif
   }
}
