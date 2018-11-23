#include <bits/stdc++.h>
using namespace std;
 
class RangeEncoding{
	public:
	int minRanges(vector <int> arr){
		int size=arr.size();
		sort(arr.begin(),arr.end());
		int count=1;
		for(int i=1,j=0 ;i<size ;i++,j++){
			if(arr[i]-arr[j]!=1)count++;
		}
		
		return count;
	}
};