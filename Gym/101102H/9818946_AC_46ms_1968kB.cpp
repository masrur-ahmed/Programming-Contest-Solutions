#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int total,frn;
		scanf("%d %d",&total,&frn);
		char seat[total];
		scanf("%s",seat);
		
		int maxx=0;
		for(int i=0 ,c=0 ;i<total;i++){
			
			if(seat[i]=='0'){
				c++;
				maxx=max(maxx,c);
				
			}
			else{
				maxx=max(maxx,c);
				c=0;
			}
			
		}
		if(maxx>=frn+1){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}