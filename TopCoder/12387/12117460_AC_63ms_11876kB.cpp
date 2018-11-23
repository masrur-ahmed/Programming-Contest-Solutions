#include <bits/stdc++.h>
using namespace std;
 
class EasyHomework{
 public:
  string determineSign(vector<int>v){
    int sz=v.size(),zero=0,neg=0;
    for(int i=0 ; i<sz ;i++){
    	if(v[i]==0)zero++;
    	else if(v[i]<0)neg++;
    }
    if(zero!=0)return "ZERO";
    else if(neg%2==0)return "POSITIVE";
    else if (neg>0 ) return "NEGATIVE";
    else return "POSITIVE";
 }
};