#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) 
            swap(arr[j],arr[j+1]);
            isSwap=true;
        }
        if(!isSwap) return;
    }
}

int main() {
    int arr[]={1,4,5,2,9};
    int n=5;
    bubbleSort(arr,n);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}