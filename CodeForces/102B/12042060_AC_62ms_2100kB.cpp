#include <bits/stdc++.h>
using namespace std;

int main() {
	string num;
	getline(cin,num);
	int c=0;
	while(num.size()!=1){
		int sum=0,sz=num.size();
		for(int i=0;i<sz;i++){
			sum+=num[i]-'0';
		}
		stringstream ss;
		ss<<sum;
		ss>>num;
		c++;
	}
	printf("%d\n",c);
	return 0;
}