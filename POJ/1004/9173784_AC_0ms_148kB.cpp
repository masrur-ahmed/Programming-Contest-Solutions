#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
        double num,sum=0,ans;
        for(int i=0;i<12;i++)
        {
                scanf("%lf",&num);
                sum+=num;
        }
        ans=sum/12.00;
        printf("$%.2f",ans);
        return 0;
}