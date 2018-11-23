#include <bits//stdc++.h>
using namespace std;

int main() {
	long long ans=0;
	int t,n,can,x;
	scanf("%d",&t);
	for(int i = 0 ; i < t ;i++){
		scanf("%d %d",&n,&can);
		ans=0;
		for(int j=0 ; j < n ;j++){
			scanf("%d",&x);
			ans+=(x/can);
		}
		printf("%lld\n",ans);
	}
	return 0;
}