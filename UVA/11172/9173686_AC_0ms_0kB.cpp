#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,num1,num2;
	scanf("%d",&test);
    while(test--){
		scanf("%d %d",&num1 , &num2);
		if(num1==num2) printf("=\n");
		else if(num1<num2) printf("<\n");
		else printf(">\n");	
	}

	return 0;
}