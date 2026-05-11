#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
    int index=i;
    int leftIndex=2*index;
    int rightIndex=2*index+1;
    int largest=index;
    if(leftIndex<=n && arr[largest]<arr[leftIndex]){
        largest=leftIndex;
    }
    if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        largest=rightIndex;
    }
    if(index!=largest){
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,n,index);
    }
}

int main() {
    int arr[] = {-1, 12, 15, 13, 11, 14};  
    int n = 5; 

    
    for(int i = n/2; i >= 1; i--){
        heapify(arr, n, i);
    }

    cout << "Heap: ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}