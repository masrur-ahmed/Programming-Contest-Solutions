#include <bits/stdc++.h>
    using namespace std;
    #define N 10001
    int main()
    {
        int cases;
        scanf("%d",&cases);
        for(int i=0;i<cases;i++)
        {
            int n;
            scanf("%d",&n);
            int aa[N];
            memset(aa,0,sizeof(aa));
            for(int k=0;k<n;k++)
            {
                int temp;
                scanf("%d",&temp);
                aa[temp]++;
            }
            int ans=0;
            for(int k=1;k<N-1;k++)
            {
                ans=max(ans,aa[k]+aa[k+1]);
            }
            printf("%d\n",ans);
        }
        return 0;
    }

