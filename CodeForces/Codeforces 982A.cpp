#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	scanf("%d",&n);
	cin.ignore();
	cin>>s;
	bool b=true;
	//cout<<s<<endl;
	if(n==1 && s[0]=='0')b=false;
	else { 
		for(int i = 1 ; i < n ; i++){
		
			if(s[i]==s[i-1])b=false;
	
	
			}
		
	}
	if(b)printf("Yes");
	else printf("No");
	return 0;
}