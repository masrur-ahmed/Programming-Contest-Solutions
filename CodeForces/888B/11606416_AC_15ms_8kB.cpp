#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=0,y=0,u=0,v=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0 ;i<n ;i++){
		if(s[i]=='U')u++;
		else if(s[i]=='D')v++;
		else if(s[i]=='L')y++;
		else if(s[i]=='R')x++;
	}
	int res=min(u,v)+min(x,y);
	res*=2;
	printf("%d\n",res);
	return 0;
}