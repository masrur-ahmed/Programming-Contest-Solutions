#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,x1,x2,x3,v1,v2;
	double t1,t2;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d %d",&x1,&x2,&x3,&v1,&v2);
		t1=((double)abs(x3-x1))/v1;
		t2=((double)abs(x2-x3))/v2;
		//printf("%lf %lf",t1,t2);
		//if(doublesSame(t1,t2))printf("Draw\n");
		if (isgreater(t1,t2))printf("Kefa\n");
		else if (isless(t1,t2))printf("Chef\n");
		else printf("Draw\n");
	}
	return 0;
} 