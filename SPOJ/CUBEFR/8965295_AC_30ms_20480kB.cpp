#include <bits/stdc++.h>
using namespace std;
const long long int n=1000000;
int arrays[n];
bool con[n]; 
void seive(){
    memset(con,true,sizeof(con));
     for(int i=2,k;(k=i*i*i)<=n;++i){
          for(int j=k;j<=n;j+=k){
               con[j]=false;
          }
     }
     int count=1;		
     for(int i=1;i<=n;++i){		
          if(con[i]){
               arrays[i]=count++;
          }    
    }
}
    
int main() {
    seive();
      int t,n;
     scanf("%d",&t);
    
     for(int i=1;i<=t;++i)
     {
          scanf("%d",&n);
          if(con[n]){
               printf("Case %d: %d\n",i,arrays[n]);
          }          
          else{
              printf("Case %d: Not Cube Free\n",i); 
          }
     }
     return 0;
}