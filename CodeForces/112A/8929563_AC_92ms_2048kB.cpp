#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	string s,s1;
	cin>>s>>s1;
	for(n= 0; n< s.length() ; n++){
		s[n] = toupper(s[n]);
		s1[n] = toupper(s1[n]);
	}
	if(s<s1){
		cout<<-1;
		}
	else if(s>s1){
		cout<<1;
		}
	else{
		cout<<0;
		}
	return 0;
}