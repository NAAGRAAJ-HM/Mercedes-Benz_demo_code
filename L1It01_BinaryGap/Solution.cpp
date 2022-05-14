int Solution(int N){
   int r=0,c_z=0,m=1;
   bool e_c=0;
   for(
      int i=0;i<32;i++){
      if(N&m){
         if(c_z>r)r=c_z;
         c_z=0;
         e_c=1;
      }
      else if(e_c)c_z++;
      m=m<<1;
   }
   return r;
}

