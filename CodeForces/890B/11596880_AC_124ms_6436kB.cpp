#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i=0,x,nvisit;
	scanf("%d",&t);
	map<int,int>m;
	while(t--){
		scanf("%d",&x);
		m[x]=i++;
		nvisit=x;
	}
	for(map<int,int>::iterator it=m.begin(); it!=m.end(); ++it){
    	if(it->second < m[nvisit])nvisit=it->first;
	}
	printf("%d\n",nvisit);
	return 0;
}