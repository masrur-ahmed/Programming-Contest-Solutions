#include <bits/stdc++.h>
using namespace std;
int main() {
	double r1,r2,r3,s,area1,area2,a,b,c,x,y,z,area;
	int test,cas=1;
	scanf("%d",&test);
 
	while(test--){
		scanf("%lf %lf %lf",&r1,&r2,&r3);
 
		x=r1+r2;
		y=r2+r3;
		z=r3+r1;
 
		s=(x+y+z)/2.0;
 
		area1=sqrt(((s-x)*(s-y)*(s-z)*s));
 
		a=acos((z*z+y*y-x*x)/(2*y*z));
		b=acos((z*z-y*y+x*x)/(2*x*z));
		c=acos((-z*z+y*y+x*x)/(2*x*y));
 
		area2=0.5*((b*r1*r1)+(c*r2*r2)+(a*r3*r3));
 
		area=area1-area2;
 
		printf("Case %d: %lf\n",cas++,area);
    }
}