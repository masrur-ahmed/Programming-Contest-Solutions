#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>har;
	int hartal[3651];
	int test,day,party,num,ans=0;
	scanf("%d",&test);
	while(test--){
		memset(hartal, 0, sizeof(hartal));
		scanf("%d\n%d",&day,&party);
		for(int i=1 ; i<=party ;i++){
			scanf("%d",&num);
		for(int j=num;j<=day;j+=num){
			hartal[j]++;
		}
		}
		for(int i = 1; i <= day; i++){
			if(hartal[i]!=0){
			har.push_back(i);
			}
		}
		ans=0;
		 for(int i = 0; i <har.size(); i++){
		 	if(har[i]%7!=0 && har[i] %7!=6){
		 		ans++;
		 	}
	    }  
		printf("%d\n",ans);
		har.clear();
	}
	return 0;
}