#include <bits/stdc++.h>
    using namespace std;

int main() {
    int test;
    scanf("%d",&test);
    while(test>=1){
        int num,ans=0;
        scanf("%d",&num);
        int array[num];
        for(int i=0 ; i<num ; i++){
            scanf("%d",&array[i]);
            if(ans!=0 && array[i]==1) {
                ans+=100;
            }
            else if(array[i]==0) {
                ans+=1100;
            }
        }
        printf("%d\n",ans);
        test--; 
        
    }
    return 0;
}