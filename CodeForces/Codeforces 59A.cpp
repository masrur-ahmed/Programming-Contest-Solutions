#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int sz=(int)s.size(),count=0;
	for(int i = 0 ; i < sz ; i++ ){
		if(s[i]>=65 && s[i]<=90 )count++;
	}
	if(count>(sz-count))transform(s.begin(), s.end(), s.begin(), ::toupper);
	else transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout<<s<<endl;
	return 0;
}