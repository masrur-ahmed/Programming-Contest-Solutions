#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,p,m=101,sum=0;
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		scanf("%d %d",&a,&p);
		m=min(p,m);
		sum+=(a*m);
	}
	printf("%d",sum);
	return 0;
}