#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum1=0,sum2=0,x,y;
    scanf("%d",&num);
    int array[num][num];
    for(x = 0; x < num; x++){
        for(y = 0; y < num; y++){
            scanf("%d",&array[x][y]);
            if(x==y){
            sum1+=array[x][y];
            }
            if(x+y==num-1){
            sum2+=array[x][y];
            }
        }
    }
    printf("%d\n",abs(sum1-sum2));
}