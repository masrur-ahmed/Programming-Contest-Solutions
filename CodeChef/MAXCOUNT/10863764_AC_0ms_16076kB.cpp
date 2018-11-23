#include <bits/stdc++.h>
using namespace std;
map<int,int>m;
int main() {
	int t,elem,x,count=-1,count1=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&elem);
		while(elem--){
			scanf("%d",&x);
			m[x]++;
			//printf("%d %d\n",m[x],x);
		}
		
		for(map<int,int>::iterator it=m.begin(); it!=m.end(); ++it){
		    if(it->second >count){
		        count=it->second;
		        count1=it->first;
		    }
		}
		printf("%d %d\n",count1,count);
		count1=0,count=-1;
		m.clear();
	}
	
	return 0;
}