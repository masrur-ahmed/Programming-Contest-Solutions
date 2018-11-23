#include <bits/stdc++.h>
using namespace std;
bool approximatelyEqual(double a, double b, double epsilon)
{
    return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}
bool greaterThan(double a, double b, double epsilon)
{
    return (a - b) > ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}
int main() {
	long int x,y;
	
	scanf("%ld %ld",&x,&y);
	
	auto res1=log10(x)*y,res2=log10(y)*x;
//	auto fractional_part = res1 -  floor(res1);
	if(greaterThan(res1,res2,0.000000000001))printf(">");
	else if(approximatelyEqual(res1,res2,0.0000000001))printf("=");
	else printf("<");
	}