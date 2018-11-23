#include <bits/stdc++.h>
using namespace std;

int main() {
    string un19[] = {"zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
        "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen"};
    string str [10];
    str[2]="twenty";
    str[3]="thirty";
    str[4]="forty";
    str[5]="fifty";
    str[6]="sixty";
    str[7]="seventy";
    str[8]="eighty";
    str[9]="ninety";
    int num;
    scanf("%d",&num);
    if(num<20){
     cout<<un19[num];
    }
    else if(num%10==0){
    	cout<<str[num/10]<<endl;
    }
    else{
     cout<< str[num/10]<<'-'<< un19[num%10]<<endl;
    }
}