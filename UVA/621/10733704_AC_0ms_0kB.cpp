#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int t,cas=1;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
	getline(cin,s);
	int len=s.size();
	if( s[0]=='9' && s[len-1]=='4' )printf("*\n");
	else if(s[len-2]=='3' && s[len-1]=='5')printf("-\n");
	else if( (s[0]=='1' && len==1) || (s[0]=='4' && len==1) ||(s[0]=='7' && s[1]=='8' && len==2) )printf("+\n");
	else printf("?\n");
	}
	return 0;
}