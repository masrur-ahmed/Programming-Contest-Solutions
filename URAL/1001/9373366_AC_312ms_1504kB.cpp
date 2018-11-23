#include<bits/stdc++.h>
using namespace std;
int main(){
long long int num=0;
vector<double> vec;
while(scanf("%lld",&num)==1){
vec.push_back(sqrt((double)num));
}
for(int i=vec.size()-1;i>=0 ; i--){
printf("%.4f\n",vec[i]);
}
}