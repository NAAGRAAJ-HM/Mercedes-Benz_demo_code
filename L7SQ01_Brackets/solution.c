#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#include <stdlib.h>
#define UndefinedElement '\0'
typedef char typeStackElement;
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
      printf(" %c", ptrStack->ptrBuffer[i]); // Hint: take care of typeStackElement
   }
}
#endif

#include <string.h>
#include <stdbool.h>
int solution(char *S){
   int i,l=strlen(S);
   bool fail_safe=false;
   typeStack* pS=stack_init(l);
   for(i=0;i<l;i++){
      if('{'==S[i]||'['==S[i]||'('==S[i])stack_push(pS,S[i]);
      else{
         switch(S[i]){
            case '}': if('{' != stack_pop(pS)){fail_safe=true;} break;
            case ']': if('[' != stack_pop(pS)){fail_safe=true;} break;
            case ')': if('(' != stack_pop(pS)){fail_safe=true;} break;
            default: break;
         }
      }
      if(true==fail_safe)break;
   }
   int r=((true==fail_safe)||(0!=stack_size(pS)))?0:1;
   stack_deinit(pS);
   return r;
}
