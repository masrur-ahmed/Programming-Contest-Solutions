#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,num,temp;
	scanf("%d",&test);
	while(test>=1){
		int min =1000000000;
		scanf("%d",&num);
		long long int x[num];
		for(long long int i=0; i<num ;i++){
			scanf("%lld",&x[i]);
		}
		for(long long int i=1;i<num;++i)
    {
        for(long long int j=0;j<(num-i);++j)
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
    }
    for(int i=1; i<num; i++) {
    	if(x[i]-x[i-1]<min) {
    	min=x[i]-x[i-1];
    }
    }
    printf("%d\n", min);
 
    test--;
	}
	
}