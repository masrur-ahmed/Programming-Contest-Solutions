#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,sum=0,j=0,mx=0;
	scanf("%d %d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		if(sum>m){
			for(;j<=i;){
			//	printf("%d +++ %d++ %d\n",a[j],a[i],sum);
				sum-=a[j++];
				
				if(sum<=m){
					//printf("%d +++ %d++\n",sum,mx);
					break;
				}	
			}
		}
		mx=max(mx,sum);
	}
	printf("%d\n",mx);
	return 0;
}