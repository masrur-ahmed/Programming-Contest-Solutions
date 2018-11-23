#include <bits/stdc++.h>
using namespace std;
int a[1000008];
bool ok (long long int idx,long long int n,long long int k){
	long long int temp = 1,sum = 0;
    while(idx >= temp)
    {
        sum += (idx/temp);
        temp *= k;
    }
    if(sum >= n)return true;
    else return false;

}
int main() {
	long long int n,k,high,low,mid;
	scanf("%lld %lld",&n,&k);
	low=1,high=1e9;
	while((high-low)>=4){
		mid=(low+high)/2;
		if(ok(mid,n,k))high=mid;
		else low=mid;
	}
	for(;low<=high;low++){
		if(ok(low,n,k))high=low;
		
	}
	printf("%lld",high);
}