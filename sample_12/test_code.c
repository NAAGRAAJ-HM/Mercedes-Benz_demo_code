#include "test_code.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#include <stdlib.h>
#endif

#define m 0
#define M 2000000000
#define d 1
#define D 2000000000

int solution(int A,int B,int K){
   int i,r=0;
   for(i=A;i<=B;i++){
      if(0==i%K){
         r++;
         break;
      }
   }
   r+=(B-i)/K;
   return r;
}
