#include <bits/stdc++.h>
using namespace std;

int main() {
	//set<int>s;
	map<int,int>m;
	int n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		m[x]++;
		if(m[x]>(n+1)/2){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}