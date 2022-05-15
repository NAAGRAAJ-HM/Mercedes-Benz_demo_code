#include "test_cases.h"

int tc_01[] = {-3, 1, 2, -2, 5, 6};
int tc_02[] = {10, 3, 5, 6, 20};
int tc_03[] = {-10, -3, -5, -6, -20};
int tc_04[] = {1, -4, 3, -6, 7, 0};
int tc_05[] = {1, 2};
int tc_06[] = {1000,  999,  998, -997, -996};
int tc_07[] = {1000, -999, -998,  997,  996};
int tc_08[] = {1000, -999,  998, -997,  996};
int tc_09[] = {1000,  999, -998,  997, -996};
int tc_10[] = {1000,  999, -998, -997,  996};

int *A[] = {
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
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_01)/sizeof(int)
   ,  sizeof(tc_02)/sizeof(int)
   ,  sizeof(tc_03)/sizeof(int)
   ,  sizeof(tc_04)/sizeof(int)
   ,  sizeof(tc_05)/sizeof(int)
   ,  sizeof(tc_06)/sizeof(int)
   ,  sizeof(tc_07)/sizeof(int)
   ,  sizeof(tc_08)/sizeof(int)
   ,  sizeof(tc_09)/sizeof(int)
   ,  sizeof(tc_10)/sizeof(int)
};
