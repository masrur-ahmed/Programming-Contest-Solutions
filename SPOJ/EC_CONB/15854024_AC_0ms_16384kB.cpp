#include <bits//stdc++.h>

using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REPB(i,n) for(int i=(n);i>=0;i--)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
 
#define sf scanf
#define pf printf 
 
 
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sfl1(x) scanf("%lld",&x)
#define sfl2(x,y) scanf("%lld %lld",&x,&y)
#define sfl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define sfs(str) scanf("%s",str)
#define pf1(x) printf("%d",x)
#define pf2(x,y) printf("%d %d",x,y)
#define pf3(x,y,z) printf("%d %d %d",x,y,z)
#define pfl1(x) printf("%lld",x)
#define pfl2(x,y) printf("%lld %lld",x,y)
#define pfl3(x,y,z) printf("%lld %lld %lld",x,y,z)
#define newL printf("\n")
#define casePrint(i,x)cout<<"Case #"<<i<<": "<<x<<'\n';
 
 
typedef long int i32;
typedef unsigned long int ui32;
typedef long long int i64;
typedef unsigned long long int  ui64;
 
int i=0,j=0,k=0,t;
int arr[1005];
int ar[1005];

string rev(string s){
	int l=0;
	string s1="";
	bool f=true;
	for(int i= 0 ; i < s.length() ; i++){
		if(!f)s1+=s[i];
		else if(f && s[i]=='1'){
			f=false;
			s1+=s[i];
		}
	}
	reverse(s1.begin(),s1.end());
	return s1;
}
int main(){
    int k,n;
    i32 x;
    string bin;
    ui64 sum=0,dec;
    sf1(t);
    FOR(i,1,t){
    	cin>>x;
    	if(x%2==0){
    		bin=std::bitset<32>(x).to_string();
    		//cout<<bin<<endl;
    		bin=rev(bin);
    		//cout<<bin<<endl;
    		dec=std::bitset<32>(bin).to_ulong();
    		cout<<dec<<"\n";
    	}
    	else cout<<x<<"\n";
    	
    }
    
}

