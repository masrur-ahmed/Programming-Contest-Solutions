#include <bits/stdc++.h>
using namespace std;

int main() {
	double sum=0,avg;
	double x[3];
	int test,count;
	scanf("%d",&test);
	while(test--){
		for(int i=0 ; i<3 ;i++){
			scanf("%lf",&x[i]);
		}
		sort(x, x+3);
		count=0;
		sum=x[2]+x[1];
		sum/=2.0;
	    for(int i=0 ; i<3 ;i++){
		if(x[i]<10){
				count++;
			}
		}
		if( count>=2){
			
			printf("Failed\n");
		}
		else{
			printf("%.2lf\n",sum);
			
		}
	}
	return 0;
}