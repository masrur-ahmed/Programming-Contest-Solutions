#include <bits/stdc++.h>
  using namespace std;

int main() {
  
  int n,sz1,sz3,count=0,mn;
  scanf("%d",&n);
  string s1[n],s3[n];
  cin.ignore();
  for(int i = 0 ; i < n ; i++ ){
    cin>>s1[i];
  }
  sort(s1,s1+n);
  for(int i = 0 ; i < n ; i++ ){
    cin>>s3[i];
  }
  sort(s3,s3+n);
  
  for(int i = 0 ; i < n ; i++){
    if(s3[i].compare(s1[i])!=0){
      count+=(abs((int)s3[i].size() - (int)s1[i].size()));
      
      for(int j = 0 ; j < min(s3[i].size(), s1[i].size()) ; j++){
        if((int)s1[i][j] != (int)s3[i][j])count++;
        
      }
    }
  }
  
  printf("%d\n",count);
  return 0;
}