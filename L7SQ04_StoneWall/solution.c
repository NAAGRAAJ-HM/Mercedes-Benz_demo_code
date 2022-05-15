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

int solution(int H[],int N){
   int r=0;
   int current_wall_height = 0;
   typeStack* pS=stack_init(N);
   for(int i=0;i<N;i++){
      if(current_wall_height<H[i]){
         stack_push(pS,H[i]-current_wall_height);
         current_wall_height=H[i];
         r++;
      }
      else if(current_wall_height>H[i]){
         while((0<stack_size(pS))&&(current_wall_height>H[i])){
            current_wall_height-=stack_pop(pS);
         }
         if(current_wall_height<H[i]){
            stack_push(pS,H[i]-current_wall_height);
            current_wall_height=H[i];
            r++;
         }
      }
   }
   stack_deinit(pS);
   return r;
}
