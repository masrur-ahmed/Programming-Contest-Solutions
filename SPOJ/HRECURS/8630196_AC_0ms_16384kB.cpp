#include<bits/stdc++.h>
int methodSum(int array[], int n )
{
    if (n == 0) {
        return array[0];
    }
   return (array[n] + methodSum(array,n-1));
}
 
int main()
{
    int test;
    scanf("%d",&test);
    for(int x=1 ; x<=test ;x++){
    int z;
    scanf("%d",&z);
    int array[z];
    int sum;
    for(int y=0 ; y<z ; y++){
                scanf("%d",&array[y]);
            }
    sum = methodSum(array,z-1);
    printf("Case %d: %d\n",x,sum);
    }
    return 0;
}