#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long int x,y, count,i, val, max, j;
 
    while (scanf("%lld %lld", &x, &y)&&  x!=0 && y!=0){
    	if (x>y){
            int temp=x;
            x=y;
            y=temp;
            }
 
        max = 0;
 
        for ( i=x; i<=y; i++){
            count = 0;
            j = i;
            do{
                if (j%2==0){
                	j/=2;
                }
                else{
                    j=j*3;
                    j++;
                }
             count++;
            }while(j!=1); 
 
            if (count >max){
                val = i;
                max = count;
            }
        }
        
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", x, y, val, max);
    }
    
    return 0;
}