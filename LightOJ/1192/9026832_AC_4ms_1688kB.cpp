#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,balls,z=1;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&balls);
		int ans=0,gray,white;
		for(int i=0 ;i<balls ;i++){
		scanf("%d %d",&gray,&white);
		ans^=(white-gray-1);
		}
		if(ans==0){
			printf("Case %d: Bob\n",z++);
		}
		else{
			printf("Case %d: Alice\n",z++);
		}
	}
	return 0;
}