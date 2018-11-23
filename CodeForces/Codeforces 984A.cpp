#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	scanf("%d",&n);
	vector<int>v;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	if(n%2==0)printf("%d",v[(n/2)-1]);
	else printf("%d",v[n/2]);
	return 0;
}