#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	long long int res1,res2;
	scanf("%d %d",&a,&b);
	res2=b*2+40;
	res1=a*2+40-1;
	if(res2>res1)printf("%lld\n",res2);
	else printf("%lld\n",res1);
	return 0;
}