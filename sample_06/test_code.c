#include "test_code.h"

#define l          2
#define L    1000000
#define p        l-1
#define P        L-1

#define m -1000
#define M  1000
#include <stdlib.h>
int solution(int A[],int N){
   int i,s;
   int c=0,r=M-m;
   for(i=0;i<N;i++)c+=A[i];
   s=c;
   for(i=N-1;i>0;i--){
      c-=A[i];
      int t=abs(s-2*c);
      if(t<r)r=t;
   }
   return r;
}
