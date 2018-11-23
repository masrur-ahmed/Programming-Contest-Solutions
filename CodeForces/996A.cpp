#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int taka,count=0,temp;
	scanf("%lld",&taka);
	while(taka!=0){
		if(taka>=100){
			temp=taka%100;
			count += (taka/100);
			taka = temp;
		}
		else if(taka>=20){
			temp=taka%20;
			count += (taka/20);
			taka = temp;
		}
		else if(taka>=10){
			temp=taka%10;
			count += (taka/10);
			taka = temp;
		}
		else if(taka>=5){
			temp=taka%5;
			count += (taka/5);
			taka = temp;
		}
		else{
			count += taka;
			taka = 0;
		}
	}
	printf("%lld",count);
	return 0;
}