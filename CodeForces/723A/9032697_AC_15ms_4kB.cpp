#include<bits/stdc++.h>
using namespace std;
int main(){
 int array[3],ans;
 scanf("%d %d %d",&array[0],&array[1],&array[2]);
 sort(array,array+3);
 ans=array[2]-array[0];
 printf("%d\n",ans);
} 