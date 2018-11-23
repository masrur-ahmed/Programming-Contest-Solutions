#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,x1,v,v1;
	scanf("%d %d %d %d",&x,&v,&x1,&v1);
	int dis=x-x1;
	int velo=v1-v;
	if((velo==0)|| (x<x1 && v<v1))printf("NO\n");	
	
	else if(dis%velo!=0)printf("NO\n");	
	else printf("YES\n");	
	
	return 0;
}