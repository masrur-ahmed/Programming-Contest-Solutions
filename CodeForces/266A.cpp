#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int count=0,x;
	
	cin>>x>>s;
	
	char c;
	c=s[0];
	for(int i = 1; i < s.length() ; i++ ){
		if(s[i]==c)count++;
		else c=s[i];
	}
	cout<<count;
}