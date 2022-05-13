#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define L 1000000
//#define p 0
#define m 1
#define M 1000000

#define R 1000000000
#include <stdlib.h>
int solution(int A[],int N){
   int r=0,i,t;
   int* ps=(int*)calloc(N,sizeof(int));
   ps[N-1]=A[N-1];
   for(i=N-2;i>=0;i--){
      ps[i]=ps[i+1]+A[i];
      if(0==A[i]){
         t=r+ps[i];
         if(R<t){
            r=-1;
            break;
         }
         else{
            r=t;
         }
      }
   }
   free(ps);
   return r;
}
