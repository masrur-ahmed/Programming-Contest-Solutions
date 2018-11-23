#include <iostream>
using namespace std;
int main()
{
    int num,x,y;
    while(scanf("%d",&num)==1)
    {
        x=y=1;
        while(x%num!=0)
        {
            x=(x*10)+1;
            x=x%num;
            y++;
        }
        printf("%d\n",y);
    }
    return 0;
}