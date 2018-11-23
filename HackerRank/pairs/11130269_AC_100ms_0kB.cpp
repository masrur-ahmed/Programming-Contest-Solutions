#include <bits/stdc++.h>
using namespace std;
bool BS (int raju[], int mina,int raju_num,int k){
    long long int l=0, r=raju_num, mid;
    while (l!=r){
        mid = (l+r)/2;
        if (raju[mid] >= mina+k) {
            r = mid;
            
        }
        else{
            l = mid+1;
        }
    }
    if (raju[l] == mina+k) {
        return true;
    }
    else{
    	return false;
    }
    
}
int main(){
	int n,k,c=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(BS(a,a[i],n,k))c++;
	}
	printf("%d",c);
}