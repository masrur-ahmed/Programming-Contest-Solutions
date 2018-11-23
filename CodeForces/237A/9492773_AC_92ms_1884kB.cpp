#include <bits/stdc++.h>
using namespace std;

int main() {
	int array[24][60],n,cash=0,hour,min;
	memset(array, 0, sizeof(array));
	scanf("%d",&n);
	
	for(int i=0 ;i<n ;i++){
		scanf("%d %d",&hour,&min);
		array[hour][min]++;
		
	}
	for(int i=0 ;i<24 ;i++){
		for(int j=0 ;j<60 ;j++){
			if(array[i][j]>cash){
				cash=array[i][j];
				
			}
		}
	}
	printf("%d\n",cash);
	return 0;
}