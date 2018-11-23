#include <bits/stdc++.h>
using namespace std;
 
class ParenthesesDiv2Easy{
 public:
 int getDepth(string s){
  int c=0,depth=0;
  for(int i=0;i<s.size();i++){
  	if(s[i]=='(')c++;
  	else c--;
  	depth=max(depth,c);
  }
  return depth;
  
 }
};