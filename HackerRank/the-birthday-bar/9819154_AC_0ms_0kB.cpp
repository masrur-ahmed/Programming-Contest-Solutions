#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,m,d,count=0;
	scanf("%d",&t);
	int a[t];
	for(int i=0 ;i<t;i++){
		scanf("%d",&a[i]);
		
	}
	scanf("%d %d",&d,&m);
	for(int i=0 ;i<t ;i++){
		int sum=0;
		for(int j=i,k=0; k<m && j<t;k++,j++){
			sum+=a[j];
			//printf("%d......... %d",sum,a[j]);
		}
		if(sum==d){
			count++;
			sum=0;
		}
		else{
			sum=0;
		}
	}
	printf("%d\n",count);
}