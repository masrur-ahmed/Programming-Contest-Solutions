#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,h,a,b,k,ta,tb,fa,fb,ans;
	scanf("%d %d %d %d %d",&n,&h,&a,&b,&k);
	while(k--){
		ans=0;
		scanf("%d %d %d %d",&ta,&fa,&tb,&fb);
		if(ta==tb)ans=abs(fa-fb);
		else{
			if(fa>b){
				ans+=abs(fa-b);
				fa=b;
			}
			else if(fa<a){
				
				ans+=abs(fa-a);
				fa=a;
			}
			ans+=abs(ta-tb);
			ans+=abs(fa-fb);
		}
		printf("%d\n",ans);
	}
	return 0;
}