#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    scanf("%d",&test);
    while(test--){
    	int m,n,a;
    	scanf("%d \n %d",&m,&n);
    	vector<int>vec;
        for(int i = 0; i < n; i++){
            scanf("%d",&a);
            vec.push_back(a);
        }
        for(int x = 0; x < n; x++){
        for(int y = x+1; y < n; y++){
            if(vec[x] + vec[y] == m){
                cout << x+1 << " " << y+1 << endl;
            }
        }
    }
    }
}