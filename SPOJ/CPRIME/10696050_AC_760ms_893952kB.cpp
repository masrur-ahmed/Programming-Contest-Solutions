#include <bits/stdc++.h>
    using namespace std;
long long int primes[100000003];
long long int n=100000000;
long long int len=1;
long long int seive()
{
    bool prime[n];
    memset(prime,true,sizeof(prime));
    
    prime[0]=prime[1]=false;
    for(long long int i=4;i<=n;i=i+2)
    {
        prime[i]=false;
    }
    
    long long int N=sqrt(n);
    // primes.push_back(0);
    // primes.push_back(0);
    // primes.push_back(1);
    for(long long int i=3;i<=N;i=i+2)
    {
        if(prime[i])
        {
            //primes.push_back((primes[i-2]+1));
            for(long long int j=i*i;j<=n;j=j+i*2)
            {
                //primes.push_back((primes[i-1]));
                prime[j]=false;
            }
        }
    }
    
    primes[0]=2;
    for(long long int i=3 ;i<=n ; i+=2){
        if(prime[i]){
            primes[len++]=i;
        }
        
    }
    
}
int search(int value){
    int start=0,length=len-1,mid=len/2;
    while(start<=length){
    	 
        if(primes[start]>value)return start-1;
        if(value>primes[length])return length;
        mid=(length+start)/2;
        if(primes[mid]==value)
        {  
        	 
            return mid;
        }
        else if (primes[mid]>value){
        	 
            length=mid-1;
        }
        else{
        	 
            start= mid+1;
        }
    }
   
    return len-1;
}
int main() {
    long long int x,r;
    double a,b,c,d;
    seive();
    while(scanf("%lld",&x)==1&&x!=0)
    {
        r=search(x)+1;
        a=(double)r;
        b=((double)x/log(x));
        c=abs(a-b);
        
        d=(c/a)*100.0;
        
        printf("%.1lf\n",d);
    }
    
    
    return 0;
}