#include "test_code.h"

int solution(
       int A[]
    ,  int N
) {
   for(
      int i = 0;
          i < N - 1;
          i ++
   ){
      for(
         int j = 0;
             j < N - i - 1;
             j ++
      ){
         if(
               A[j]
            >  A[j+1]
         ){
            int temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
         }
      }
   }

   int result = 1;
   for(
      int i = 0;
          i < N;
          i ++
   ){
      if(
            result
         <  A[i]
      ){
         break;
      }
      else if(
            result
         == A[i]
      ){
         result++;
      }
      else if(
            result
         >  A[i]
      ){
      }
   }

   return result;
}
