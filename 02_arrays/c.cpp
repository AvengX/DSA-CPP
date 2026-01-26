#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int>arr{1,2,3,4,5};
    vector<int>ans;
    int s=0;
    int n=arr.size();
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        for(int i=0;i<=mid;i++){
            int num1=arr[i]*(1<<i);
            ans.push_back(num1);
        }
        for(int j=mid+1;j<e;j++){
            int num2=arr[j]*(1<<(j-2));
            ans.push_back(num2);
        }
        break;
    }
    for(int k=0;k<(int)ans.size()-1;k++){
        int sum=ans[k]+ans[k+1];
        cout<<sum<<endl;
    }

    return 0;
}