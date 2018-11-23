#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int height=1;
		for(int i=1 ;i<=n;i++){
			if(i%2!=0)height*=2;
			else height++;
		}
		printf("%d\n",height);
	}
}