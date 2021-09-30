class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       int count=0;
       for(int i=0;i<str.size();i++){
           next_palindrome(str.begin(),str.end());
           count++;
       }
       return count;
    }
     
};