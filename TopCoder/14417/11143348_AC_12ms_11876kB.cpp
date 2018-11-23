#include <bits/stdc++.h>
using namespace std;
 
class SortingSubsets{
 public:
 int getMinimalSize(vector<int>v){
  vector<int>v1(v);
  sort(v.begin(),v.end());
  int n=v.size(),c=0;
  for(int i=0;i<n;i++){
  	if(v[i]!=v1[i])c++;
  }
  return c;
 }
};