#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	string s;
	scanf("%d",&n);
	cin.ignore();
	while(n--){
		getline(cin,s);
		int sz=s.size();
		bool b=true,c=true;
		if(s[sz-1]=='.' && s[sz-2]=='a' && s[sz-3]=='l' && s[sz-4]=='a' && s[sz-5]=='l'){
			 if((s[sz-6]>=65 &&s[sz-6]<=90 )|| (s[sz-6]>=97 || s[sz-6]<=122))b=false;
		}
		 if(s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.'){
			if((s[5]>=65 &&s[5]<=90 )|| (s[5]>=97 || s[5]<=122))c=false;
		}
		if(!b && !c)printf("OMG>.< I don't know!\n");
		else if(!b)printf("Freda's\n");
		else if(!c)printf("Rainbow's\n");
		else printf("OMG>.< I don't know!\n");
	}
	return 0;
}