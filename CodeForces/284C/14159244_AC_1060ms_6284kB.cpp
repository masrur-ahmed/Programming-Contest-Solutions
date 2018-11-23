#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,op,last=0,first=0,k,a,x,l;
	long long int sum=0;
	double res;
	vector<int>v,up;
	up.push_back(0);
	v.push_back(0);
	scanf("%d",&n);
	while(n--){
		scanf("%d",&op);
		if(op==3 && v.size()>=2){
			last=v.size()-1;
			v[last]+=up[last];
			up[last-1]+=up[last];
			sum-=v[last];
			v.erase(v.begin()+last);
			up.erase(up.begin()+last);
			res=sum/double(v.size());
			printf("%.10lf\n",res);
			//for(int i=0 ; i < v.size();i++)printf("%d v ",v[i]);
			//for(int i=0 ; i < up.size();i++)printf("%d v ",up[i]);
		}
		else if(op==2){
			cin>>k;
			v.push_back(k);
			up.push_back(0);
			sum+=k;
			res=sum/double(v.size());
			printf("%.10lf\n",res);
			//for(int i=0 ; i < v.size();i++)printf("%d v ",v[i]);
			//for(int i=0 ; i < up.size();i++)printf("%d v ",up[i]);
		}
		else if(op==1){
			scanf("%d %d",&a,&x);
			l=0;
			up[a-1]+=x;
			sum+=(x*a);
			res=sum/double(v.size());
			printf("%.10lf\n",res);
			//for(int i=0 ; i < v.size();i++)printf("%d v ",v[i]);
			//for(int i=0 ; i < up.size();i++)printf("%d v ",up[i]);
		}
	}
}
