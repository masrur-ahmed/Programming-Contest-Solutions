#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,t;
	long long ans;
	scanf("%d",&t);
	for(int i = 1; i <= t ;i++){
		scanf("%d",&n);
		bitset<32>b(n);
		string s = b.to_string();
		next_permutation(s.begin(),s.end());
		bitset<32>ans(s);
		printf("Case %d: %lu\n",i,ans.to_ulong());
	}
	return 0;
}