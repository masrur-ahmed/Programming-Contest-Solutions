#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int d,h,e,v;
	scanf("%d %d %d %d",&d,&h,&v,&e);
	double ans= (double)h/((((double)v*4)/((atan(1.0)*4)*d*d))-e);
	if(ans>10000 || ans < 0)printf("NO");
	else printf("YES\n%.13lf",ans);
}