#include <bits/stdc++.h>
using namespace std;
vector<int>v;
bool ok(int x,int y){
	int count=0;
	for(int i = 0; i < v.size() ; i++){
		count+=(ceil(v[i]/(double)x));
	}
	return count>y;
}

int main() {
	int n,b,x;
	scanf("%d %d",&n,&b);
	while(n!=-1 && b!=-1){
		for(int i = 0; i < n ;i++){
			scanf("%d",&x);
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		
		int  low=0,high=v[v.size()-1],mid;
		while((high-low)>=4){
			mid=(high+low)/2;
			if(ok(mid,b))low=mid;
			else high=mid;
		}
		//printf("%d\n",low);
		for(;low<=high;low++){
			if(!ok(low,b))break;
		}
		printf("%d\n",low);
		v.clear();
		scanf("%d %d",&n,&b);
	}
	
	
	return 0;
}