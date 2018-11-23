#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	int ar[x],arr[x];
	for(int i=0 ;i<x ; i++){
		scanf("%d",&ar[i]);
		arr[i]=ar[i];
		
	}
	sort(arr,arr+x);
	int max=arr[0]+arr[x-1];
	for(int i=0 ;i<x ;i++){
		for(int j=0 ;j<x ;j++){
			if(ar[i]+ar[j]==max && i!=j){
				printf("%d %d \n",i+1,j+1);
				ar[i]=ar[j]=0;
				break;
			}
		}
		
	}
	return 0;
}