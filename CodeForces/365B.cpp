#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,res=0,count=0;
	scanf("%lld",&n);
	long long int a[n];
	for(int i=0 ; i<n ; i++){
		scanf("%lld",&a[i]);
		if(i<=1)count++;
		else if(a[i]==a[i-1]+a[i-2]){
			count++;
			res=max(count,res);
		}
		else count=2;
		res=max(count,res);
		//printf("%d\n",count);
	}
	printf("%lld",res);
	return 0;
}