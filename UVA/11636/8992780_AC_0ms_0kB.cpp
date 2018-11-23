#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,i,cas=1,ans;
	while(scanf("%d",&test)==1 && test>0){
		for(i=0;i<test;i++){
            if(pow(2,i)>=test){
               ans=i;
               break;
            }
        }
        printf("Case %d: %d\n",cas++,ans);
    
    }
}