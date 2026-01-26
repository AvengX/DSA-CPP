#include <bits/stdc++.h>
using namespace std;

bool find(int arr[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;i<col;j++){
            if(arr[i][j]==key){
                return true;
                break;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int col=3;
    int key;
    cout<<"Enter the key :";
    cin>>key;
    if(find(arr,row,col,key)){
        cout<<"Key found";
    }else{
        cout<<"Key not found";
    }
    return 0;
}