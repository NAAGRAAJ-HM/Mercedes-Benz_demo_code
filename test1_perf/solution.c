#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif
#include <stdio.h>

int solution(char *S) {
   int i=0,leading=1,c0=0,c1=0,c1s=0,V=0;
   while('\0'!=S[i]){
      int bit=S[i]&0x01;
      V=(V<<1)|bit;
      if(bit){
          c1s++;
          if(400000<c1s)return 799999;
          c1++;
          leading=0;
      }
      else{
          if(0==leading)c0++;
          c1s=0;
      }
      i++;
   }
   return ((c1*2)+c0-1);
}
