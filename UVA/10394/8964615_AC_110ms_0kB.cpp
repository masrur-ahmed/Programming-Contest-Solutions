#include <bits/stdc++.h>
using namespace std;
const long long int n=20000000;
bool prime[n];
vector<long long int>primes;
vector<pair<long long int,long long int>>tprimes;

void seive(){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    int N=sqrt(n);
    for(long long int i=3 ; i<=N ; i+=2){
        if(prime[i]){
            for(int j=i*i ; j<=n ; j+=i*2){
                prime[j]=false;
            }
        }
    }
}

void findPair(){
    
    for(long long int i=3 ; i<n ; i+=2){	
    	if(prime[i] && prime[i+2]){
    		tprimes.push_back(make_pair(i,i+2));
    	}
    }	
}

int main() {
    seive();
    findPair();
    int test;
    while(scanf("%d",&test)==1 ){
        printf("(%lld, %lld)\n",tprimes[test-1].first,tprimes[test-1].second);
    }
}
