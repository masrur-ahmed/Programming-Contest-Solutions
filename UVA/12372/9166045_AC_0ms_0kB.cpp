#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,x,y,z,c=1;
	scanf("%d",&test);
	while(test--){
		scanf("%d %d %d",&x,&y,&z);
		if(x<=20 && y<=20 && z<=20){
			printf("Case %d: good\n",c++);
		}
		else{
			printf("Case %d: bad\n",c++);
		}
		
		
	}
	return 0;
}