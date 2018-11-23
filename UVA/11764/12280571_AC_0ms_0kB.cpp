#include<bits/stdc++.h>
int main(){
	int t,sz,n,h,l,cas=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&sz);
		int a[sz];
		h=0,l=0;
		scanf("%d",&a[0]);
		for(int i=1;i<sz;i++){
			scanf("%d",&a[i]);
			if(a[i]>a[i-1])h++;
			else if(a[i]<a[i-1])l++;
			
		}
		printf("Case %d: %d %d\n",cas++,h,l);
	}
	
}