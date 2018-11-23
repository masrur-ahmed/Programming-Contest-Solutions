#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,x,t;
    scanf("%d",&t);
    vector<int>v;
    for(int i = 1 ; i <= t ; i++){
        scanf("%d %d",&n,&k);
        for(int i = 0 ; i < n ;i++){scanf("%d",&x);v.push_back(x);}
        
        x=0;
        for(int i = 0 ; i < n ; i++){
            x+=(v[i]/k);
        }
        printf("%d\n",x);
        v.clear();
    }
	return 0;
}