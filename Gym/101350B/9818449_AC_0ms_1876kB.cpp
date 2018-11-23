#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&x,&y);
		if(y>x){
			printf("WeWillEatYou\n");
		}
		else{
			printf("FunkyMonkeys\n");
		}
	}
	return 0;
}