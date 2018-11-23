#include<bits/stdc++.h>
using namespace std;
int main(){

    int test,x,y,z=1;
    scanf("%d",&test);
    while(test--){

        scanf("%d %d",&x,&y);
        int sum = 0;
        for(int i = x; i <= y; i++){

            if(i%2){
            	sum+=i;
            }
        }
        printf("Case %d: %d\n",z++,sum);
    }
    return 0;
}