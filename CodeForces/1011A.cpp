#include <bits/stdc++.h>
using namespace std;
int arr[28];
int main() {
	
	int n,prev,k,count = 0,ans=0;
	char a;
	
	scanf("%d %d",&n,&k);
	cin.ignore();
	for(int i = 0 ; i < n ; i++){
		scanf("%c",&a);
		arr[(a-'a')+1]=1;
	}
	// for(int  i = 1 ; i < 27 ; i++){
	// 	printf("i=%d val=%d\n",i,arr[i]);
	// }
	for(int i = 1 ; i < 27 ; i++){
		if(count==k)break;
		if(arr[i]>0 && (prev-i)!=1){
			ans+=i;
			count++;
			i++;
		}
	}
	if(count !=k || ans == 0)printf("%d",-1);
	else printf("%d",ans);
	return 0;
}