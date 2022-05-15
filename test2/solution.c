#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif
#include <stdio.h>

#include <string.h>
int solution(char *S){
   int l=strlen(S);
   int r=-1;
   char digram1[3],digram2[3];
   digram1[2]='\0';
   digram2[2]='\0';
   for(int i=0;i<l;i++){
      digram1[0]=S[i];
      digram1[1]=S[i+1];
      for(int j=i+1;j<l;j++){
         digram2[0]=S[j];
         digram2[1]=S[j+1];
         if(0==strcmp(digram1,digram2)){
            int distance=j-i;
            if(r<distance){
               r=distance;
            }
         }
      }
   }
   return r;
}
