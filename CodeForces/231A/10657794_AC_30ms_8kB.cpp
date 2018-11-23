#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	cin.ignore();
	string s;
	int count=0;
	while(t--){
		getline(cin,s);
		if((s[0]=='1' && (s[2]=='1' ||s[4]=='1')) || (s[2]=='1' && (s[0]=='1' ||s[4]=='1')) ||(s[4]=='1' && (s[0]=='1' ||s[2]=='1')))count++;
	}
	printf("%d\n",count);
	return 0;
}