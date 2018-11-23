#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string,int>m;
	map<string,string>pw;
	pw["purple"]="Power";
	pw["green"]="Time";
	pw["blue"]="Space";
	pw["orange"]="Soul";
	pw["red"]="Reality";
	pw["yellow"]="Mind";
	m["purple"]=0;
	m["green"]=0;
	m["blue"]=0;
	m["orange"]=0;
	m["red"]=0;
	m["yellow"]=0;
	vector<string>v; 
	int n,count=0;
	string s;
	scanf("%d",&n);
	cin.ignore();
	
	for(int i = 0 ; i < n ; i++){
		cin>>s;
		m[s]++;
	}
	for (map<string,int>::iterator it=m.begin(); it!=m.end(); ++it){
		if(it->second ==0) {
			count++;
			v.push_back(pw[it->first]);
		} 
	}
	printf("%d\n",count);
	for(int i = 0 ; i < v.size() ; i++)cout<<v[i]<<'\n';
	return 0;
}