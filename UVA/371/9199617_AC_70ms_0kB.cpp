 
#include <stdio.h>
 
int main ()
{
    long int F, S, I, Count, Value, Max, J;
 
    while (scanf("%ld %ld", &F, &S)){
 
        if (F==0 && S==0)
            break;
 
        if (F>S){
            F ^= S;
            S ^= F;
            F ^= S;
        }
 
        Max = 0;
 
        for (I=F; I<=S; I++){
            Count = 0;
            J = I;
 
            do {
                if (J%2==0)
                    J/=2;
                else
                    (J*=3)++;
                Count++;
            } while (J!=1);
 
            if (Count > Max){
                Value = I;
                Max = Count;
            }
 
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", F, S, Value, Max);
    }
    return 0;
}
