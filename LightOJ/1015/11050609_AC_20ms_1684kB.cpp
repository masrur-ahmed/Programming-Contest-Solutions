#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,dust,con;
    cin>>t;
    string s;
    
    //cin.ignore();
    
    for(int i=1;i<=t;i++)
    {
      //getline(cin,s);
      int sum=0;
      
      cin>>con;
      for(int i=0;i<con;i++)
      {
          cin>>dust;
          if(dust>0)
          {
              sum=sum+dust;
          }
      }
      
      cout<<"Case "<<i<<": "<<sum<<"\n";
      
      
    }
    
    return 0;
}
