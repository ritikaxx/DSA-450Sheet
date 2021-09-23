#include<iostream>
using namespace std;

int main(){
    map<char,int> count;
    string s;
    cin>>s;
    for(int i=0;i<s.length()-1;i++){
        count[s[i]]++;
    }
    for(auto it:count){
    if(it.second()>1){
        cout<<it.first<<","<<it.second()<<"/n";
    }
    }
}