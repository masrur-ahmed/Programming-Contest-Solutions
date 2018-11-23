#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a,b,gcd,LCM;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld %lld",&a,&b);
        gcd =__gcd(a,b);
        LCM = (a*b)/gcd;
        if(gcd != a && LCM != b)
            cout << -1 << "\n";
        else cout << gcd << " " << LCM<< "\n";
    }
    return 0;
}
