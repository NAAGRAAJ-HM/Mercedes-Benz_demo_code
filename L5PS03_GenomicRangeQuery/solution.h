#ifndef _SOLUTION_H
#define _SOLUTION_H

#define _DEBUG_ 1

struct Results {
   int * A;
   int M;
};

extern struct Results solution(
      char *S
   ,  int P[]
   ,  int Q[]
   ,  int M
);

#else
#endif
