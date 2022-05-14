#include "test_cases.h"

int tc_1[] = {3, 4, 4, 6, 1, 4, 4};
int tc_2[] = {1, 1, 1, 1, 1, 1, 1, 1, 11, 1};
int tc_3[] = {1, 1, 1, 1, 1, 1, 1, 1, 11, 11, 11, 11, 11, 11};

int N[NUMBER_OF_TEST_CASES] = {
      5
   , 10
   , 10
};

int *A[] = {
      tc_1
   ,  tc_2
   ,  tc_3
};

int M[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
   ,  sizeof(tc_2)/sizeof(int)
   ,  sizeof(tc_3)/sizeof(int)
};

