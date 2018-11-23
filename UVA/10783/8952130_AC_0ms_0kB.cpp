#include<bits/stdc++.h>
using namespace std;
int main(){
   int  x,y,j=1,test,i=0,sum;
   scanf("%d",&test);
   while (j<=test)
  {
scanf("%d %d",&x,&y);
      {
     sum=0;
      for (i=x;i<=y;i++)
      if (i%2!=0)
     sum=sum+i;
       printf("Case %d: %d\n",j++,sum);
       }
   }
}