#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum;
    while(scanf("%d", &n)==1){
        sum = 0;
        if(n < 1) sum = n*(1 - n)/2 + 1;
        else sum = n*(n+1)/2;
        printf("%d\n", sum);
    }
        
        return 0;
}
