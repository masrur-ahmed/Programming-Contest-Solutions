#include <bits/stdc++.h>
using namespace std;

int main() {
    int test,cas=1;
    double r,pi,ans;
    scanf("%d",&test);
    while(test--){
    scanf("%lf",&r);
    pi=2*acos(0.0);
    ans=((r+r)*(r+r))-(pi*r*r);
    printf("Case %d: %.2lf\n",cas++,ans);
    }
	return 0;
}