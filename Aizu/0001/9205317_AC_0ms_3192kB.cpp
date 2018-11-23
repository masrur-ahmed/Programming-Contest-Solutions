#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>y;
	int x;
	while(scanf("%d",&x)==1){
		y.push_back(x);
		
		
	}
	sort(y.begin(),y.end());
	for(int i=y.size()-1,j=0 ;j<3 ; j++,i--){
		printf("%d\n",y[i]);
	}
	return 0;
}