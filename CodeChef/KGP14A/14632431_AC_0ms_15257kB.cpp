#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,x;
    scanf("%d",&n);
    vector<int>v;
    vector<int>v1;
    for(int i = 1 ; i <= n ; i++){
        scanf("%d",&k);
        for(int i = 0 ; i < k ;i++){scanf("%d",&x);v.push_back(x);}
        for(int i = 0 ; i < k ;i++){scanf("%d",&x);v1.push_back(x);}
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        x=0;
        for(int i = 0 ; i < k ; i++){
            x+=abs(v[i]-v1[i]);
        }
        printf("Case %d: %d\n",i,x);
        v.clear();
        v1.clear();
    }
	return 0;
}