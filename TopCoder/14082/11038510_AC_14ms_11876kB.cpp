#include <bits/stdc++.h>
using namespace std;
 
class BearSong{
	public:
	int countRareNotes(vector<int>notes){
		map<int,int>m;
		for(int i=0;i<notes.size();i++)m[notes[i]]++;
		int count=0;
		for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it){
			if(it->second==1)count++;
		}
		return count;
	}
};