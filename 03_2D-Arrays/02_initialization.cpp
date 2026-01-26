#include <bits/stdc++.h>
using namespace std;

int main() {
    int row,col;
    cout<<"Enter the number of rows and cols :";
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<"Enter the value for "<<i<<j<<":";
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix is\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}