#include<bits/stdc++.h>
using namespace std;
int convert(string s){
	int sum=0;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0;i<s.length();i++){
		if(s[i]>=92 && s[i]<=122)sum+=(int)s[i]-'a'+1;
	}
	if(sum%9==0)return 9;
	else return sum%9;
}

int main(){
	int t,sz=10,n,h,l,cas=1;
	scanf("%d",&t);
	//int a[sz];
	//printf("Lumberjacks:\n");
	double r;
	string name1,name2;
	while(getline(cin,name1) && getline(cin,name2)){
		h=convert(name1);
		l=convert(name2);
		if(h>=l){
		r=(((double)l)/h)*100;
		printf("%.2lf %\n",r);
		}
		else{
		r=(((double)h)/l)*100;
		printf("%.2lf %\n",r);
		}
		//printf("%d %d\n",h,l);
	}
	
}