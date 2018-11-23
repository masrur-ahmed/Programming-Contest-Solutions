#include <bits/stdc++.h>
    using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int amp,frq;
        scanf("%d %d",&amp,&frq);
        while(frq--){
            for(int i=1;i<=amp;i++) {
                for(int j=0;j < i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            for (int i=amp-1;i>=1;i--) {
                for (int j= 0; j<i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            if(frq!=0)printf("\n");
        }
        if (t)printf("\n");
        
    }
    return 0;
}