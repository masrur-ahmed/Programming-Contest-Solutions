#include <bits/stdc++.h>
using namespace std;
int main()  
{  
    int num,x;  
    long long ans=0;  
    scanf("%d",&num);  
    for(x=1;x<=num;x++){  
        ans+=pow(2,x);
    }
    printf("%lld\n",ans);  
    return 0;  
}