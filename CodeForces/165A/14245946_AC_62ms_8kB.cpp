#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,y,count=0;
	vector<pair<int,int>>px;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d",&x,&y);
		px.push_back(make_pair(x,y));
	}
	//sort(px.begin(),px.end());
	bool left=false,right=false,up=false,low=false;
	for(int i=0 ; i < n ; i++){
		left=false,right=false,up=false,low=false;
		for(int j=0 ; j < n ; j++){
			if (i==j)continue;
			if(px[i].first>px[j].first && px[i].second==px[j].second)right=true;
			else if (px[i].first<px[j].first && px[i].second==px[j].second)left=true;
			else if(px[i].first==px[j].first && px[i].second<px[j].second)low=true;
			else if(px[i].first==px[j].first && px[i].second>px[j].second)up=true;
			
		}
		if(right && left && low && up )count++;
	}
	printf("%d",count);
	return 0;
}