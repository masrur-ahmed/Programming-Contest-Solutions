#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,count=0,x;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
		scanf("%d",&x);
		int len=x%10,y;
		while(x>0){
			y=x%10;
			x/=10;
		}
		printf("%d\n",(len+y));
		//count=0;
	}
	return 0;
}