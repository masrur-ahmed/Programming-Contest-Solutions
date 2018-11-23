    #include <iostream>
    using namespace std;
     
    int main() {
    	int t;
    	double pos=0,neg=0,zero=0;
    	scanf("%d",&t);
    	int a[t];
    	for(int i=0 ;i<t;i++){
    		scanf("%d",&a[i]);
    		if(a[i]>0){
    			pos++;
    		}
    		else if(a[i]<0){
    			neg++;
    		}
    		else if(a[i]==0){
    			zero++;
    		}
    	}
    	printf("%.6lf\n%.6lf\n%.6lf\n",pos/(double)t,neg/(double)t,zero/(double)t);
    }