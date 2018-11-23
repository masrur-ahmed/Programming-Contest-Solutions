#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k,ans;
	cin>>n>>k;
	if(k<=n){
		if(k%2==0)ans=(k/2)-1;
		else ans=(k/2);
	}
	else {
		if(k%2==0)ans=n-((k/2)-1);
		else ans=n-(k/2);
	}
	if(ans>=0)cout<<ans;
	else cout<<0;
	return 0;
}