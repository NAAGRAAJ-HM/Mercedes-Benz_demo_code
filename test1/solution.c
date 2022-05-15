#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif

#include <stdio.h>
int solution(char *S) {
   int c=0, i=0;
   int V = 0;
   int c1=0;
   while('\0'!=S[i]){
       int bit = S[i]&0x01;
      V = (V<<1)|bit;
      if(bit){
          c1++;
          if(400000<c1){
              return 799999;
          }
      }
      else{
          c1=0;
      }
      i++;
   }
   while(0!=V){
      if(0==(V&0x01)){
         V=V>>1;
      }
      else{
         V=V-1;
      }
      c++;
   }
   return c;
}
