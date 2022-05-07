#include "test_cases.h"

int X[NUMBER_OF_TEST_CASES] = {
      5
   ,  5
   ,  1
   ,  5
   ,  5
};

int tc_1[] = {1, 3, 1, 4, 2, 3, 5, 4};
int tc_2[] = {1};
int tc_3[] = {1};
int tc_4[] = {1, 3, 1, 4, 2, 3, 2, 4};
int tc_5[] = {1, 1, 1, 1, 1, 1, 1, 1};

int *A[] = {
      tc_1
   ,  tc_2
   ,  tc_3
   ,  tc_4
   ,  tc_5
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
};

