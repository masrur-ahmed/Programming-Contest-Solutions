#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	
	scanf("%d",&n);
	int coin[n];
	vector<int>author;
	vector<int>trans;
	vector<int>atboth;
	for(int i=0; i<n ; i++)scanf("%d",&coin[i]);
	int x;
	bool a=false,b=false,c=false;
	
	for(int i=0; i<n ; i++){
		scanf("%d",&x);
		if(x==1)trans.push_back(coin[i]);
		else if(x==2)author.push_back(coin[i]);
		else atboth.push_back(coin[i]);
	}
	//printf("%d",atboth.size());
	if(author.size()>=2)sort(author.begin(), author.end());
	if(trans.size()>=2)sort(trans.begin(), trans.end());
	if(atboth.size()>=2)sort(atboth.begin(), atboth.end());
	if(atboth.size()>=1 && author.size()>=1 && trans.size()>=1){
		if((author[0]+trans[0])<atboth[0])printf("%lld",(author[0]+trans[0]));
		else printf("%lld",atboth[0]); 
	}
	else if(author.size()<1 || trans.size()<1)printf("%lld",atboth[0]); 
	else printf("%lld",(author[0]+trans[0])); 
	return 0;
} 