#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p;
	scanf("%d %d",&n,&p);
	string s,s1; 
	cin.ignore();
	cin>>s;
	s1=s;
	replace(s.begin(), s.end(), '.', '0');
//	cout<<s1;
	bool b=false;
	if(s[0]==s[p] && s1[p]=='.'){s[p]='1';cout<<s;return 0;}
	else{
		int k=p+1,i=1;
		while(k<n){
			if(s[k]==s[i] && (s1[k]=='.' || s1[i]=='.') ){
				if(s1[k]=='.')s[k]='1';
				else if (s1[i]=='.')s[i]='1';
				b=true;
				break;
			}
			if(s[k]!=s[i] ){b=true;break;}
			k++,i++;
		}
	}
	if(b)cout<<s;
	else cout<<"No";
	return 0;
}