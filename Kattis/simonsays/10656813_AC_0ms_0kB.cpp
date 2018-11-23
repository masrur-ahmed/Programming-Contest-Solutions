#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string ig;
	scanf("%d",&t);
	getline(cin,ig);
	while(t--){
		string s;
		getline(cin,s);
		bool f=false;
		int j=s.find("Simon says");
		if(j==0){
			for(int i=11;i<s.size(); i++)cout<<s[i];	
			f=true;
		 }
		
		if(f)printf("\n");
		f=false;
		
	}
	return 0;
}