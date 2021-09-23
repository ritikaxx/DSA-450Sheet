#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        return "1";
    }
    if(n==2){
        return "11";
    }
    int c=1;
    for(int i=3;i<n;i++){
        s=s+"&";
        string t="";
        for(int j=1;j<s.length();j++){
            if(s[j]!=s[j-1]){
                t=t+tostring(c);
                t=t+s[j-1];
                c=1;
            }
            else{
                c++;
            }
        }
        s=t;
    }
    return s;
}