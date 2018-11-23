#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int  B,M,P,ans;
	while(scanf("%lld %lld %lld ",&B,&P,&M)==3){
		ans=1;
		while(P>0){
			if(P%2){
			ans=(ans*B)%M;
			}
			B=(B*B)%M;
			P=P/2;
			}
		printf("%lld\n",ans);
	}
	return 0;
}
