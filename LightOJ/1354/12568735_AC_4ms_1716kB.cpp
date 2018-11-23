#include <bits/stdc++.h>
using namespace std;
string tostring(int n){
	string n1,x;
	stringstream ss;
	ss<<n;
	while(ss>>n1){
		x=n1;
	}
	return x;
	
}
string binary(int n){
	 //while(n>1){
	// 	s+=to_string(n%2);
	// 	n=n/2;
	// }
	if(n>1)return binary(n/2)+tostring(n%2);
	else return tostring(n%2);
}
int cng(string s){
	int n,x;
	stringstream ss;
	ss<<s;
	while (ss>>n){
		x=n;
	}
	return x;
	
}
int main() {
	int t,cas=1;
	int a,b,c,d,e,f,g,h;
	//printf("%d",cng(binary(65)));
	scanf("%d",&t);
	 while(t--){
	 	scanf("%d.%d.%d.%d",&a,&b,&c,&d);
	 	scanf("%d.%d.%d.%d",&e,&f,&g,&h);
	 	int w=cng(binary(a)),x=cng(binary(b)),y=cng(binary(c)),z=cng(binary(d));
	 	if(w==e && x==f && y==g && z==h)printf("Case %d: Yes\n",cas++);
	 	else printf("Case %d: No\n",cas++);
	 }
	
	return 0;
}