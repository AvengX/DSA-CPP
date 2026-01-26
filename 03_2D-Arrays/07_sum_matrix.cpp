#include <bits/stdc++.h>
using namespace std;

void summatrix(vector<vector<int>>&arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum<<endl;
}

int main() {
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    summatrix(arr);
    return 0;
}