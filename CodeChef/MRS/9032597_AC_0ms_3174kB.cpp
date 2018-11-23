#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int row,col;
    cin>>row>>col;
    long long int array[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    long long int max=0,check=0;
    for(int i=0;i<row;i++){
        check=array[i][0];
        for(int j=0;j<col;j++){
            if(array[i][j]<check){
                check=array[i][j];
            }
            
        }
        // cout<<max<<endl<<check<<endl;
        if(max<check){
            max=check;
        }
    }
    cout<<max<<endl;
    return 0;
} 