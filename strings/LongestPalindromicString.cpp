class Solution {
  public:
     string longestPalin (string S) {
       
       string res ="";  
       int l,h;
       int start =0, top = 1;
       int length = S.length();
       for(int i=1; i<length;i++){

                
               l=i-1; h =i;
           while(l>=0 && h<length && S[l]==S[h]){
               if(h-l+1>top) {
                   start =l;
                   top = h-l+1;
               }
               l--;h++;
           }
      
             l=i-1; h =i+1;
           while(l>=0 && h<length && S[l]==S[h]){
               if(h-l+1>top) {
                   start =l;
                   top = h-l+1;
               }
               l--;h++;
           }
           
           
       }
 
       while(top--){
           res += S[start];
           start++;
       }
       return res;
     
   }
};