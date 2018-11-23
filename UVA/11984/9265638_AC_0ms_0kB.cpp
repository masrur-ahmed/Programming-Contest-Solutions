#include <bits/stdc++.h>
using namespace std;
int main() {
	int test, t = 1, a, b;
	scanf("%d", &test);
	while(test--) {
		scanf("%d %d", &a, &b);
		double ans=a+b*5/9.0;
		printf("Case %d: %.2lf\n", t++, ans);
	}
    return 0;
}