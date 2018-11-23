#include <bits/stdc++.h>
using namespace std;
 
class TestTaking{
 public:
  int findMax(int a,int b, int c){
	int num= abs(b-c);
	num=abs(num-a);
	return num;
 }
};