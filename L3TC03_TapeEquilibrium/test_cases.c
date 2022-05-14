#include "test_cases.h"

int tc_1[] = {3, 1, 2, 4, 3};
int tc_2[] = {-1000, 1000};

int *A[] = {
      tc_1
   ,  tc_2
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
   ,  sizeof(tc_2)/sizeof(int)
};

