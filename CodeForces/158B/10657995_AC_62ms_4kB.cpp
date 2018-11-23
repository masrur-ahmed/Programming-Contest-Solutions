#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,sum=0,ans,x;
	scanf("%d",&t);
	int one=0,three=0;
	for(int i=0 ;i<t;i++){
		scanf("%d",&x);
		sum+=x;
		if(x==1)one++;
		else if(x==3)three++;
	}
	if(three>one)ans=(sum-3*(three-one)+3)/4+(three-one);
	else ans=(sum+3)/4;
	printf("%d\n",ans);
}