#include <bits/stdc++.h>
 
    using namespace std;
    bool toSort(pair<long long int,long long int>x, pair<long long int,long long int>y) {
	if (x.first>y.first)return true;
	else return false;
 
    }
 
int main() {
    long long int t;
    scanf("%lld",&t);
    vector<pair<long long int,long long int>>v;
    while(t--){
     long long int x,y;
     scanf("%lld %lld",&x,&y);
     v.push_back(make_pair(y,x));
    }
    stable_sort(v.begin(), v.end(),toSort);
    for (int i=0;i<v.size();i++) {
	printf("%lld %lld\n",v[i].second,v[i].first);
    }
}
 
