#include <bits/stdc++.h>
using namespace std;
int a[1000008];
bool ok (int idx,int mid,int x){
	return a[mid]-a[idx]<=x;
}
int main() {
	int n,x,count=0;
	scanf("%d %d",&n,&x);
	for(int i=0 ; i < n ; i++)scanf("%d",&a[i]);
	sort(a,a+n);
	int low=0,high=n-1,mid;
	for(int i = 0 ; i< n ; i++){
	int low=i,high=n-1,mid;
	while((high-low)>=2){
		mid=(low+high)/2;
		if(ok(i,mid,x)){
			low=mid;
		}
		else high=mid;
	}
	for(; low <=high ; low++){
		if(a[low]-a[i]>x)break;
		else if(abs(a[low]-a[i])==x )count++;
		
	}
	}
	printf("%d",count);
	return 0;
}