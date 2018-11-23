#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int count=0;
	getline(cin,s);
	for(int i=0 ;i<s.length();i++){
		if((s[i]=='1')||( i>0 && s[i]=='4' && s[i-1]=='1' )||( s[i]=='4' && s[i-1]=='4'&&s[i-2]=='1'&&i>1))count++;
	}
	if(count==s.length())printf("YES\n");
	else printf("NO\n");
	return 0;
}