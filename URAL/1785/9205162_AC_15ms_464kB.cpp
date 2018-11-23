#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	if(x>=1 && x<=4){
		printf("few\n");
	}
	else if(x>=5 && x<=9){
		printf("several\n");
	}
	else if(x>=10 && x<=19){
		printf("pack\n");
	}
	else if(x>=20 && x<=49){
		printf("lots\n");
	}
	else if(x>=50 && x<=99){
		printf("horde\n");
	}
	else if(x>=100 && x<=249){
		printf("throng\n");
	}
	else if(x>=250 && x<=499){
		printf("swarm\n");
	}
	else if(x>=500 && x<=999){
		printf("zounds\n");
	}
	else {
		printf("legion\n");
	}
	return 0;
}