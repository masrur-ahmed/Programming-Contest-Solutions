#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int test,cat,dog,legs,check;
	scanf("%lld",&test);
	while(test--){
		scanf("%lld %lld %lld",&cat,&dog,&legs);
		check=2*dog;
		if(cat<=check){
			if(legs<4*dog || legs%4!=0 || legs>(cat+dog)*4){
	        printf("no\n");
			}
	      else{
	        printf("yes\n");
	        }
		}
		else{
			if(legs<(dog+(cat-dog*2)*4) || legs%4!=0 || legs>(cat+dog)*4){
				printf("no\n");
			}
			else{
				printf("yes\n");
			}
		}
	}
}