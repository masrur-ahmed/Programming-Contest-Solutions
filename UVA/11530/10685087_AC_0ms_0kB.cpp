#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	int t,count=0,cas=1;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
		getline(cin,s);
		int len=s.size();
		for(int i=0;i<len;i++){
			if(s[i]==' '||s[i]=='a'||s[i]=='d'||s[i]=='g' || s[i]=='j'||s[i]=='m' ||s[i]=='p'||s[i]=='t'||s[i]=='w')count++;
			else if(s[i]=='b'||s[i]=='e'||s[i]=='h' || s[i]=='k'||s[i]=='n' ||s[i]=='q'||s[i]=='u'||s[i]=='x')count+=2;
			else if(s[i]=='c'||s[i]=='f'||s[i]=='i' || s[i]=='l'||s[i]=='o' ||s[i]=='r'||s[i]=='v'||s[i]=='y')count+=3;
			else if(s[i]=='s' ||s[i]=='z')count+=4;
		}
		printf("Case #%d: %d\n",cas++,count);
		count=0;
	}
	return 0;
}