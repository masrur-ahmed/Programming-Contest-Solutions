#include <bits//stdc++.h>
using namespace std;
typedef unsigned long long int ui64;
vector<ui64>v;
vector<ui64>v2;
ui64 q,sum,cost;
bool ok(ui64 k){
	for(int i = 0 ; i < v.size() ;i++){
		q= v[i]+ (i+1)*k;
		v2.push_back(q);
		
	}
	sort(v2.begin(),v2.end());
	sum=0;
	for(int i = 0 ; i<k ; i++){
		//printf("%llu ",v2[i]);
		sum+=v2[i];
	}
	//cout<<endl;
	v2.clear();
	return sum>cost;
}
int main() {
	ui64 x,mid,high,n,low;
	scanf("%llu %llu",&n,&cost);
	for(int i = 0 ; i < n ; i++){
		scanf("%llu",&x);
		v.push_back(x);
	}
	high= n+1 , low =0;
	while((high-low)>=2){
		mid= (high+low)/2;
		if(ok(mid))high=mid;
		else low=mid;
		//cout<<mid<<endl;
	}
	
	ok(low);
	cout<<low<<" "<<sum;
 
	return 0;
}