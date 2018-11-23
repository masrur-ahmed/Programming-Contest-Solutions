#include <iostream>

#include <stdio.h>
using namespace std;
int main(void)
{
    int a, b;
    while (scanf("%d %d", &a, &b)==2)
        printf("%d\n",a+b);
    return 0;
}