#include <iostream>
using namespace std;

int main() {
	long long int num,nik=1,tro=2;
	scanf("%lld",&num);
	
	if(num%10==0){
		printf("%lld\n",tro);
	}
	else{
		printf("%lld\n",nik);
		int c=num%10;
        printf("%d\n",c);
	}
	
}