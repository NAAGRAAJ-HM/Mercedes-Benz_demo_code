#include "test_cases.h"

int tc_1[] = {3, 8, 9, 7, 6};
int tc_2[] = {0, 0, 0};
int tc_3[] = {1, 2, 3, 4};


int *A[] = {
      tc_1
   ,  tc_2
   ,  tc_3
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
   ,  sizeof(tc_2)/sizeof(int)
   ,  sizeof(tc_3)/sizeof(int)
};

int K[NUMBER_OF_TEST_CASES] = {
      3
   ,  1
   ,  4
};
