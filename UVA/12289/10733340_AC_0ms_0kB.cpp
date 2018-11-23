#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int t;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
		getline(cin,s);
		if(s.size()==5)printf("3\n");
		else if( (s[0]=='o' && s[1]=='n') || (s[1]=='n' && s[2]=='e') || (s[0]=='o' && s[2]=='e'))printf("1\n");
		else printf("2\n");
	}
	return 0;
}