//given a matrix,in any row if the characers are not in ascending order delete row and count the deleted rows

#include<bits/stdc++.h>
using namespace std;

int countDeletedRows(vector<string>&strs){
    int n=strs.size();
    int m=strs[0].size();
    int deleteRows=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n-1;j++){
            if(strs[j][i]>strs[j+1][i]){
            deleteRows++;
            break;
            }
        }
    }
    return deleteRows;
}
int main(){
    vector<string>strs1={"abc","bae","cef"};
    cout<<countDeletedRows(strs1);
    return 0;
}