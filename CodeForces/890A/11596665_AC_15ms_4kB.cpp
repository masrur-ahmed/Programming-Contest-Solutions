#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[6];
    int sum=0;
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    } 
        for(int i=0;i<=3;i++){
            for(int j=i+1;j<=4;j++){
                for (int k=j+1;k<=5;k++){
                    if (sum-(a[i]+a[j]+a[k])==(a[i]+a[j]+a[k])){
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    
    printf("NO\n");

    return 0;
}