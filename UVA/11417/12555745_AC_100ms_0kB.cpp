#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,sz,x,max=0,ne;
	while(scanf("%d",&t)==1 && t!=0){
		for(int i=1;i<=t;i++){
			for(int j=i+1;j<=t;j++){
				max+=__gcd(i,j);
			}
		}
		printf("%d\n",max);
		max=0;
	}
	return 0;
}