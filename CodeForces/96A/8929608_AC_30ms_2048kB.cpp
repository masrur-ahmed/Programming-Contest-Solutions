#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int x,no1=0,no0=0;
bool con=false;
getline(cin,s);
for(x=0 ;x<s.length();x++){
if(s[x]=='1'){
no1++;
no0=0;
}
else if(s[x]=='0'){
no0++;
no1=0;
}
if(no1==7 || no0==7){
con = true;
break;
}
}
 if(con == true){
 cout << "YES" << "\n";
 }
 else{
 cout << "NO" << "\n";
}
}