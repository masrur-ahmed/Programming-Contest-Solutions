#include <bits/stdc++.h>
    using namespace std;

int main() {
    vector<pair<int,int>>v;
    int x;
    while(scanf("%d",&x)==1){
        bool flag=true;
        for(int i=0 ;i<v.size() ;i++){
            if(x==v[i].first){
                v[i].second++;
                
                flag=false;
            }
            
        }
        if(flag)v.push_back(make_pair(x,1));
    }
    for(int i=0 ;i<v.size();i++){
        printf("%d %d\n",v[i].first,v[i].second);
    }
    return 0;
}