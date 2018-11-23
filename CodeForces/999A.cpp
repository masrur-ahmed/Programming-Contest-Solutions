#include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int n,k,i,j,count=0;
 	scanf("%d %d",&n,&k);
 	int a[n];
 	for(int i = 0 ; i < n ;i++)scanf("%d",&a[i]);
 	for( i = 0 ; i < n ;i++){
 		if(a[i]<=k)count++;
 		else break;
 	}
 	for( j = n - 1 ; j >=i ; j--){
 		if(a[j]<=k)count++;
 		else break;
 	}
 	printf("%d",count);
 }