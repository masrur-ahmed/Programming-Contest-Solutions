#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	v.push_back(a*b+c);
	v.push_back(a*b-c);
	v.push_back(a+b*c);
	v.push_back(a-b*c);
	v.push_back(a-b+c);
	v.push_back(a+b-c);
	v.push_back(a*b+c);
	v.push_back(a*b*c);
	v.push_back(a+b+c);
	v.push_back(a-b-c);
	sort(v.begin(),v.end());
	printf("%d\n",v[0]);
	return 0;
}