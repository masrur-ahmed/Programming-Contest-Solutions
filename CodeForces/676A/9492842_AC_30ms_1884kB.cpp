#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,max=0,maxid=0,min=100000,minid=0;
	scanf("%d",&n);
	int array[n],array2[n];
	for(int i=0; i<n ;i++){
		scanf("%d",&array[i]);
		if(array[i]>max){
			max=array[i];
			maxid=i;
		}
		 if(array[i]<min){
			min=array[i];
			minid=i;
		}
	    
	}
	//printf("%d %d %d %d\n",max,maxid,min,minid);
	if(maxid<minid){
		//printf("%d %d\n",maxid,n-maxid-1);
		if(n-maxid-1>minid){
	 		printf("%d\n",n-maxid-1);
	 	 }
	 	 else{
	 	 	printf("%d\n",minid);
	      }
		 
	}
	 else{
	     if(n-minid-1>maxid){
			printf("%d\n",n-minid-1);
		 }
		 else{
		 	printf("%d\n",maxid);
	     }
	 }
	return 0;
}