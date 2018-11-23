#include <bits/stdc++.h>
using namespace std;

int main() {
	float x,y;
	scanf("%f %f",&x,&y);
	if(x<y-0.5 && fmod(x,5)==0){
		y-=(x+0.5);
		printf("%.2f\n",y);
	}
	else{
		printf("%.2f\n",y);
	}
}