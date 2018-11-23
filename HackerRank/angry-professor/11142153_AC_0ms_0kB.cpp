#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&k);
		int count=0;
		int a[n];
		for(int i=0 ;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]<=0)count++;
		}
		if(count>=k)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}