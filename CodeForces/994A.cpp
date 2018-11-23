#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[m];
	for(int i = 0 ; i < n ; i++)scanf("%d",&a[i]);
	for(int i = 0 ; i < m ; i++)scanf("%d",&b[i]);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++ ){
			if(a[i]==b[j])printf("%d ",a[i]);
		}
	}
	return 0;
}