#include <bits/stdc++.h>
using namespace std;

int main() {
string s,str;
s="`1234567890-=QWERTYUIOP[]ASDFGHJKL;'\\ZXCVBNM,./";
while(getline(cin,str)){
	for(int i=0 ; i<str.length() ; i++){
		for(int j=0 ; j<s.length() ; j++){
			
			if(str[i]==' '){
				printf(" ");
				break;
			}
			if(str[i]==s[j]){
                printf("%c",s[j-1]);
                break;
            }
		}
	}
	printf("\n");
}
}