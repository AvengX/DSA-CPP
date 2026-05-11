#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int index = i;
    int leftIndex = 2*index;
    int rightIndex = 2*index+1;
    int largest = index;
    if(leftIndex <= n && arr[largest] < arr[leftIndex]){
        largest = leftIndex;
    }
    if(rightIndex <= n && arr[largest] < arr[rightIndex]){
        largest = rightIndex;
    }
    if(index != largest){
        swap(arr[index], arr[largest]);
        index = largest;
        heapify(arr, n, index);
    }
}

// void heapSort(int arr[], int n){
//     for(int i = n/2; i >= 1; i--){
//         heapify(arr, n, i);
//     }
//     for(int i = n; i > 1; i--){
//         swap(arr[1], arr[i]);   
//         heapify(arr, i-1, 1);   
//     }
// }

void heapSort(int arr[], int n){ 
    while(n!=1){
        swap(arr[1],arr[n--]);
        heapify(arr,n,1);
    }
}    

int main() {
    int arr[] = {-1, 12, 15, 13, 11, 14};  
    int n = 5;

    cout << "Before sorting: ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = n/2; i >= 1; i--){
        heapify(arr, n, i);
    }

    heapSort(arr, n);

    cout << "After sorting:  ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
