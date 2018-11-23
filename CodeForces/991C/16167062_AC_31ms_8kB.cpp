#include <bits//stdc++.h>
using namespace std;
typedef unsigned long long int ui64;
ui64 n;
bool ok(ui64 vas){
 	ui64 tot=0,left=n,temp;
 	while(left>0){
 		temp=min(left,vas);
 		tot+=temp;
 		left-=temp;
 		left-=(left/10);
 	}
 	return tot>=(n+1)/2;
 }
int main() {
	ui64 x,mid,high,low,count=0;
	scanf("%llu",&n);
	high= n , low =0;
	while((high-low)>=2){
		mid= (high+low)/2;
		if(ok(mid))high=mid;
		else low=mid;
		//cout<<mid<<endl;
	}
	cout<<high;
 
	return 0;
}
