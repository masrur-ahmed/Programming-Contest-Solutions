#include<bits/stdc++.h>
int main()
{

   int test,x,a,b;
   scanf("%d", &test);
   for(x=1; x<=test; x++)
   {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n",x,(a+b));
   }
   return 0;
}