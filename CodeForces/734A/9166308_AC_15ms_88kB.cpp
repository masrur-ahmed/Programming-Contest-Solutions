#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, y = 0, x = 0;
    scanf("%d", &num);
    char s [num];
    scanf("%s",s);
    for (int i = 0; i < num; i++){
        if (s[i] == 'A'){
         x++;
        }
        else if (s[i] == 'D') {
        	y++;
        }
    }
    if (x > y){
    printf("Anton\n");
    }
    else if (x < y){
    printf("Danik\n");
    }
    else {
    	printf("Friendship");
    }
    return 0;
}