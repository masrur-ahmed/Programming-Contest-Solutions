#include <stdio.h>
int main(){
        int T,N;
        scanf("%d\n",&T);
        int i,j,dust;
        unsigned long long int sum = 0;
        for(i =0; i<T;i++){
            scanf("%d",&N);
            for(j=0;j<N;j++){
                scanf("\n%d",&dust);
                if(dust>0)
                sum+=dust;
			}
            printf("Case %d: %lld\n",i+1,sum);
            sum =0;
        }
        return 0;
}

