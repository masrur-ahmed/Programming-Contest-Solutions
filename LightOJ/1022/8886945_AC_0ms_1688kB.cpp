#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double pi=2*acos(0),r;
    int test,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
    	scanf("%lf",&r);
    	
    	printf("Case %d: %.2lf\n",i,((2*r)*(2*r))-(pi*r*r));
    	
    }
}
