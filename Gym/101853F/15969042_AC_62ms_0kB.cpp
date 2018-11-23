 #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int cases;
        scanf("%d",&cases);
        for(int i=0;i<cases;i++)
        {
            int day,hour;
            scanf("%d%d",&day,&hour);
            hour=hour*60;
            int tot=0;
            for(int k=0;k<day;k++)
            {
                int h1,m1,h2,m2;
                char c1,c2;
                cin >> h1 >> c1 >> m1 >> h2 >> c2 >> m2;
                int temp1=(h1*60)+m1;
                int temp2=(h2*60)+m2;
                temp2=temp2-temp1;
                tot=tot+temp2;
            }
            if(tot>=hour)
            {
                printf("YES\n");
            }else
            {
                printf("NO\n");
            }
        }
        return 0;
    }

