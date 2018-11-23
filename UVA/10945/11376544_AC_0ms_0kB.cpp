#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(getline(cin,s) && s!="DONE"){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		s.erase(remove(s.begin(),s.end(),'.'),s.end());
		s.erase(remove(s.begin(),s.end(),','),s.end());
		s.erase(remove(s.begin(),s.end(),' '),s.end());
		s.erase(remove(s.begin(),s.end(),'!'),s.end());
		s.erase(remove(s.begin(),s.end(),'?'),s.end());
		if(s==string(s.rbegin(),s.rend()))printf("You won't be eaten!\n");
		else printf("Uh oh..\n");
	}
	return 0;
}