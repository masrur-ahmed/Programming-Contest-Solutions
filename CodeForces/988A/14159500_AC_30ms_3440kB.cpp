#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int,int>m;
	int n,k,x;
	scanf("%d %d",&n,&k);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&x);
		m[x]=i;
	}
	if(m.size()>=k){
		printf("YES\n");
		int i=1;
		for (std::map<int,int>::iterator it=m.begin(); it!=m.end()&& i<=k; ++it,i++)
    			cout << it->second +1<< ' ';
	}
	else printf("NO");
	return 0;
}