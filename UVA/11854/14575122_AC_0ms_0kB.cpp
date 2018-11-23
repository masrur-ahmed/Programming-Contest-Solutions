#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	long long x,y,z;
	while(scanf("%d %d %d",&a,&b,&c)==3 && a!=0 && b!=0 && c!=0){
		x=pow(a,2),y=pow(b,2),z=pow(c,2);
		if(x+y==z)printf("right\n");
		else if(y+z==x)printf("right\n");
		else if (x+z==y) printf("right\n");
		else printf("wrong\n");
	}
	return 0;
}