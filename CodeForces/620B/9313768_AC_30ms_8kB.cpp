#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, ans = 0;
    int digit[]={6,2,5,5,4,5,6,3,7,6};
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		for(int j=i;j>0;j/=10){
			ans+=digit[j%10];
		}
	}
	printf("%d\n",ans);
}