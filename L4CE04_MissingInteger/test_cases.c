#include "test_cases.h"

int tc_1[] = {1, 3, 6, 4, 1, 2};
int tc_2[] = {1, 2, 3};
int tc_3[] = {-1, -3};
int tc_4[] = {2, 3, 1, 5};

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

