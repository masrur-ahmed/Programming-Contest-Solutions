#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    string song[] ={"Happy","birthday","to","you","Happy","birthday",
                    "to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    string who[100];
    cin >> num;
    for(int x = 0; x < num; x++){
        cin >> who[x];
        }
    int loop = 0;
    if(num <= 16)loop = 1;
    else if(num <= 32)loop = 2;
    else if(num <= 48)loop = 3;
    else if(num <= 64)loop = 4;
    else if(num <= 80)loop = 5;
    else if(num <= 96)loop = 6;
    else loop = 7;
    for(int x = 0, i = 0,j = 0; x < 16*loop; x++){
            cout << who[i++] << ": " << song[j++] << endl;
            if(i == num)i = 0;
            if(j== 16)j = 0;
        }
	return 0;
}