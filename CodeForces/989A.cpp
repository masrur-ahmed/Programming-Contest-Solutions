#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; 
	cin>>s;
	if(s.find("ABC") != std::string::npos)printf("Yes");
	else if (s.find("ACB") != std::string::npos)printf("Yes");
	else if (s.find("BAC") != std::string::npos)printf("Yes");
	else if (s.find("BCA") != std::string::npos)printf("Yes");
	else if (s.find("CAB") != std::string::npos)printf("Yes");
	else if (s.find("CBA") != std::string::npos)printf("Yes");
	else printf("No");
	return 0;
}