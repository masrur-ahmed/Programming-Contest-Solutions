#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n;
	cin>>n>>s;
	bool b[27];
	bool check=false;
	memset(b,false,sizeof(b));
	for(int i = 0 ; i < n ;i++){
		if(!b[s[i]-'a']){
			b[s[i]-'a']=true;
		}
		else{
			check=true;
			break;
		}
	}
	if(check || n==1)printf("Yes");
	else printf("No");
	return 0;
}