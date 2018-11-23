#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	while(scanf("%d",&n)==1 &&n!=0){
	int lr,ld,m=n;
	string a;
	cin>>a;
	bool rl=false,dl=false;
	for(int i=0;i<n;i++){
		//cout<<a[i]<<"  ";
		
		if(a[i]=='Z'){
			m=0;
			break;
		}
		else if(a[i]=='R'){
			lr=i;
			rl=true;
			if(dl)m=min(m,i-ld);
		}
		else if(a[i]=='D'){
			ld=i;
			dl=true;
			if(rl)m=min(m,i-lr);
		}
	}
	printf("%d\n",m);
	}
	return 0;
}