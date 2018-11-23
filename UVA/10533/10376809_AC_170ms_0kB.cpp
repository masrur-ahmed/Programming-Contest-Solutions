#include <bits/stdc++.h>
using namespace std;
const long long int n=1000001;
bool prime[n];
int primes[n];
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
    for(long long int i=4; i<=n; i+=2){
        prime[i] = false;
    }
}
    /*void savePrimes(){
    allPrime.push_back(2);
    for(long long int i=3 ;i<=n ; i+=2){
        if(prime[i]){
            allPrime.push_back(i);
        }
    }
    }*/
    int sum(int n){
    int sum=0, r;
    while(n!=0){
            r=n%10;
            n/=10;
            sum += r;
        }
    return sum;
}
int main(){
	int t,count=0,x,y;
	seive();
    for(int i = 0; i<=1000000; i++){
        if(prime[i]==true && prime[sum(i)]==true){
            count++;
        }
        primes[i] = count;
    }
    scanf("%d",&t);
    while(t--){
    	scanf("%d %d",&x,&y);
    	printf("%d\n",primes[y]-primes[x-1]);
    }
}