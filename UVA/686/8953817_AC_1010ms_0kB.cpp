#include <bits/stdc++.h>
    using namespace std;
const int n=32768;
bool prime[n];
vector<int>primes;
void seive(){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    int N=sqrt(n);
    for( int i=3 ; i<=N ; i+=2){
        if(prime[i]){
            for(int j=i*i ; j<=n ; j+=i*2){
                prime[j]=false;
            }
        }
    }
}
void savePrimes(){
    primes.push_back(2);
    for(long long int i=3 ;i<=n ; i+=2){
        if(prime[i]){
            primes.push_back(i);
        }
    }
}

int main() {
    seive();
    savePrimes();
    int test;
    int count=0;
    while(scanf("%d",&test)==1){
    	if(test==0){
    		break;
    	}
        int loop=test/2;
        for(int i=0 ;i<=loop;i++){
        	for(int j=0;j<=i;j++){
                if(primes[i]+primes[j]==test){
                count++;
                }
            }
        	
        }
        
       
        printf("%d\n",count);
        count=0;
    }
    return 0;
}