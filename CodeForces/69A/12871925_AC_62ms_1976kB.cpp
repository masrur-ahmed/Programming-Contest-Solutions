#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>v;
	int x,n,sumx=0,sumy=0,sumz=0;
	scanf("%d",&n);
	
	for(int i=0 ; i < n ; i++){
		scanf("%d",&x);
		sumx+=x;
		scanf("%d",&x);
		sumy+=x;
		scanf("%d",&x);
		sumz+=x;
		//printf("%d",x);
	}
	if(sumx==0 && sumy==0 && sumz==0)printf("YES");
	else printf("NO");
	return 0;
}