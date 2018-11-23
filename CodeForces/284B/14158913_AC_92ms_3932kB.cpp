#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a=0,f=0,i=0;
	scanf("%d",&n);
	string s;
	cin.ignore();
	cin>>s;
	for(int j = 0 ; j < n ; j++){
		if(s[j]=='A')a++;
		else if(s[j]=='F')f++;
		else i++;
	}
	if(i>=2)printf("0");
	else if(i==1)printf("1");
	else printf("%d",a);
}