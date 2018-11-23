#include <bits/stdc++.h>
using namespace std;

int main() {
	char s1[101], s2[101];
	int count=0;
	scanf("%s\n%s",&s1,&s2);
	for(int i= strlen(s1)-1 ,j=0;i>=0 ;i--,j++ ){
			if(s1[i]!=s2[j]){
				count=1;
				break;
			}
	}
	if(count==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}