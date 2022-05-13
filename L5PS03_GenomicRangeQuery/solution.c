#include "solution.h"
#if(1 == _DEBUG_)
#include <stdio.h>
#endif


#include <stdlib.h>
#include <string.h>
#define mi(a,b) (a<b?a:b)
int gf(char a){
   switch(a){
      case 'A': return 1;
      case 'C': return 2;
      case 'G': return 3;
      case 'T': return 4;
      default: return 99;
   }
}
void bs(int *s,char *a,int n){
   int i;
   for(i=0;i<n;i++)s[n+i]=gf(a[i]);
   for(i=n-1;i>=1;i--)s[i]=mi(s[2*i],s[2*i+1]);
}
int rq(int *s,int l,int r,int n){
   l+=n;
   r+=n;
   int m=gf('Z');
   while(l<r){
      if(l&1){
         m=mi(m,s[l]);
         l++;
      }
      if(r&1){
         r--;
         m=mi(m,s[r]);
      }
      l/=2;
      r/=2;
   }
   return m;
}
struct Results solution(char *S,int P[],int Q[],int M){
   int n=strlen(S);
   int* s=(int*)calloc(2*n,sizeof(int));
   bs(s,S,n);
   struct Results r={(int*)calloc(M,sizeof(int)),M};
   for(int q=0;q<M;q++)r.A[q]=rq(s,P[q],Q[q]+1,n);
   return r;
}
