#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main() {
	int t,sz,x,max=0,ne;
	string s;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
		getline(cin,s);
		stringstream ss;
		ss<<s;
		while(ss>>x){
			v.push_back(x);
		}
		sz=v.size();
		max=0;
		for(int i=0 ;i<sz ; i++){
			for(int j=i+1;j<sz;j++){
				ne=__gcd(v[j],v[i]);
				if(ne>=max)max=ne;
			}
			
		}
		printf("%d\n",max);
		v.clear();
	}
	return 0;
}