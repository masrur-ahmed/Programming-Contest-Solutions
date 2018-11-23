#include <bits/stdc++.h>
using namespace std;
int cmp(const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main() {
	int n,x,res=0,count=0;
	vector<int>v;
	while(scanf("%d",&n)==1 && n!=0){
		for(int i = 0 ; i < n ; i++ ){
			scanf("%d",&x);
			v.push_back(x);
		}
		qsort(&v[0],v.size(),sizeof(int),cmp);
		for(int i = 0 ; i < n-2 ; i++){
			for(int j = i+1 ; j < n-1 ; j++){
				res+= (n-(upper_bound(v.begin(),v.end(),v[i]+v[j])- v.begin()));
			//	printf("hi %d\n");
			}
		}
		printf("%d\n",res);
		res=0;
		v.clear();
	}
	return 0;
}