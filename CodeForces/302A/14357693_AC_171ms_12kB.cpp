#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,x,plus=0,minus=0,range,l,r;
	scanf("%d %d",&n,&m);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&x);
		if(x==1)plus++;
		else if(x==-1)minus++;
	}
	for(int i = 0 ; i < m ; i++){
		scanf("%d %d",&l,&r);
		range=r-l+1;
		if(range%2==0 &&  range/2<=plus && range/2<=minus )printf("1\n");
		else printf("0\n");
	}
	return 0;
}