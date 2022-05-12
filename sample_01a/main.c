#include <stdio.h>
#include "test_cases.h"
#include "test_code.h"

int main(void){
   for(
      int tc_index = 0;
          tc_index < NUMBER_OF_TEST_CASES;
          tc_index ++
   ){
      int tc_result = solution(
            A[tc_index]
         ,  N[tc_index]
      );
      printf("\ntc_result[%d] = %d", tc_index+1, tc_result);
   }
   printf("\n");
}
