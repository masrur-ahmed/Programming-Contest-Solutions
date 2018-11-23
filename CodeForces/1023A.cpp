#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	int sl,tl;
	cin>>sl>>tl>>s>>t;
	bool b= true,nfound=true;
	for(int i = 0 ; i < sl && nfound ; i++){
		if(s[i]=='*')nfound=false;
		else if(s[i]!=t[i]){
			b=false,nfound=false;
			
		}
	}
	if(b){
		for(int i = sl-1,j=tl-1 ; i>=0 && j>=0 ;i--,j--){
			if(s[i]=='*')break;
			else if(s[i]!=t[j]){
				b=false;
			//	cout<<"hi"<<endl;
				break;
			}
		}
	}
	if(b && sl-1<=tl)printf("YES");
	else printf("NO");
	return 0;
}