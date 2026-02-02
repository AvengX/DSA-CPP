#include <bits/stdc++.h>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v){
    int n=v.size();
    int m=v[0].size();
    for(int startRow=0;startRow<n;startRow++){
        if((startRow & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v[startRow][i]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v[startRow][i]<<" ";
            }
        }
    }
}

int main() {
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    wavePrintMatrix(v);
    return 0;
}