#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i=0,c=0;
	scanf("%d",&t);
	char a;
	map<char,int>m;
	for(int i=0;i<t;i++){
		cin>>a;
		m[a]++;
		if(m[a]>1)c++;
	}
	
	if(t>26)printf("-1\n");
	else printf("%d\n",c);
	return 0;
}