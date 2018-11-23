#include <bits/stdc++.h>
using namespace std;
const long long int n=2005;
bool prime[n];
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
    map<char,int>mp;
    int main(){
    seive();
    int test,cas=1;
    scanf("%d",&test);
    string k;
    getline(cin,k);
    while(test--){
    string c;
    getline(cin,c);
    char s;
    vector<char>v;
    bool b=true;
    for(int i=0 ; i<c.size();i++){
    	mp[c[i]]++;
    }
    map<char, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
       {
    	if(prime[it->second]){
    		v.push_back(it->first);
    		b=false;
    	}
    	//cout<<it->first<<"\n";
    }
    //it.clear();
    if(b){
    	printf("Case %d: empty\n",cas++);
    	
    }
    else{
    	printf("Case %d: ",cas++);
    	for(int i=0; i<v.size() ;i++){
    		cout<<v[i];
    	}
    	printf("\n");
    }
    v.clear();
    mp.clear();
    }
    }