#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,value,t,cas=1;
	string s;
		int test2,sum=0;
		scanf("%d",&t);
		while(t--){
		scanf("%d",&test2);
		printf("Case %d:\n",cas++);
	    for(y=1;y<=test2 ; y++){
			cin >>s;
			if(s=="donate"){
				scanf("%d",&value);
				sum+=value;
			}
			else{
				printf("%d\n",sum);
			}
			
		}
		sum=0;
	}
}