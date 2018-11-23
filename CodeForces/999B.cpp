#include<bits/stdc++.h>
 using namespace std;
 vector<int>v;
void div(int n){
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)v.push_back(i);
 
            else{
            	v.push_back(i);
            	v.push_back(n/i);
            }
        }
    }
}
int main(){
 	int n,sz;
 	scanf("%d",&n);
 	cin.ignore();
 	string s,sb="";
 	cin>>s;
 	div(n);
 	sort(v.begin(),v.end());
 	sz=v.size()-1;
 	for(int i = 1 ; i <sz ; i++ ){
 		
 		sb.append(s,0,(v[i]));
 		reverse(sb.begin(),sb.end());
 		s.erase (s.begin(),s.begin()+(v[i]));
 		s.insert(0,sb);
 		//cout<<sb<<"__Hello__"<< s << "  "<< v[i]-1<<endl;
 		sb="";
 		
 	}
 	reverse(s.begin(),s.end());
 	cout<<s;
 }