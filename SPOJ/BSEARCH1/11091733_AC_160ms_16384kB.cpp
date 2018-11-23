#include <bits/stdc++.h>
using namespace std;
long long int BS (long long int raju[],long long int mina,long long int raju_num){
    long long int l=0, r=raju_num, mid;
    while (l!=r){
        mid = (l+r)/2;
        if (raju[mid] >= mina) {
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    if (raju[l] == mina) {
        return l;
    }
    else{
        return -1;
    }
}
int main(){
	long long int x,y,z,r;
	scanf("%lld",&x);
	long long int arr[x];
	scanf("%lld",&y);
	for(long long int i=0 ; i<x ;i++)scanf("%lld",&arr[i]);
	while(y--){
		scanf("%lld",&z);
		r=BS(arr,z,x);
		printf("%lld\n",r);
		
	}
	return 0;
}