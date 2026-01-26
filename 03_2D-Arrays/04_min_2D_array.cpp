#include <bits/stdc++.h>
using namespace std;

int minnum(int arr[3][3],int row,int col){
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min) min=arr[i][j];
        }
    }
    return min;
}

int main() {
    int arr[3][3];
    int col=3;
    int row=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the value for "<<i<<j<<":";
            cin>>arr[i][j];
        }
    }
    cout<<minnum(arr,row,col);
    return 0;
}