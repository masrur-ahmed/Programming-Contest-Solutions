#include<bits/stdc++.h>
int main(){
int t,dust,c,tot,cas=1;
scanf("%d",&t);
while(t--){
scanf("%d",&dust);
while(dust-- && scanf("%d",&c)==1){
if(c>0){tot+=c;}
}
printf("Case %d: %d\n",cas++,tot);
tot=0;
}
}
