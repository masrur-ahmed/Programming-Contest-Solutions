#include<bits/stdc++.h>
int main()
{
    int a, b, c,i,j,temp;
    int x[6];
    scanf("%d%d%d", &a, &b, &c);
    x[0] = a*b+c;
    x[1] = a+b*c;
    x[2] = a*(b+c);
    x[3] = (a+b)*c;
    x[4] = a+b+c;
    x[5] = a*b*c;
     for(i=1;i<6;++i)
    {
        for(j=0;j<(6-i);++j)
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
    }
    
    printf("%d\n", x[5]);
}