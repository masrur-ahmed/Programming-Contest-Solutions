#include <bits/stdc++.h>
using namespace std;
const long long int n=1000000;
bool prime[n];
vector<long long int>primes;
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
    long long int test;
    while(scanf("%lld",&test)==1&& test!=0){
    bool con=false;
    long long int r=primes.size()-1;
    if(primes[r/2]>test){
     r/=2;
    } 
 
    int l=0;
    long long int temp;
    while(l<=r){
     temp =primes[l]+primes[r];
     if(temp==test){
      con=true;
      break;
     }
     else if(temp > test){
      r--;
     }
     else{
      l++;
     }
    }
    if(con){
 
     printf("%lld:\n%lld+%lld\n",test,primes[l],primes[r]);
    }
    else{
     printf("%lld:\nNO WAY!\n",test,primes[l],primes[r]);
    }
    }
    }