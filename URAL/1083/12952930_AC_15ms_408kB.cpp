#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,res=1,y;
	string s;
	scanf("%d",&x);
	cin>>s;
	//cout<<s;
	y=s.size();
	for(int i=x ; i> 0 ; i-=y  )res*=i;
	printf("%d",res);
	return 0;
}