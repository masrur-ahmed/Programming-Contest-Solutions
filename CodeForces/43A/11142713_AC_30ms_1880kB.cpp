#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	scanf("%d",&t);
	map<string,int>m;
	string s;
	while(t--){
		cin>>s;
		
		m[s]++;
	}
	int max=0;
	string j;
	 for (map<string,int>::iterator it=m.begin(); it!=m.end(); ++it){
	 	
	 	if((it->second)>max){
	 		max=it->second;
	 		j=it->first;
	 		
	 	}
	 }
	 cout<<j<<"\n";
	return 0;
}