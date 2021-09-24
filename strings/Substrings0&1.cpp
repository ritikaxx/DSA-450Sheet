int MaxSubstr(string s,int n){
    int count0=0;
    int count1=0;

    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
        else(s[i]=='1'){
            count1++;
        }

        if(count0==count1){
            c++;
        }       
    }
    if(c==0){
        return -1;
    }
    return c;
}