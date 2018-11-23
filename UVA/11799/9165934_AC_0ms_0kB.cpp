#include <bits/stdc++.h>
using namespace std;

int main() {
	int cas,max,x,y,sNum,speed;
	while(scanf("%d",&cas)==1){
		for(x=1 ; x<=cas ; x++){
			max=0;
			scanf("%d",&sNum);
			for(y=1 ; y<=sNum ; y++){
				scanf("%d",&speed);
				if(speed>max){
					max=speed;
				}
			}
			printf("Case %d: %d\n",x,max);
		}
		
	}
}