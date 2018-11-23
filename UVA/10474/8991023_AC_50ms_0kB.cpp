#include<bits/stdc++.h>
using namespace std;
int BS (int raju[],int mina,int raju_num){
    int l=0, r=raju_num-1, mid;
    while (l!=r){
        mid = (l+r)/2;
        if (raju[mid] >= mina) {
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    if (raju[l] == mina) {
        return l+1;
    }
    else{
        return -1;
    }
}

int main()
{
    int raju_num,mina_num,cas=1;
    while (scanf("%d%d",&raju_num,&mina_num)==2 && raju_num!=0 && mina_num!=0){
        int raju[raju_num];
        int mina[mina_num];
        for (int i=0;i<raju_num;i++) {
            scanf("%d",&raju[i]);
        }
        for (int i=0;i<mina_num;i++){
            scanf("%d",&mina[i]);
        }
        sort (raju,raju+raju_num);

        printf("CASE# %d:\n",cas++);
        for (int i=0; i<mina_num; i++){   
            int position = BS(raju,mina[i],raju_num);
            if (position == -1){ 
             printf("%d not found\n",mina[i]);
            }
            else{
             printf("%d found at %d\n",mina[i],position); 
            } 
        }
    }
    return 0;
}