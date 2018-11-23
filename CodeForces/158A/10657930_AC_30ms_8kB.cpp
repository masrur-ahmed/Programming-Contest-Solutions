#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m,count=0;
	scanf("%d%d", &n, &m);
	int x[n];
	for(int i=0 ;i<n ;i++){
		scanf("%d",&x[i]);
	}
	for(int i=0 ;i<n ;i++){
		if (x[i]>=x[m-1] && x[i]>0)count++;
	}
	printf("%d\n",count);
}