#include "solution.h"

struct rs r;
int r_A[100];
struct rs solution(int A[],int N,int K){
   for(int i=0;i<N;i++){
      r_A[(i+K)%N] = A[i];
   }
   r.A = r_A;
   r.N = N;
   return r;
}
