#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long int x,sz;
	string s;
	scanf("%d",&n);
	map<long long int,int>m;
	bool check[n];
	bool check2[n];
	memset(check,true,sizeof(check));
	memset(check2,true,sizeof(check2));
	for(int i=0 ; i < n ; i++){
		scanf("%lld",&x);
		m[x]=i;
	}
	cin.ignore();
	cin>>s;
	map<long long int,int>::iterator it;
	vector<int>v;
	for(int i = 0 ; i < 2*n ; i++){
		if(s[i]=='0'){
		 	 it = m.begin();
		 	 for(;it!=m.end() ; it++)
		 	 {
		 	 	if(check[it->second]){
		 	 		v.push_back(it->second);
		 	 		check[it->second]=false;
		 	 		break;
		 	 	}
		 	 }
		}
		else {
			it =m.end();
			--it;
		 	 for(;it!=--(m.begin()) ; --it)
		 	 {
		 	 	//cout<< it->second << "  " << check[it->second] << "  " << check2[it->second]<< endl;
		 	 	if(!check[it->second] && check2[it->second] ){
		 	 		v.push_back(it->second);
		 	 		check2[it->second]=false;
		 	 		break;
		 	 	}
		 	 }
		}
	}
	sz=v.size();
	for(int i = 0 ; i <  sz ; i++ ){
		printf("%d ",v[i]+1);
	}
	return 0;
}

