#include "solution.h"
//#include <stdlib.h>

#define L    1000000
#define p          0
#define Cm          1
#define CM 1000000000


int solution(int A[],int N){
   int r=0;
   for(int i=0;i<N;i++)r^=A[i];
   return r;
}
