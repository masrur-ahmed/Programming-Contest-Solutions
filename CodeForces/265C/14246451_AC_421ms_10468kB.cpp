#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	vector<int>right;
	vector<int>left;
	for(int i = 0 ; i < s.size() ; i++){
		if(s[i]=='r')right.push_back(i+1);
		else left.push_back(i+1);
	}
	for(int i = 0 ; i < right.size() ; i++)printf("%d\n",right[i]);
	
	for(int i = left.size()-1 ; i >= 0 ; i--)printf("%d\n",left[i]);
	
	return 0;
}