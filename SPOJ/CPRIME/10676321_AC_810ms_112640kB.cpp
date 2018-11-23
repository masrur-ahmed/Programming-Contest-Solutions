#include <bits/stdc++.h>
using namespace std;
const long long int n=100000000;
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
    int bs( int val, int len){
    	int l = 0, r = len, mid;
 
    	while (l<=r)
    	{
    		if(val<allPrime[l]) return l-1;
            	if(val>allPrime[r]) return r;
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
    for(long long int i=3 ;i<=n ; i+=2){
        if(prime[i]){
            allPrime.push_back(i);
        }
    }
    }
    int main(){
    	seive();
    	savePrimes();
    	long long int x;
    	while(scanf("%lld",&x)==1&&x!=0){
    		int findp=bs(x,allPrime.size()-1);
    		double perc=abs(findp-(x/log(x)))*100;
    		double ans=perc/(double)findp;
    		printf("%.1lf\n",ans);
    		//printf("%d\n",allPrime.size());
    		
    	}
    }
