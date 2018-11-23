#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,count,idx;
	scanf("%lld",&n);
	long long int a[n+1];
	for(int i = 1 ; i <= n ; i++){
		scanf("%lld",&a[i]);
		count=a[i]-i;
		a[i]-=n;
		if(count<0){idx=i;break;}
	}
	while(true){
			if(count<0)break;
			for(int i = 1 ; i <= n ; i++){
				count=a[i]-i;
				a[i]-=n;
				if(count<0){idx=i;break;}
			}
	}
	printf("%lld",idx);
	return 0;
}