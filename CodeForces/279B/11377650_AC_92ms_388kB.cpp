#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	scanf("%d %d",&n,&t);
	int a[n];
	int count=0,sum=0,maxm=0;
	for(int i=0,j=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		count++;
		while(sum>t){
			sum-=a[j];
			j++;
			count--;
		}
		if(count>maxm)maxm=count;
		
	}
	printf("%d\n",maxm);
	return 0;
}