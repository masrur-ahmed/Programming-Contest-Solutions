#include <bits/stdc++.h>
using namespace std;
 
class TestTaking{
	public:
	int findMax(int questions, int guessed, int actual){
		int result=abs(guessed-actual);
		return questions-result;
	}
};