#include <bits/stdc++.h>
using namespace std;
int main() {
	int x[3];
	int test,y=1;
	scanf("%d",&test);
	while(test--){
		for(int i=0 ; i< 3 ; i++){
			scanf("%d",&x[i]);
		}
		sort(x, x+3);
		printf("Case %d: %d\n",y++,x[1]);
		
	}
	return 0;
}
