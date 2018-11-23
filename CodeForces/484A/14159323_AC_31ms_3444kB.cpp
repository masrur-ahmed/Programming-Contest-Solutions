#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t,l,r,ans=INT_MAX;
	scanf("%lld",&t);
	for(int i=0 ; i < t ; i++){
		scanf("%lld %lld",&l,&r);
		for(long long int i=l;i<=r;i+=(~i&-~i))ans=(ans, i);
		printf("%lld\n",ans);
	}
}
