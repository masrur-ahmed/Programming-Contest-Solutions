#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=0, r;
    while(n!=0){
            r=n%10;
            n/=10;
            sum += r;
        }
    return sum;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",sum(n));
	}
	return 0;
}