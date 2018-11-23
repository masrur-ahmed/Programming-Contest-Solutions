#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	ans=max((a*b*c),max(a+b*c,a*(b+c)));
	ans=max(ans,max((a+b+c),((a+b)*c)));
	printf("%d",ans);
 
}