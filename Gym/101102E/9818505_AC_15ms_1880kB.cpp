#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x,y,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&x);
		if(x%5!=0){
			printf("%lld\n",(x/5)+1);
		}
		else{
			printf("%lld\n",x/5);
		}
	}
	return 0;
}