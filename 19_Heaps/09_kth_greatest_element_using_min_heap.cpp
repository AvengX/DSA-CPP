#include <bits/stdc++.h>
using namespace std;

int getkthGreatestElement(int*arr,int n,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element>pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();
    return ans;
}

int main() {
    int arr[]={10,5,20,4,15};
    int n=5;
    int k=4;
    int ans=getkthGreatestElement(arr,n,k);
    cout<<k<<"th smallest element is :"<<ans<<endl;
    return 0;
}