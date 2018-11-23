#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first, second, one, two;
    
    while (scanf("%d%d", &first, &second)==2 && first != -1)
    {
        if (first<second){
            one = second - first;
            two = first + 100 - second;
        }
        else{
        	one = first - second;
        	two = second + 100 - first;
        }
        if (one>two){
        printf("%d\n", two);
        }
        else{
        	printf("%d\n", one);
        }
    }
}