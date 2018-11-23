#include <bits/stdc++.h>
using namespace std;
 
class DeerInZooDivTwo{
 public:
  vector<int> getminmax(int n, int k){
    vector<int>v;
    if(n>=k){
    	v.push_back(n-k);
    	v.push_back(n-ceil(k/2.0));
    	return v;
    }
    else{
    	v.push_back(0);
    	v.push_back(n-ceil(k/2.0));
    	return v;
    }
 }
};