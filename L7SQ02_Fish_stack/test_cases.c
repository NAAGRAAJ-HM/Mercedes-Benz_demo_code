#include "test_cases.h"

int tc_a_01[] = {4, 3, 2, 1, 5};
int tc_b_01[] = {0, 1, 0, 0, 0};

int tc_a_02[] = {4, 3, 2, 1, 5};
int tc_b_02[] = {1, 0, 1, 1, 1};

int tc_a_03[] = {4, 3, 2, 1, 5};
int tc_b_03[] = {0, 0, 0, 0, 1};

int tc_a_04[] = {4, 2, 1, 3};
int tc_b_04[] = {1, 0, 1, 0};

int* A[] = {
      tc_a_01
   ,  tc_a_02
   ,  tc_a_03
   ,  tc_a_04
};

int* B[] = {
      tc_b_01
   ,  tc_b_02
   ,  tc_b_03
   ,  tc_b_04
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_a_01)/sizeof(int)
   ,  sizeof(tc_a_02)/sizeof(int)
   ,  sizeof(tc_a_03)/sizeof(int)
   ,  sizeof(tc_a_04)/sizeof(int)
};
