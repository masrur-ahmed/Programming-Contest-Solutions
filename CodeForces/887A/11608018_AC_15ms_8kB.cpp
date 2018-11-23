#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int l=s.size(),z=0,c=0;
	for(int i=0 ;i<l;i++){
		if(s[i]=='0' && c)z++;
		if(s[i]=='1')c++;
	}
	if(z>=6)printf("yes");
	else printf("no");
	
	return 0;
}