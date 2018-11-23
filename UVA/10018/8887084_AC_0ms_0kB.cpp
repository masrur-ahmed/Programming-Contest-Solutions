#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,num,x,cas,temp,sum;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&num);
        x=num;
        cas=0;
        while(1)
        {
            sum=0;
            while(x>0)
            {
                temp=x%10;
                sum=sum*10+temp;
                x=x/10;
            }
            if(num==sum)
            break;
            else
            {
                x=sum+num;
                num=sum+num;
                cas++;
            }
        }
        printf("%lld %lld\n",cas,sum);
    }
}