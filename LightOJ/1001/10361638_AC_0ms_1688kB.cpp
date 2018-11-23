#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,a;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&a);
        if(a>10)
        printf("%d 10\n",a-10);
        else
        printf("0 %d\n",a);
    }
}
