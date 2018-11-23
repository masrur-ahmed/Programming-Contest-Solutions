#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,count=0,sz,ini;
	string s;
	set<string>c;
	scanf("%d",&n);
	cin.ignore();
	for(int i=0 ; i < n ; i++){
		cin>>s;
		sz=s.size();
		sort(s.begin(), s.end());
		s.erase(unique(s.begin(), s.end()), s.end());
		
		c.insert(s);
//	printf("%d %d\n",c.size(),count);
	}
	printf("%d",c.size());
	return 0;
}