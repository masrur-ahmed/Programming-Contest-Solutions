#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,z;
	double r,ans;
	scanf("%d",&t);
	for(int i = 0 ; i < t; i++){
		scanf("%d %d %d",&x,&y,&z);
		r=z/2.0;
		ans=2.0*r*r;
		printf("%.11lf\n",ans);
	}
	return 0;
}