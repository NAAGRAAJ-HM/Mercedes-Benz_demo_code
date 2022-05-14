#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define l      1
#define L 100000

#include <stdlib.h>
#include <stdbool.h>
int solution(int X,int A[],int N){
   bool* s=(bool*)calloc(X,sizeof(bool));
   for(int i=0;i<N;i++){
      if(false==s[A[i]-1]){
         s[A[i]-1]=true;
         X--;
         if(0==X)return i;
      }
   }
   free(s);
   return -1;
}
