#include "solution.h"

#define L    1000000
#define m          1
#define M 1000000000
#define p          0

int solution(
      int A[]
   ,  int N
){
   int* p_N = &A[N];
   for(
      int* p_i = &A[0];
           p_i < p_N-2;
           p_i ++
   ){
      int* p_j;
      for(
         p_j = p_i+1;
         p_j < p_N;
         p_j ++
      ){
         if(
               *p_i
            == *p_j
         ){
            int temp = *p_j;
            *p_j     = *(p_i+1);
            *(p_i+1) = temp;
            p_i++;
            break;
         }
      }

      if(
            p_j
         == p_N
      ){
         return *p_i;
      }
   }

   return *(p_N-1);
}
