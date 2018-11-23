#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int num;
	
	while(scanf("%d",&num)==1){
	int count=0;
	int ar1[3001],ar2[3001];
	for(int i=0 ;i<num ;i++){
		scanf("%d",&ar1[i]);
	}
	int k=1;
	for(int i = 1; i < num;i++){
            ar2[k++] = abs(ar1[i]-ar1[i-1]);
        }
        sort(ar2,ar2+k);
        for(int i = 1; i < k; i++){
            if(ar2[i] != i){
                count++;
                break;
            }
        }
	if(count==0){
		printf("Jolly\n");
	}
	else{
		printf("Not jolly\n");
	}
}
	return 0;
}