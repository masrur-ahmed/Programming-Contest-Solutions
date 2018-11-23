#include <bits/stdc++.h>
using namespace std;
const long long int n=100000;
bool prime[n];
vector<int>allPrime;
void seive(){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    int N=sqrt(n);
    for(int i=3 ; i<=N ; i+=2){
        if(prime[i]){
            for(int j=i*i ; j<=n ; j+=i*2){
                prime[j]=false;
            }
        }
    }
    }
    int bs( int val){
    	int l = 0, r = allPrime.size()-1, mid;
 
    	while (l<=r)
    	{
    		if(val<allPrime[l]) return l-1;
            if(val>allPrime[r]) return r+1;
    		mid = (l+r)/2;
    		if(allPrime[mid]==val){  
            		return mid;
    		}
    		else if (allPrime[mid]>val){
    			r=mid-1;
    		}
    		else{
    			l = mid+1;
    		}
    	}
    	return allPrime.size()-1;
    }
 
    void savePrimes(){
    allPrime.push_back(1);  
    allPrime.push_back(2);
    for(int i=3 ;i<=n ; i+=2){
        if(prime[i]){
            allPrime.push_back(i);
        }
    }
    }
    int main(){
    	seive();
    	savePrimes();
    	int a,b,t;
    	scanf("%d",&t);
    	while(t--){
    		scanf("%d %d",&a,&b);
    		int x=bs(a+b+1);
    		//printf("%d\n",allPrime[x]);
    		if(a+b<allPrime[x])printf("%d\n",allPrime[x]-(a+b));
    		else printf("%d\n",allPrime[x+1]-(a+b));
    	}
    }