#include <bits/stdc++.h>
using namespace std;
 
int main() {
	vector<pair<int,int>>vp;
	int n,k,x,mn=INT_MAX,mx=INT_MIN, left[1000],right[1000],mostk=0;
	scanf("%d %d",&n,&k);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&x);
		vp.push_back(make_pair(x,i));
	}
	for(int i = 0 ; i < k ; i++){
		sort(vp.begin(),vp.end());
		if(vp[0].first<vp[n-1].first){
			vp[0].first++;
			vp[n-1].first--;
			right[mostk] = vp[n - 1].second + 1;
			left[mostk] = vp[0].second + 1;
			mostk++;
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		mn=min(mn,vp[i].first);
		mx=max(mx,vp[i].first);
		//printf("%d__",vp[i].first);
	}
	printf("%d %d\n",abs(mn-mx),mostk);
	for (int i = 0 ; i < mostk ; i++)printf("%d %d\n", right[i],left[i]);
}