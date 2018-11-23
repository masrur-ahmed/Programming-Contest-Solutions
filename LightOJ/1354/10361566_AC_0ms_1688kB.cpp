#include <bits/stdc++.h>
int deci(int n)
{
        int multiplier = 1,decimal = 0;
        while(n>0)
        {

        decimal+=n%2*multiplier;
        multiplier*=10;
        n/=2;

        }
        return decimal;


}
int main()
{
        int test,da,db,dc,dd,ba,bb,bc,bd,cas=1;
        scanf("%d",&test);
        while(test--){
                scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
                scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);

                if(deci(da)==ba&&deci(db)==bb&&deci(dc)==bc&&deci(dd)==bd)
                printf("Case %d: Yes\n",cas++);
                else
                printf("Case %d: No\n",cas++);
        }
        return 0;
}
