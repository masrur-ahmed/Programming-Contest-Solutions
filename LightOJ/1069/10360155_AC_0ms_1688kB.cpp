#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,t,c=1;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&a,&b);
	if(a<=b){
		printf("Case %d: %d\n", c++,(b*4)+19);
		
	}
	else{
		printf("Case %d: %d\n", c++,((2*a-b)*4)+19);
	}
	}
	return 0;
}