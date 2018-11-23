#include <bits/stdc++.h>
using namespace std;
 
int main() {
	//string s;
	long long int t,count=0,step=0;
	scanf("%lld",&t);
	count=(t*(t+1))/2;
	count-=(t-1);
	printf("%lld",count);
	return 0;
}
