#include "test_cases.h"

int tc_1[] = {9, 3, 9, 3, 9, 7, 9};
int tc_2[] = {7, 3, 9, 3, 9, 9, 9};
int tc_3[] = {9, 7, 9, 3, 9, 3, 9};
int tc_4[] = {9, 3, 7, 3, 9, 9, 9};
int tc_5[] = {9, 3, 9, 7, 9, 3, 9};
int tc_6[] = {9, 3, 9, 3, 7, 9, 9};
int tc_7[] = {9, 3, 9, 3, 9, 9, 7};
int tc_8[] = {42};
int tc_9[] = {42, 3, 42, 3, 9, 9, 42};

int *A[] = {
      tc_1
   ,  tc_2
   ,  tc_3
   ,  tc_4
   ,  tc_5
   ,  tc_6
   ,  tc_7
   ,  tc_8
   ,  tc_9
};

int N[NUMBER_OF_TEST_CASES] = {
      sizeof(tc_1)/sizeof(int)
   ,  sizeof(tc_2)/sizeof(int)
   ,  sizeof(tc_3)/sizeof(int)
   ,  sizeof(tc_4)/sizeof(int)
   ,  sizeof(tc_5)/sizeof(int)
   ,  sizeof(tc_6)/sizeof(int)
   ,  sizeof(tc_7)/sizeof(int)
   ,  sizeof(tc_8)/sizeof(int)
   ,  sizeof(tc_9)/sizeof(int)
};

