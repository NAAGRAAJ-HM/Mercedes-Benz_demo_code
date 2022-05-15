#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif
//#include <string.h>
//#include <stdbool.h>

#include <stdlib.h>
#define UndefinedElement -1
typedef int typeStackElement;
typedef struct{
   typeStackElement* ptrBuffer;
   int               StackPointer;
   int               StackDepth;
}typeStack;
typeStack* stack_init(int RequestedDepth){
   typeStackElement* ptrBuffer = (typeStackElement*)calloc(
         RequestedDepth
      ,  sizeof(typeStackElement)
   );
   typeStack* ptrStack = (typeStack*)calloc(
         1
      ,  sizeof(typeStack)
   );
   ptrStack->StackPointer = 0;
   ptrStack->StackDepth   = RequestedDepth;
   ptrStack->ptrBuffer    = ptrBuffer;
   return ptrStack;
}
void stack_deinit(typeStack* ptrStack){
   free(ptrStack->ptrBuffer);
   free(ptrStack);
}
void stack_push(
      typeStack*       ptrStack
   ,  typeStackElement Element
){
   if(
         ptrStack->StackPointer
      <  ptrStack->StackDepth
   ){
      ptrStack->ptrBuffer[ptrStack->StackPointer++] = Element;
   }
}
typeStackElement stack_pop(typeStack* ptrStack){
   if(
         0
      <  ptrStack->StackPointer
   ){
      return ptrStack->ptrBuffer[--ptrStack->StackPointer];
   }
   return UndefinedElement;
}
int stack_size(typeStack* ptrStack){return ptrStack->StackPointer;}
#if(1 == _DEBUG_)
void stack_print(typeStack* ptrStack){
   printf("\nCurrent stack:");
   for(int i=0;i<ptrStack->StackPointer;i++){
      printf(" %d", ptrStack->ptrBuffer[i]); // Hint: take care of typeStackElement
   }
}
#endif

int solution(int A[],int B[],int N){
   int r=0;
   typeStack* pS=stack_init(N);
   for(int i=0;i<N;i++){
      if(0==B[i]){
         while(0<stack_size(pS)){
            int d=stack_pop(pS);
            if(d>A[i]){
               stack_push(pS,d);
               break;
            }
         }
         if(0==stack_size(pS))r++;
      }
      else stack_push(pS,A[i]);
   }
   r+=stack_size(pS);
   stack_deinit(pS);
   return r;
}
