#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,x,n,m,count=0;
	scanf("%lld ",&t);
	long long int check[2008];
	for(long long int i = 1 ; i <= t ; i++ ){
		scanf("%lld %lld",&x,&n);
		count=0;
		for(int i=0;i<2008;i++)check[i]=0;
		for(long long int i = 0 ; i < n ; i++){
			scanf("%lld ",&m);
			if(x-m>=0)count+=check[x-m];
			//printf("%lld %lld %lld %lld \n",check[x-m],check[m],x-m,count);
			check[m]++;
		}
		printf("%lld. %lld\n",i,count);
		
	}
	return 0;
}