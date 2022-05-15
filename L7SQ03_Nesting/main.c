#include "solution.h"
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
      int result = solution(S[tc_index]);
#if(1 == _DEBUG_)
      printf("\nTest case %d result: %d", tc_index+1, result);
#endif
   }
#if(1 == _DEBUG_)
   printf("\n");
#endif
}
