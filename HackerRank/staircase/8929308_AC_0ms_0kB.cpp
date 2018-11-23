#include<bits/stdc++.h>
using namespace std;
int main(){
int num ,x,y,z;
scanf("%d",&num);
for(int x=0; x<num;x++){     
        for (int y= 0;y<((num-x)-1);y++){
            printf(" ");
        }
        for (int z=0;z<(x+1);z++){
            printf("#");
        }
        printf("\n");
    }

}