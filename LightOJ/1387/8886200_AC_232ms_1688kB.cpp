#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,x,y,value;
	string s;
	scanf("%d",&test);
	for(x=1;x<=test ; x++){
		int test2,sum=0;
		scanf("%d",&test2);
		printf("Case %d:\n",x);
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
	}
	}

