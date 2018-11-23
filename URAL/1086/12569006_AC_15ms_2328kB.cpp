#include <bits/stdc++.h>
using namespace std;
const long long int n=1000000;
bool prime[n];
vector<long long int>allPrime;
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
    allPrime.push_back(2);
    for(long long int i=3 ;i<=n ; i+=2){
        if(prime[i]){
             allPrime.push_back(i);
        }
    }
}
int main() {
	seive();
	savePrimes();
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",allPrime[n-1]);
	}
	//printf("%d",allPrime.size());
	return 0;
}