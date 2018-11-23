#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	while(scanf("%d",&N)==1 && N!=0){
	int gcd=0;
	for(int i=1;i<=N;i++){
	for(int j=i+1;j<=N;j++){
	gcd+=__gcd(i,j);
	}
	}
	printf("%d\n",gcd);
	}
	return 0;
}