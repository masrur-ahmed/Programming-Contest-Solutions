#include <bits//stdc++.h>
using namespace std;
set<int>s;
set<int>::iterator it;
int main() {
	int t,p,q,l,sq;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; i++){
		scanf("%d %d",&p,&l);
		q = p-l;
		sq = sqrt(q);
		for(int j  = 1 ; j <= sq ; j++){
			if(q%j==0){
                if(q/j>l && j!=1)s.insert(q/j);
                if(j>l && (q/j!=j))s.insert(j);
            }
		}
		s.insert(q);
		printf("Case %d:",i);
		if(q<=l)printf(" impossible\n");
		
		else{
			for(it= s.begin(); it!=s.end() ; it++){
				printf(" %d",*it);
			}
			printf("\n");
		}
		s.clear();
	}
	return 0;
}