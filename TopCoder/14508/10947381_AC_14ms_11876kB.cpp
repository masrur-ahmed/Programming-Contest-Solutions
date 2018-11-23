#include <bits/stdc++.h>
using namespace std;
 
class ThreeIncreasing{
	public:
	int minEaten(int a, int b, int c){
		int count =0;
		if(c<=b){
			count+=(b-c)+1;
			b=(c)-1;
		}
		if(b<=a){
			count+=(a-b)+1;
			a=(b)-1;
		}
		
		if(a <= 0 || b <= 0 || c <= 0)return -1;
		else return count;
    
	}
};