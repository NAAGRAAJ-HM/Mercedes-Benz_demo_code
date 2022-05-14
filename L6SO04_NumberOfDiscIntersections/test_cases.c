#include "test_cases.h"

int tc_01[] = {1, 5, 2, 1, 4, 0};
int tc_02[] = {0};

/*
int tc_03[] = {2147483647, 2147483647, 2147483647};
int tc_04[] = {2147483645, 2147483646, 2147483647};
int tc_05[] = {10, -2147483648, -2147483648};
int tc_06[] = {2147483648,  999,         998,        -2147483648, -996};
int tc_07[] = {2147483648, -2147483648, -998,         997,         996};
int tc_08[] = {2147483648, -2147483648,  998,        -997,         996};
int tc_09[] = {2147483648,  999,        -2147483648,  997,        -996};
int tc_10[] = {2147483648,  999,        -2147483648, -997,         996};
int tc_11[] = {-3, 1, 2, -2, 5, 6};
int tc_12[] = {10, 3, 5, 6, 20};
int tc_13[] = {-10, -3, -5, -6, -20};
int tc_14[] = {1, -4, 3, -6, 7, 0};
int tc_15[] = {1, 2};
*/

int *A[] = {
      tc_01
   ,  tc_02
/*
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
   ,  tc_13
   ,  tc_14
   ,  tc_15
*/
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_01)/sizeof(int)
   ,  0 //sizeof(tc_02)/sizeof(int)
/*
   ,  sizeof(tc_03)/sizeof(int)
   ,  sizeof(tc_04)/sizeof(int)
   ,  sizeof(tc_05)/sizeof(int)
   ,  sizeof(tc_06)/sizeof(int)
   ,  sizeof(tc_07)/sizeof(int)
   ,  sizeof(tc_08)/sizeof(int)
   ,  sizeof(tc_09)/sizeof(int)
   ,  sizeof(tc_10)/sizeof(int)
   ,  sizeof(tc_11)/sizeof(int)
   ,  sizeof(tc_12)/sizeof(int)
   ,  sizeof(tc_13)/sizeof(int)
   ,  sizeof(tc_14)/sizeof(int)
   ,  sizeof(tc_15)/sizeof(int)
*/
};
