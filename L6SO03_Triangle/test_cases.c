#include "test_cases.h"

long tc_01[] = {10, 2, 5, 1, 8, 20};
long tc_02[] = {10, 50, 5, 1};
long tc_03[] = {-10, -3, -5, -6, -20};
long tc_04[] = {1, -4, 3, -6, 7, 0};
long tc_05[] = {1, 2};
long tc_06[] = {1000,  999,  998, -997, -996};
long tc_07[] = {1000, -999, -998,  997,  996};
long tc_08[] = {1000, -999,  998, -997,  996};
long tc_09[] = {1000,  999, -998,  997, -996};
long tc_10[] = {1000,  999, -998, -997,  996};
long tc_11[] = {-3, 1, 2, -2, 5, 6};
long tc_12[] = {10, 3, 5, 6, 20};

long *A[] = {
      tc_01
   ,  tc_02
   ,  tc_03
   ,  tc_04
   ,  tc_05
   ,  tc_06
   ,  tc_07
   ,  tc_08
   ,  tc_09
   ,  tc_10
   ,  tc_11
   ,  tc_12
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_01)/sizeof(long)
   ,  sizeof(tc_02)/sizeof(long)
   ,  sizeof(tc_03)/sizeof(long)
   ,  sizeof(tc_04)/sizeof(long)
   ,  sizeof(tc_05)/sizeof(long)
   ,  sizeof(tc_06)/sizeof(long)
   ,  sizeof(tc_07)/sizeof(long)
   ,  sizeof(tc_08)/sizeof(long)
   ,  sizeof(tc_09)/sizeof(long)
   ,  sizeof(tc_10)/sizeof(long)
   ,  sizeof(tc_11)/sizeof(long)
   ,  sizeof(tc_12)/sizeof(long)
};
