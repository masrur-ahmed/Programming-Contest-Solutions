#include <bits/stdc++.h>
using namespace std;
bool a[1000005];
int b[1000005];
bool prime[1000005];
void primeN(){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    int N=sqrt(1000005);
    for(long long int i=3 ; i<=N ; i+=2){
        if(prime[i]){
            for(int j=i*i ; j<=1000005 ; j+=i*2){
                prime[j]=false;
            }
        }
    }
    
}
int selfN(){
	primeN();
	memset(a,true,sizeof(a));
	int count=0,sum,temp;
	for(int i = 1 ; i < 1000005;i++){
		sum=i,temp=i;
		while(temp){
			sum+=(temp%10);
			temp/=10;
		}
		a[sum]=false;
	}
	for(int i = 1 ; i < 1000005 ;i++){
		if(a[i] && prime[i] && i%2!=0)count++;
		b[i]=count;
	}
}

int main() {
	selfN();
	int t,l,r,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&l,&r);
		ans=b[r]-b[l-1];
		printf("%d\n",ans);
	}
	return 0;
}