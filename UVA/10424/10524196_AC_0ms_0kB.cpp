#include<bits/stdc++.h>
    using namespace std;
int main(){
    string s,s1;
    while(getline(cin,s)){
        getline(cin,s1);
        int sum=0,sum1=0,x;
        for(x=0 ; x<s.length() ;x++){
            s[x]=tolower(s[x]);
            if(s[x]>=92 && s[x]<=122){
                sum+=(int)s[x]-'a'+1;
            }
        }
        for(x=0 ; x<s1.length() ;x++){
            s1[x]=tolower(s1[x]);
            if(s1[x]>=92 && s1[x]<=122){
                sum1+=(int)s1[x]-'a'+1;
            }
        }
        if(sum1%9==0) {
            sum1=9;
        }
        else {
            sum1%=9;
        }
        if(sum%9==0) {
            sum=9;
        }
        else {
            sum%=9;
        }
        if(sum>=sum1) {
            printf("%.2f %c\n",sum1*100.0/sum,'%');
        }
        else {
            printf("%.2f %c\n",sum*100.0/sum1,'%');
        }
    }
    return 0;
}