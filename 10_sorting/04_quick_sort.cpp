#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr,int s,int e){
    int index=s-1;
    int pivot=arr[e];
    for(int j=s;j<e;j++){
        if(arr[j]<pivot){
            index++;
            swap(arr[j],arr[index]);
        }
    }
    index++;
    swap(arr[e],arr[index]);
    return index;
}

void quickSort(vector<int>&arr,int s,int e){
    if(s<e){
        int pivotIndex=partition(arr,s,e);
        quickSort(arr,0,pivotIndex-1);
        quickSort(arr,pivotIndex+1,e);
    }
}

int main() {
    vector<int>arr={2,1,3,4,5,6};
    quickSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}