#include<bits/stdc++.h>
int main(){
int t,dust,c,tot;
scanf("%d",&t);
for(int i=1;i<=t;i++){
scanf("%d",&dust);
for(int i=0;i<dust;i++){
scanf("%d",&c);
if(c>0){tot+=c;}
}
printf("Case %d: %d\n",i,tot);
tot=0;
}
}
