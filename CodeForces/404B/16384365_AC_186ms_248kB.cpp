#include <bits//stdc++.h>
using namespace std;
set<char>stc;
int main() {
	double a,d,n;
	scanf("%lf %lf %lf",&a,&d,&n);
	double distance=0,state=0,x=0,y=0;
	while(n--){
		distance=(distance+d)-(4*a*(floor((distance+d)/(4.00*a))));
		//printf("%lf  ",distance);
		state=floor((distance/a)+1);
		//printf("%lf\n",state);
		if(state==1)x=distance,y=0;
		else if(state==2)x=a,y=distance-a;
		else if(state==3)x=a-(distance-(2*a)),y=a;
		else x=0,y=a-(distance-(3*a));
		
		printf("%.12lf %.12lf\n",x,y);
	}
	
	return 0;
}