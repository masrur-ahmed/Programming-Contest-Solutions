#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, m, array[105], pos=-1, max=-1;
    scanf("%d %d",&num,&m);
    for(int i=0; i<num; i++){ 
     scanf("%d", &array[i]);
     array[i]=ceil((double)array[i]/m);
    }
    for(int i=num-1; i>=0; i--){
      if(array[i]>max){
      max=array[i];
      pos=i;
      }
    }
    printf("%d", pos+1);
    return 0;
}