#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define l       1
#define L 1000000
#define m       1
#define M 1000000

#define u -1
#include <stdlib.h>
int solution(int X,int A[],int N){
   int* D=(int*)calloc(X,sizeof(int));
   int t;
   for(t=0;t<X;t++)D[t]=u;
   for(t=0;t<N;t++){
      D[A[t]-1]=t;
      int d;
      for(d=0;d<X;d++)if(u==D[d])break;
      if(X==d)break;
   }
   free(D);
   if(N==t) return -1;
   else     return  t;
}
