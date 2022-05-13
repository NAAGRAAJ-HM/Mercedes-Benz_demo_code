#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define m          1
#define M 1000000000
#define p 0
#include <stdlib.h>

#define L 1000000
int solution(int A[],int N){
   int i,j,r=-1;
   if(N<=L){
      for(i=0;i<N;i++){
         for(j=i+1;j<N;j++){
            if(A[i]==A[j]){
               A[j]=A[i+1];
               i++;
               break;
            }
         }
         if(N==j){
            r=A[i];
            break;
         }
      }
   }
   return r;
}
