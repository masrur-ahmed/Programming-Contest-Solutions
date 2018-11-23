#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,a;
	
	scanf("%d",&t);
	while(t--){
		vector<int>v;
		vector<int>v1;
		scanf("%d",&n);
		scanf("%d",&a);
		v.push_back(a);
		v1.push_back(a);
		for(int i=1;i<n;i++){
			scanf("%d",&a);
			v.push_back(a);
			v1.push_back(v1[i-1]+a);
		}
		bool b=false;
		for(int i=1;i<n;i++){
			 if(n==2){
				break;
			}
			else if(v1[i-1]==v1[n-1]-v1[i]){
					b=true;
					break;
			}
				
		}
		//for(int i=1;i<n;i++)printf("%d  ",v1[i]);
		
		if(b || n==1){
			printf("YES\n");
		}
		else{ 
			printf("NO\n");
		}
	}
	return 0;
}