#include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int cases;
        scanf("%d",&cases);
        for(int i=0;i<cases;i++)
        {
            int n;
            scanf("%d",&n);
            int counter=0;
            for(int k=0;k<n;k++)
            {
                int temp;
                scanf("%d",&temp);
                if(temp>0)
                {
                    counter++;
                }
            }
            printf("%d\n",counter);
        }
        return 0;
    }

