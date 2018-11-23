#include <bits/stdc++.h>
using namespace std;
 
class BearPair{
 public:
 int bigDistance(string s){
  int l=s.size()-1,m=-1;
  for(int i=0 ;i<=l;i++){
  	for(int j=i+1 ;j<=l;j++){
  		if(s[i]!=s[j])m=max(m,j-i);	
  	}
  }
  return m;
 }
};