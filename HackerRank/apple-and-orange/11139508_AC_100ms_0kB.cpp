#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,t,a,b,m,n,apple=0,orange=0,dap,dap2,dor,dor2;
	scanf("%d %d %d %d %d %d ",&s,&t,&a,&b,&m,&n);
	int apples[m];
	int oranges[n];
	dap=s-a;
	dor=t-b;
	dap2=t-a;
	dor2=s-b;
	//printf("%d %d %d %d ",dap,dap2,dor,dor2);
	for(int i=0;i<m;i++){
		scanf("%d",&apples[i]);
		if(apples[i]>=dap && apples[i]<=dap2){
			apple++;
		}
	}
	for(int i=0;i<n;i++){
		scanf("%d",&oranges[i]);
		if(oranges[i]<=dor && oranges[i]>=dor2)orange++;
	}
	printf("%d\n%d\n",apple,orange);
	return 0;
}