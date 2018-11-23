#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,count=0;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&a[0]);
	count+=(a[0]+1);
	for(int i = 1 ; i < n ; i++){
		scanf("%d",&a[i]);
		count+=(abs(a[i-1]-a[i])+2);
	}
	printf("%d",count);
	return 0;
}