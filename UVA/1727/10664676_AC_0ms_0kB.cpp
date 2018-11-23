#include <bits/stdc++.h>
using namespace std;
string month[12]={"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL","AUG", "SEP", "OCT", "NOV", "DEC"};
int tday[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7]= {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int i=0,j=0,k=0;
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	string m,d;
	cin>>m>>d;
	for(i=0 ;i<12;i++)if(month[i]==m)break;
	for(j=0 ;j<7;j++)if(day[j]==d)break;
	int count=0;
	for(int l=0 ;l<tday[i];l++){
		if ((j+l)%7==5||(j+l)%7==6)count++;
	}
	printf("%d\n",count);
	}
	return 0;
}