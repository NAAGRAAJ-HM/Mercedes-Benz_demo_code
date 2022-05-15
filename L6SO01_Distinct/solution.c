#include "solution.h"

#define l    0
#define L    1000000

#include <stdlib.h>
#define Cm -1000000
#define CM  1000000
int solution(int A[],int N){
   int i,m=CM,M=Cm,r=0;
   for(i=0;i<N;i++){
      if(m>A[i])m=A[i];
      if(M<A[i])M=A[i];
   }
   int* p_c=(int*)calloc(M-m+1,sizeof(int));
   for(i=0;i<N;i++){
      if(0==p_c[A[i]-m]){
         p_c[A[i]-m]++;
         r++;
      }
   }
   free(p_c);
   return r;
}
