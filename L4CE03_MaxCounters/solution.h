#ifndef _SOLUTION_H
#define _SOLUTION_H

#define _DEBUG_ 1

struct Results{
   int* C;
   int  L;
};

extern struct Results solution(
      int N
   ,  int A[]
   ,  int M
);

#else
#endif
