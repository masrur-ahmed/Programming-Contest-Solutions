#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	long long x;
	scanf("%d %d",&n,&k);
	long long int knight[n],sum[n],sum2[n];
	map<long long int, long long int>mp;
	map<long long int, long long int>msum;
	for(int i = 0 ; i < n ; i++)scanf("%lld",&knight[i]);
	for(int i = 0 ; i < n ; i++){
		scanf("%lld",&x);
		mp[knight[i]]=x;
		sum2[i]=x;
	}
	int i=0,count=0;
	if(k!=1){ for (std::map<long long int, long long int>::iterator it=mp.begin(); it!=mp.end(); ++it,i++){
	 	if(i==0)sum[i]=it->second;
	 	else if(i>k)sum[i]=(it->second)-sum[count++]+sum[i-1];
	 	else sum[i]=it->second+sum[i-1];
	 	msum[it->first]=sum[i];
	 }
	for(int i = 0 ; i < n ; i++){
		printf("%lld ",msum.find(knight[i])->second);
	}
	}
	else{
		for(int i = n-1 ; i >0 ; i--){
			sum2[i]+=sum2[i-1];
		}
		for(int i = 0 ; i < n  ; i++){
			printf("%lld ",sum2[i]);
		}
	}
	
	
}