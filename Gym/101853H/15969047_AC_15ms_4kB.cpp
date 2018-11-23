#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    scanf("%d",&cases);
    while(cases--)
    {
        int a;
        scanf("%d",&a);
        a = a/6;
        double num = sqrt(a);
        a = num;
        printf("%d\n",a);
    }
    return 0;
}
