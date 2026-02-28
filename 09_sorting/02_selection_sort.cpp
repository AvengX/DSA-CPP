#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex=j;
            }
        }
        swap(arr[i],arr[smallestindex]);
    }
}

int main() {
    int arr[]={1,4,5,2,9};
    int n=5;
    selectionSort(arr,n);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}