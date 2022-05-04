#ifndef _TEST_CODE_H
#define _TEST_CODE_H

#define _DEBUG_              1
#define ELEMENT_MIN         -1000
#define ELEMENT_MAX          1000
#define ARRAY_MAX_LEN        100

struct Results{
  int* A;
  int  N;
};

extern struct Results solution(
      int A[]
   ,  int N
   ,  int K
);

#else
#endif