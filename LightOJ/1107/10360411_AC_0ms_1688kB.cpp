#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,cas=1;
	scanf("%d",&t);
	while(t--){
	int x,y,a,b,t1,c,d;
	scanf("%d %d %d %d",&x,&y,&a,&b);
	scanf("%d",&t1);
	printf("Case %d:\n",cas++);
	while(t1--){
		scanf("%d %d",&c,&d);
 
		if(x<c && a>c && d>y && b>d){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
 
	}
 
 
	}
	return 0;
}