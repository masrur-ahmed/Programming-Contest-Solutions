#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x,y;
	while(scanf("%lld %lld",&x,&y)==2){
	if(x>y){
		printf("%lld\n",x-y);
	}
	else{
		printf("%lld\n",y-x);
	}
	}
}
	

