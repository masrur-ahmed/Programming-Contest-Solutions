#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int,int>m;
	map<int,int>m1;
	int x,y,a;
	scanf("%d",&x);
	while(x--){
		scanf("%d",&a);
		m[a]++;
	}
	scanf("%d",&y);
	while(y--){
		scanf("%d",&a);
		m1[a]++;
	}
	map<int,int>::iterator it1=m1.begin();
	for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it,++it1){
    	 if(it->second!= it1->second)printf("%d ",it->first);
    	 
	}
	return 0;
}