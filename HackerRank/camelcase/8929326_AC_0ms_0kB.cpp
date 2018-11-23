#include<bits/stdc++.h>
using namespace std;
int main(){
int count=1,i;
string s;
getline(cin,s);
for(i=0 ; i<s.length(); i++){
if(s[i]>=65 && s[i]<=90){
count++;
}
}
printf("%d\n",count);
}