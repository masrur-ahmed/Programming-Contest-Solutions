#include <bits//stdc++.h>
using namespace std;
set<char>stc;
int main() {
	int n,x;
	scanf("%d",&n);
	int  l = 0, r=n-1;
	bool b = true,b1=false;
	string s;
	char c;
	cin.ignore();
	for(int  i = 0; i < n ; i++){
		cin>>s;
		if(i==0)c=s[0];
		//cout<<s<<endl;
		//printf("%d %d\n",l,r);
		x=0;
		for(int m = 0 ; m < n ; m++){if(c==s[m])x++;stc.insert(s[m]);}
		if(s[l]!=s[r] || stc.size()!=2 || (x!=2 && r!=l) || (x!=1 && r==l)){
			b=false;
			
			break;
		}
		if(r==l || b1){r++;l--;b1=1;}
		else {r--;l++;}
		//stc.clear();
	}
	if(b)printf("YES");
	else printf("NO");
	return 0;
}