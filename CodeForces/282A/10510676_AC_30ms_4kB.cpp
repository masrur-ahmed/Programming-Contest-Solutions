#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x=0;
	string s;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		if(s[0]=='+' || s[2]=='+' )x++;
		else x--;
	}
	printf("%d\n",x);
	return 0;
}