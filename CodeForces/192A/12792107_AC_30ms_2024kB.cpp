#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int a;
	scanf("%lld",&a);
	long long int k=sqrt(a*2);
	for(long long int i=1 ;i<k ;i++){
		long long int calc=(i*(i+1))/2;
		long long int e=a-calc;
		if(e==(int)(floor(sqrt(e*2))*(floor(sqrt(e*2))+1))/2){
			printf("YES\n");
			return 0;
		}
		
		
	}
	printf("NO\n");
	return 0;
}