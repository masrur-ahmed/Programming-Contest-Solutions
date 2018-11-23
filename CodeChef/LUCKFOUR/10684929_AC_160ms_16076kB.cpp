#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int t,count=0;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
		cin>>s;
		int len=s.size();
		for(int i=0;i<len;i++){
			if(s[i]=='4')count++;
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}