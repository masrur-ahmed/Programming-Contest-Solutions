#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,count=1;
	scanf("%d",&x);
	int a[x];
	vector<int>y;
	for(int i=0 ; i<x ; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=1 ; i<x ; i++){
		if(a[i-1]<=a[i]){
			count++;
			}
		else{
			y.push_back(count);
			count=1;
		}
	}
	y.push_back(count);
	sort(y.begin(),y.end());
	printf("%d\n",y[y.size()-1]);
}