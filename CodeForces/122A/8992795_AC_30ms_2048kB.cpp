#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int lucky[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int test;
	scanf("%d",&test);
	int count=0;
	for(int i=0 ; i<14 ; i++){
		if(test%lucky[i]==0){
		count++;	
		}
	}
	if(count!=0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}