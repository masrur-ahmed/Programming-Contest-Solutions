#include <bits/stdc++.h>
using namespace std;
bool cmp(int i,int j) { 
	return (i==j);
	}
int main() {
	int n,x,sz;
	long long res=0;
	vector<int>v;
	vector<int>rhs;
	vector<int>lhs;
	pair<vector<int>::iterator,vector<int>::iterator> bounds;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < n ; k++){
				rhs.push_back((v[i]*v[j])+v[k]);
				if(v[i]!=0)lhs.push_back(v[i]*(v[j]+v[k]));
			}
		}
	}
	sort(rhs.begin(),rhs.end());
	sort(lhs.begin(),lhs.end());
	sz=rhs.size();
	for(int i = 0 ; i < sz ; i++){
		bounds=equal_range(lhs.begin(),lhs.end(),rhs[i]);
		//res+=(upper_bound(lhs.begin(),lhs.end(),rhs[i])-lower_bound(lhs.begin(),lhs.end(),rhs[i]));
		res+=((bounds.second - lhs.begin())-(bounds.first-lhs.begin()));
		
	}
	printf("%lld\n",res);
	return 0;
}