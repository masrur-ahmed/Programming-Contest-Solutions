#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,temp="",s1="";
	int sz,k,l,cnt=0;
	cin>>sz>>k>>s;
	s1+=s;
	if(s[0]==s[sz-1] && sz!=1) s.erase (0,1); 
	for(int i = 0 ; i < k-1 ; i++)s1+=s;
	cout<<s1;
	return 0;
	
}