#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(__gcd(i,n-1)==1)ans++;
	}
	printf("%lld",ans);
	return 0;
}