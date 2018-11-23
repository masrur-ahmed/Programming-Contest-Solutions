#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int,int>m;
	int n,sum1=0,sum2=0,sum3=0,x;
	scanf("%d",&n);
	for(int i=0 ;i<n;i++){
		scanf("%d",&x);
		sum1+=x;
	}
	for(int i=0 ;i<n-1;i++){
		scanf("%d",&x);
		sum2+=x;
	}
	for(int i=0 ;i<n-2;i++){
		scanf("%d",&x);
		sum3+=x;
	}
	printf("%d\n%d\n",(sum1-sum2),(sum2-sum3));
}