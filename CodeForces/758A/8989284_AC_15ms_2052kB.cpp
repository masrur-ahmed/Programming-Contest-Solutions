#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
scanf("%d",&num);
if(num==1){
	printf("%d\n",0);
}
else{
vector<int>vec;
for(int i=0 ; i<num ; i++){
	int x;
	scanf("%d",&x);
	vec.push_back(x);
}
sort(vec.begin(),vec.end());
int max,ans=0;
max=vec[num-1];
for(int i=0 ; i<num-1 ; i++){
	int diff=max-vec[i];
	ans+=diff;
}
printf("%d\n",ans);
}
}