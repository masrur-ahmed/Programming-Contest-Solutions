#include<bits/stdc++.h>
bool ascOrder(int a[]){
	for(int i=1 ; i<10 ; i++){
		if(a[i]<a[i-1])return false;
	}
	return true;
}
bool descOrder(int a[]){
	for(int i=1 ; i<10 ; i++){
		if(a[i]>a[i-1])return false;
	}
	return true;
}
int main(){
	int t,sz=10,n,h,l,cas=1;
	scanf("%d",&t);
	int a[sz];
	printf("Lumberjacks:\n");
	while(t--){
		//scanf("%d",&sz);
		
		h=0,l=0;
		//scanf("%d",&a[0]);
		for(int i=0;i<sz;i++){
			scanf("%d",&a[i]);
		}
		if(ascOrder(a) || descOrder(a))printf("Ordered\n");
		else  printf("Unordered\n");
	}
	
}