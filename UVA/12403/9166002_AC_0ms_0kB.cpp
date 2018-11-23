#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,value;
	string s;
		int test2,sum=0;
		scanf("%d",&test2);
	
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