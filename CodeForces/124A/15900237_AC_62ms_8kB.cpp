#include <bits/stdc++.h>
using namespace std;

int main() {
	int  n,a,b,x,y=0;
	scanf("%d %d %d",&n,&a,&b);
	for(int i = a+1; i <= n ; i++){
		if(n-i>b)continue;
		else y++;
		
	}
	printf("%d\n",y);
	return 0;
}