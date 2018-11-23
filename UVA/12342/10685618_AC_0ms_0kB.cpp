#include <bits/stdc++.h>
using namespace std;
 
int main() {
	//string s;
	long long int t,count=0,total,cas=1;
	scanf("%lld",&t);
	//cin.ignore();
	while(t--){
		scanf("%lld",&total);
		if(total<180001)count=0;
		else if(total<=480000)count=ceil((total-180000.0)*0.1);
		else if(total<=880000)count=ceil(30000.0+((total-480000.0)*0.15));
		else if(total<=1180000)count=ceil(((total-880000.0)*0.2)+90000.0);
		else if(total>1180000)count=ceil(((total-1180000.0)*0.25)+150000.0);
		if(count<2000 && total>180000)count=2000;
		printf("Case %lld: %lld\n",cas++,count);
		count=0;
	}
	return 0;
}
