#include <stdio.h>
int main()
{
    int a,b,c,d,e,f=0,g=0;
    scanf("%d",&a);
    for(b=1; b<=a; b++)
    {
        scanf("%d", &c);
        for(d=1,f=0; d<=c; d++)
        {
            scanf("%d",&e);
            if(e>0) f+=e;
        }
        if(f>=0)
            printf("Case %d: %d\n",b,f);
    }
    return 0;
}