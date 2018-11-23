#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int count=0;
	getline(cin,s);
	for(int i=0 ;i<s.length();i++){
		if(s[i]=='4'||s[i]=='7')count++;
	}
	if(count==4 || count==7)printf("YES\n");
	else printf("NO\n");
	return 0;
}