#include <bits/stdc++.h>
 
 
using namespace std;
 
double x,y,z,x2,y2,z2,x3,y3,z3,ax,ay,az,cx,cy;

double distanceFromTwoPoints(double pointCon){
	ax=x+(x2-x)*pointCon;
	ay=y+(y2-y)*pointCon;
	az=z+(z2-z)*pointCon;
	//cout<<"("<<ax<<","<<ay<<")"<<endl;
	return sqrt(((ax-x3)*(ax-x3))+((ay-y3)*(ay-y3))+((az-z3)*(az-z3)));
	
} 
 
int main(){
	int t;
	cin>>t;
	for(int i = 1 ; i <= t ; i++){
		cin>>x>>y>>z>>x2>>y2>>z2>>x3>>y3>>z3;
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