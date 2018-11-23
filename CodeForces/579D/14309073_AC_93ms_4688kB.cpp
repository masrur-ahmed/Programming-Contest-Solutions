#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,x;
	long long int tmul=1,ans=0;
	scanf("%d %d %d",&n,&k,&x);
	long long int a[n],left[n],right[n];
	for(int i = 0 ; i < n ; i++)scanf("%lld",&a[i]);
	for(int i = 0 ; i < k ; i++)tmul*=x;
	left[0]=a[0],right[n-1]=a[n-1];
	for(int i = 1 ; i < n ; i++)left[i]=left[i-1]|a[i];
	for(int i = n-2 ; i >=0 ; i--)right[i]=right[i+1]|a[i];
	for(int i = 1 ; i <n-1 ; i++){
		ans=max(ans,(left[i-1])|right[i+1]|(a[i]*tmul));
		
	}
	
	if(n==1)ans=max(ans,(0|0|(a[0]*tmul)));
	else {
	    ans=max(ans,(0|right[1]|(a[0]*tmul)));
	    ans=max(ans,(left[n-2])|0|(a[n-1]*tmul));
	}
// 	for(int i = 0 ; i < n ; i++)printf("%lld ",left[i]);
// 	printf("\n");
// 	for(int i = 0 ; i < n ; i++)printf("%lld ",right[i]);
	printf("%lld",ans);
	return 0;
}