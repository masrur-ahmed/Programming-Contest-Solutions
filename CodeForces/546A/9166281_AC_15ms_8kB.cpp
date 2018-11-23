#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x,y,z,i,sum=0,temp;
	scanf("%lld %lld %lld",&x,&y,&z);
	for(i=1 ;i<=z;i++){
		temp=i*x;
		sum+=temp;
	}
	if(sum<=y){
	printf("%d\n",0);
	}
	else{
		printf("%lld\n",sum-y);
	}
	return 0;
}
