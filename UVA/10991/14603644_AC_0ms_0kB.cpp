#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double r1,r2,r3,a,b,c,h,angA,angB,angC,areaA,areaB,areaC,areaT,diamond;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%lf %lf %lf",&r1,&r2,&r3);
		a=r1+r2;
		b=r2+r3;
		c=r3+r1;
		angA=acos((pow(b,2.0)+pow(c,2.0)-pow(a,2.0))/(2*b*c))*(180.0/acos(-1));
		angB=acos((-pow(b,2.0)+pow(c,2.0)+pow(a,2.0))/(2*a*c))*(180.0/acos(-1));
		angC=acos((pow(b,2.0)-pow(c,2)+pow(a,2.0))/(2*b*a))*(180.0/acos(-1));
		areaA=(acos(-1)*(pow(r3,2.0)))*(angA/360.0);
		areaB=(acos(-1)*(pow(r1,2.0)))*(angB/360.0);
		areaC=(acos(-1)*(pow(r2,2.0)))*(angC/360.0);
		h=(a+b+c)/2.0;
                areaT=sqrt(h*(h-a)*(h-b)*(h-c));
		diamond=areaT-(areaA+areaB+areaC);
		printf("%.6lf\n",i,diamond);
	}
	return 0;
}