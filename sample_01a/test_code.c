#include "test_code.h"

#define L   100000
#define Cm       1
#define CM 1000000

int solution(int A[],int N){
   int i,r=1;
   for(i=0;i<N-1;i++){
      for(int j=0;j<N-i-1;j++){
         if(A[j]>A[j+1]){
            int t=A[j];
            A[j]=A[j+1];
            A[j+1]=t;
         }
      }
   }
   for(i=0;i<N;i++){
           if(r<A[i])break;
      else if(r==A[i])r++;
//    else if(r>A[i]){}
   }
   return r;
}
