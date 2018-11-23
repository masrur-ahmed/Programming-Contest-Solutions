#include <bits/stdc++.h>

int main()
{
        int test,a,b,cas=1;
        scanf("%d",&test);
        while(test--){
                scanf("%d %d",&a,&b);
                int ans=a+b;
                printf("Case %d: %d\n",cas++,ans);
        }
        return 0;
}
