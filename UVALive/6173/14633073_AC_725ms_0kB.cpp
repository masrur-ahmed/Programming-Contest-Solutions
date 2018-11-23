#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,x,t,ans;
    scanf("%d",&t);
    //vector<int>v;
    string s;
    for(int i = 1 ; i <= t ; i++){
        scanf("%d %d",&n,&k);
        cin>>s;
        --k;
        //cout<<n<<" "<<s<<" "<<k<<" "<<endl;
        for(int i = s.size() - 1 ; i >= 0 ; i--){
            x+=(s[i]-'0')%k;
        }
        ans=x%k;
        x=0;
        printf("%d %d\n",i,ans);
    }
	return 0;
}