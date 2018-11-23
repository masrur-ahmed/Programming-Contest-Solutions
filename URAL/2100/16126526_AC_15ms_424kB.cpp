#include <bits//stdc++.h>
using namespace std;

int main() {
	int total=2,t;
	string s;
	scanf("%d",&t);
	for(int  i = 0 ; i < t ; i++){
		cin>>s;
		total++;
		if(s.find('+')!=string::npos)total++;
	}
	if(total==13)total++;
	printf("%d",(total*100));
}