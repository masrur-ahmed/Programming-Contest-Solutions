#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	scanf("%d",&n);
	vector<pair<int,int>>v;
	for(int i=0 ; i<n ; i++){
		scanf("%d",&x);
		v.push_back(make_pair(x,i+1));
	}
	sort(v.begin(),v.end());
	for(int i=0 ,k=v.size()-1; i<(n/2) ; i++,k--){
		printf("%d %d\n",v[i].second,v[k].second);
	}
	return 0;
}