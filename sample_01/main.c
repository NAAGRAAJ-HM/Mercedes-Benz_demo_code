#include <stdio.h>
#include "test_code.h"

#define NUMBER_OF_TEST_CASES 4

int tc_1[] = {1, 3, 6, 4, 1, 2};
int tc_2[] = {3, 2, 1};
int tc_3[] = {-6, -1, -3};
int tc_4[] = {1, 2, 3, 3, 4, 4, 4};


int *A[] = {
      tc_1
   ,  tc_2
   ,  tc_3
   ,  tc_4
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
   ,  sizeof(tc_2)/sizeof(int)
   ,  sizeof(tc_3)/sizeof(int)
   ,  sizeof(tc_4)/sizeof(int)
};

int main(void){
   for(
      int tc_index = 0;
          tc_index < NUMBER_OF_TEST_CASES;
          tc_index ++
   ){
      int tc_result = test_code(
            A[tc_index]
         ,  N[tc_index]
      );
      printf("\ntc_result[%d] = %d", tc_index, tc_result);
   }
}