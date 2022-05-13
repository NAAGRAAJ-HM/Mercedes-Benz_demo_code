#include "solution.h"

#define L    1000000
#define m          1
#define M 1000000000

#define p 0
#include <stdlib.h>
typedef struct{
   int a;
   int c;
}t_D;
int solution(int A[],int N){
   t_D* D=(t_D*)calloc(N,sizeof(t_D));
   int i;
   for(i=0;i<N;i++)
      for(int j=0;j<N;j++){
         if(p==D[j].a){
            D[j].a=A[i];
            D[j].c=1;
            break;
         }
         else if(A[i]==D[j].a){
            D[j].c++;
            break;
         }
      }

   for(i=0;i<N;i++)if(1==D[i].c)break;
   free(D);
   return D[i].a;
}
