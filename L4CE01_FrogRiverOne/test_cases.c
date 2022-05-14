#include "test_cases.h"

int X[NUMBER_OF_TEST_CASES] = {5, 5, 1, 5, 5, 60};

int tc_1[] = {1, 3, 1, 4, 2, 3, 5, 4};
int tc_2[] = {1};
int tc_3[] = {1};
int tc_4[] = {1, 3, 1, 4, 2, 3, 2, 4};
int tc_5[] = {1, 1, 1, 1, 1, 1, 1, 1};
int tc_6[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};

int *A[] = {
      tc_1
   ,  tc_2
   ,  tc_3
   ,  tc_4
   ,  tc_5
   ,  tc_6
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
   ,  sizeof(tc_2)/sizeof(int)
   ,  sizeof(tc_3)/sizeof(int)
   ,  sizeof(tc_4)/sizeof(int)
   ,  sizeof(tc_5)/sizeof(int)
   ,  sizeof(tc_6)/sizeof(int)
};

