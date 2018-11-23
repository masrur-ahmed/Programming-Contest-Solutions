#include <bits/stdc++.h>
using namespace std;

int main(){
	string  m[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int d1,d2,y1,y2,t,cas=1,ans;
	string m1,m2;
	char c;
	map<string,int>month;
	for(int i=1,j=0 ; i<=12 ;i++,j++){
		month[m[j]]=i;
	}
	scanf("%d",&t);
	while(t--){
	cin>>m1>>d1>>c>>y1;
    cin>>m2>>d2>>c>>y2;
    if(month[m1]>2){
    	y1++;
    }
    if((month[m2]==2 && d2<29) || month[m2]==1 ){
    	y2--;
    }
    ans = y2/4 - (y1-1)/4;
    ans -= y2/100 - (y1-1)/100;
    ans += y2/400 - (y1-1)/400;
    printf("Case %d: %d\n",cas++,ans);
	}
	return 0;
}