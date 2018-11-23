#include <bits/stdc++.h>
using namespace std;
 
class SquareMaking{
	multiset<int> mymultiset;
	public:
	int getMinimalPrice(int a, int b, int c, int d){
		vector<int>s;
		s.push_back(a);
		s.push_back(b);
		s.push_back(c);
		s.push_back(d);
		sort(s.begin(),s.end());
		int result=abs(s[0]-s[2])+abs(s[1]-s[2])+abs(s[3]-s[2]);
		return result;
	}
};