#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,ans,temp;
	while(scanf("%d %d",&x,&y)==2 && x!=0 && y!=0){
		ans=0;
		for(int i=x ; i<=y ;i++){
			temp=sqrt(i);
			if(temp*temp==i){
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}