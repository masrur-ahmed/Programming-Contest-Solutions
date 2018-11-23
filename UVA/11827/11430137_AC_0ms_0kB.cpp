#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	scanf("%d",&test);
	cin.ignore();
	while(test--){
        string s;
		getline(cin,s);
		stringstream ss;
		ss<<s;
		vector<int>v;
		int number;
        while(ss>>number){
			v.push_back(number);
		}
		int max=0,check=0;
        for (int i = 0; i < v.size (); i++){
            for (int j = i + 1; j < v.size (); j++){
                check=__gcd(v[j],v[i]);
                if (check >= max){
                    max = check;
                }
            }
        }
        printf ("%d\n" ,max);
	}
}