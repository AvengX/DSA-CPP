#include <bits/stdc++.h>
using namespace std;

int getkthSmalledtElement(int*arr,int n,int k){
    if(k>n) return -1;
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element<pq.top()){
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
    int k=2;
    int ans=getkthSmalledtElement(arr,n,k);
    cout<<k<<"th smallest element is :"<<ans<<endl;
    return 0;
}

/*
Complexity Analysis:
1. Time Complexity: O(n log k)
   - Pushing the first k elements into the Max-Heap takes O(k log k) time.
   - Processing the remaining (n - k) elements takes O((n - k) log k) time, since each push/pop operation on a heap of size k takes O(log k).
   - Total Time Complexity: O(k log k) + O((n - k) log k) = O(n log k).

2. Space Complexity: O(k)
   - The Max-Heap (priority_queue) stores at most k elements at any given time.
*/