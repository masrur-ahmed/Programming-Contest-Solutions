#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a=n,count=0;
		while(a!=0){
			k=a%10;
			if(k!=0 && n%k==0)count++;
			a/=10;
		}
		printf("%d\n",count);
	}
	return 0;
}