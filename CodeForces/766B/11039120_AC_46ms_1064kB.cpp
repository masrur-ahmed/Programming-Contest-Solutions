#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,n;
	vector<int>notes;
	scanf("%d",&n);
	while(scanf("%d",&x)==1)notes.push_back(x);
	sort(notes.begin(),notes.end());
	bool b=false;
	for(int i=2;i<n;i++){
		if(notes[i]<(notes[i-1]+notes[i-2])){
			b=true;
			break;
		}
	}
	if(b)printf("YES\n");
	else printf("NO\n");
	return 0;
}