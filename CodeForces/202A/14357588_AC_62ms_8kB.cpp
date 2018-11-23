#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	cout<<s[s.size()-1];
	for(int i = s.size()-2 ; i>=0 ; i--){
		if(s[i]!=s[i+1])break;
		cout<<s[i];
	}
	return 0;
}