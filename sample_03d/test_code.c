#include "test_code.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define L    1000000
#define m          1
#define M 1000000000
#define p          0


#include <stdlib.h>
typedef struct{
   int v;
   int c;
}d;
int solution(int A[],int N){
   d* p_d=(d*)calloc(N/2+1,sizeof(d));
   int cc,i,r;
   p_d[0].v=A[0];
   p_d[0].c=1;
   cc=1;
   for(int n=1;n<N;n++){
      for(i=0;i<cc;i++){
         if(A[n]==p_d[i].v){
            p_d[i].c++;
            break;
         }
      }
      if(i==cc){
         p_d[cc].v=A[n];
         p_d[cc].c=1;
         cc++;
      }
#if(1 == _DEBUG_)
      printf("\n[n=%d]:",n);
      for(i=0;i<cc;i++){
         printf(" %d(%d)", p_d[i].v, p_d[i].c);
      }
#endif
   }
   for(i=0;i<cc;i++){
      if(1==p_d[i].c){
         r=p_d[i].v;
         break;
      }
   }
   free(p_d);
   return r;
}
