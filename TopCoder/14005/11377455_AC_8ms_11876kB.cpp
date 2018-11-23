#include <bits/stdc++.h>
using namespace std;
 
class VerySecureEncryption{
 public:
  string encrypt(string s,vector<int>v,int k){
	char m[s.size()];
	int l=v.size();
	
	while(k--){
		for(int i=0;i<l;i++){
			m[v[i]]=s[i];
		}
		s="";
	for(int i=0;i<v.size();i++)s+=m[i];
	}
	
	return s;
 }
};