#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	
	cin>>s;
	regex h(".h.*e.*l.*l.*o");
	if(regex_match(s,h))cout<<"YES";
	else cout<<"NO";
}