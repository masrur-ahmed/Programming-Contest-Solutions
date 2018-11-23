#include <bits/stdc++.h>
using namespace std;

class LongLiveZhangzj{
	public:
	int donate(vector <string> speech,vector <string>  words){
		int size1=speech.size();
		int size2=words.size();
		int c=0;
		for(int i=0 ;i<size2 ;i++){
			for(int j=0 ;j<size1 ;j++){
			if(speech[j]==words[i])c++;	
			}
		}
		return c;
	}
};
