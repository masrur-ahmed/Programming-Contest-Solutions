#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,a;
	vector<int>v;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n ;i++){
		scanf("%d",&a);
		v.push_back(a);
	}
	//sort(v.begin(),v.end());
	int c=0;
	for (int i=0;i<n;i++) {
			for (int j=i+1;j<n;j++) {
				if ((v[i]+v[j])%k==0) {
					c++;
				}
			}
		}
	printf("%d\n",c);
	return 0;
}