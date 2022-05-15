#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#define L   100000
#define l   0
#define Cm -2147483648
#define CM  2147483647
//#define mx(a,b) (((a)<(b))?(a):(b))
//#define mn(a,b) (((a)<(b))?(a):(b))

#include <stdlib.h>
#include <stdbool.h>
int solution(int A[],int N){
   if(0>=N)return -1;
   if(1==N)return 0;
   int* pA=(int*)calloc(N,sizeof(int));
   int* pC=(int*)calloc(N,sizeof(int));
   int i,j,cD=1,fi=0,fC=1,fA=A[0],r=-1;
   bool return_safe=false;
   pA[0]=A[0];
   pC[0]=1;
   for(i=1;i<N;i++){
      for(j=0;j<cD;j++){
         if(pA[j]==A[i]){
            pC[j]++;
            if(fC<pC[j]){
               fi=i;
               fC=pC[j];
               fA=pA[j];
               if(fC>N/2){
                  r=i;
                  return_safe=true;
               }
            }
            break;
         }
      }
      if(j==cD){
         pA[j]=A[i];
         pC[j]++;
         cD++;
      }
#if(1 == _DEBUG_)
      printf("\nA[%d]=%d cD=%d fi=%d fA=%d, fC=%d r=%d return_safe=%d pA[", i, A[i], cD, fi, fA, fC, r, return_safe);
      for(j=0;j<cD;j++){
         printf(" %d(%d)", pA[j], pC[j]);
      }
      printf("]");
#endif
      if(true==return_safe)break;
   }
   free(pC);
   free(pA);
   return r;
}
