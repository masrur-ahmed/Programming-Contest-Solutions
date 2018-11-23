#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,t,ans;
	scanf("%d",&t);
	for(int i = 1; i <= t ;i++){
		scanf("%d %d",&n,&m);
		if(n==1 || m==1)ans=max(n,m);
		else if(n==2 && m==2){
			ans=4;
			
		}
		else if(n==2 || m==2){
			n=max(n,m);
			ans=n;
			if(n%4==1 || n%4==3)ans++;
			else if(n%4==2)ans+=2;
		}
		else ans=ceil((n*m)/2.0);
		
		printf("Case %d: %d\n",i,ans);
		
	}
	
	return 0;
}