#include <bits/stdc++.h>
using namespace std;

int main() {
	double v1,s1,s2,s,v2,v3,a1,a2,t1,t2,tmax,dbird;
	int t;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
		t1=v1/a1;
		t2=v2/a2;
		tmax=max(t1,t2);
		dbird=v3*tmax;
		s1=pow(v1,2)/(2*a1);
		s2=pow(v2,2)/(2*a2);
		s=s1+s2;
		//printf("Case %d: %lf %lf %lf %lf %lf \n",i,v1,v2,v3,a1,a2);
		printf("Case %d: %lf %lf\n",i,s,dbird);
	}
	return 0;
}