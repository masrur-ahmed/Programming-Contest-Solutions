#include <bits/stdc++.h>
using namespace std;
int main() {
	string s,s1;
	cin>>s>>s1;
	int count=0;
	for(int i = 0 ; i < s1.size() ; i++){
		if(s1[i]==s[count])count++;
	}
	printf("%d",count+1);
	return 0;
}