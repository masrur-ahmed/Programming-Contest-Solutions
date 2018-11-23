#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int test,num1,num2;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&num1,&num2);
        if(num1>=num2)
            printf("MMM BRAINS\n");
        else
            printf("NO BRAINS\n");
    }
        return 0;
}