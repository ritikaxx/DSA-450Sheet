#include<iostream>
using namespace std;

int main(){
    char str[1000];
    cin >>str;

    int left=0;
    int right=str.size()-1;

    while(left<right){
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
    }
    cout<<str<<endl;
}