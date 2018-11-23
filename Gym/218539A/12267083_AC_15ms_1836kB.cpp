#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int x,t,result;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&x);
		result=x%1000000007;
		if(result<=0)printf("%d\n",1);
		else printf("%lld\n",result);
		
	}
	return 0;
}