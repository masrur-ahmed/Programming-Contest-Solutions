#include <bits/stdc++.h>
    using namespace std;

int main() {
    string a,b; 
    getline(cin,a);
    getline(cin,b);
    int len=a.length();
    
    for(int i=0;i<len;i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    
//    sort(a,a+len);
//    sort(b,b+len);
//    
//    for(int i=0;i<len;i++)
//    {
//        if(a[i]==b[i])
//        {
//            s1++;
//        }else if(a[i]>b[i])
//        {
//            s2++;
//        }else if(a[i]<b[i])
//        {
//            s3++;
//        }
//        
//    }
    
    if(a<b)
    {
        cout<<"-1"<<"\n";
    }else if(a>b)
    {
        cout<<"1"<<"\n";
    }else
    {
        cout<<"0"<<"\n";
    }
    return 0;
}