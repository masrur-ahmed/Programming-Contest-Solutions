#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int ans=ceil(n*n/2.0);
	printf("%d\n",ans);
	for(int i = 0 ; i < n ; i++){
		for(int j=0 ; j < n ; j++){
			if((i+j)%2==0)printf("C");
			else printf(".");
		}
		printf("\n");
	}
}
