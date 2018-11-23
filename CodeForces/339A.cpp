#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int a[100];
	int sz=0;
	for(int i = 0 ; i < s.length() ;i++){
		if(s[i]!='+')a[sz++]=s[i]-'0';
	}
	sort(a,a+sz);
	for(int i = 0; i < sz-1 ; i++){
		cout<<a[i]<<"+";
	}
	cout<<a[sz-1];
}