#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n,m,a;
 
    scanf ("%lld %lld %lld", &n, &m, &a);
 
    printf ("%0.lf\n", ceil(n / (double) a) * ceil (m / (double) a));
 
    return 0;
}