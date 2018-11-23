#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n ; 
	scanf("%d",&n);
	int od=0,evn=0,sum=0,x;
	for (int i = 0 ; i < n ; i++) {
		scanf("%d", &x);
		if (x%2==0)evn++;
		else od++;
		sum+=x;
	}
	if (sum %2 == 0)printf("%d",evn);
	else printf("%d",od);
}