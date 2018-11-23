#include <bits/stdc++.h>
using namespace std;

int main() {
	int number,ans=0,min,remain;
	scanf("%d %d",&number,&min);
	int array[min];
	for(int i=0 ; i<min ; i++){
		scanf("%d",&array[i]);
	}
	remain=number;
	for(int i=0 ; i<min ; i++){
		if(remain>=array[i]){
		remain-=array[i];
		}
		else{
			int x=number- remain;
			ans+=x;
			remain+=x;
			remain-=array[i];
		}
	}
	printf("%d\n",ans);
	return 0;
}