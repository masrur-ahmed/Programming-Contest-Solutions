#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,res=0;
	scanf("%d %d",&n,&k);
	cin.ignore();
	while(n--){
		string s;
		cin>>s;
		int sz=s.size(),count=0;
		map<char,int>m;
		for(int i=0 ; i < sz ; i++ ){
			int z= s[i]-'0';
			if(z<=k && m[z]==0){
				m[z]++;
				count++;
			}
			//printf("%d\n",count);
			//cout<<s<<endl;
		}
		if(count==k+1)res++;
	}
	printf("%d",res);
	return 0;
}