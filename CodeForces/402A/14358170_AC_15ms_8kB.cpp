#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,a,b,v,count=0,divisor;
	scanf("%d %d %d %d",&k,&a,&b,&v);
	while(a>0){
		if(b>(k-1))divisor=k-1;
		else divisor=b;
		b-=divisor;
		a-=((divisor+1)*v);
		count++;
		//cout<<divisor+1*v<<" "<<a;
	}
	cout<<count;
}