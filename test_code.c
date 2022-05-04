#include "test_code.h"

#if(1 == _DEBUG_)
#include <stdio.h>
#endif

static void sort(
      int A[]
   ,  int N
){
#if(1 == _DEBUG_)
   printf("\n\nBefore:");
   for(
      int i = 0;
          i < N;
          i ++
   ){
      printf(" %d", A[i]);
   }
#endif
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
#if(1 == _DEBUG_)
   printf("\nAfter:");
   for(
      int i = 0;
          i < N;
          i ++
   ){
      printf(" %d", A[i]);
   }
#endif
}

int find_least_missing_number(
      int A[]
   ,  int N
){
   int result = 1;
   for(
      int index = 0;
          index < N;
          index ++
   ){
      if(
            result
         <  A[index]
      ){
         break;
      }
      else if(
            result
         == A[index]
      ){
         result++;
      }
      else if(
            result
         >  A[index]
      ){
      }
   }

   return result;
}

int test_code(
      int A[]
   ,  int N
){
   sort(
         A
      ,  N
   );

   return find_least_missing_number(
         A
      ,  N
   );
}
