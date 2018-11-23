#include <bits/stdc++.h>
 
 
using namespace std;
 
double x,y,x2,y2,x3,y3,x4,y4,ax,ay,cx,cy;

double distanceFromTwoPoints(double pointCon){
	ax=x+(x2-x)*pointCon;
	ay=y+(y2-y)*pointCon;
	
	cx=x3+(x4-x3)*pointCon;
	cy=y3+(y4-y3)*pointCon;
	//cout<<"("<<ax<<","<<ay<<")"<<endl;
	return sqrt(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy)));
	
} 
 
int main(){
	int t;
	cin>>t;
	for(int i = 1 ; i <= t ; i++){
		cin>>x>>y>>x2>>y2>>x3>>y3>>x4>>y4;
		double l=0,r=1,mid1,mid2;
		while(r-l>=1e-12){
			mid1=(l+r)/2;
			mid2=(mid1+r)/2;
			if(distanceFromTwoPoints(mid1)<=distanceFromTwoPoints(mid2))r=mid2;
			else l=mid1;
		}
		double ans=distanceFromTwoPoints(mid2);
		
		//cout<<cx<<" "<<cy<<endl;
		cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<ans<<"\n";
	}
}