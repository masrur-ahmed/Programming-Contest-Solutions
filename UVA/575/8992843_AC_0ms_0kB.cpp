#include <bits/stdc++.h>
using namespace std;

int main() {
	string num;
	long long  check=1,sum=0;
	while(cin>>num){
		if(num=="0"){
			break;
		}
		for(long long int i=num.length()-1; i>=0; i--)
  			{
			//printf("%d\n",&x);
			if(num[i]=='1'){
				sum=sum + (pow(2,check)-1);
			}
			else if(num[i]=='2') {
				sum= sum+(2*(pow(2,check)-1));
			}
   				check++;
  			
		}
		 cout<<sum<<endl;
		sum=0;
		check=1;
	}
}