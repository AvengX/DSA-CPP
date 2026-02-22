#include <iostream>
using namespace std;
int ceilIndex(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int ceil = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return arr[mid];
        else if (arr[mid] < target)
            left = mid + 1;
        else{ 
           ceil=arr[mid];
            right = mid - 1;
    }
  }

    return ceil;
}
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target= 5;
    int result=ceilIndex(arr,n,target);
    if(result!=-1){
      cout<<"The ceil value is: "<<result<<endl;
    }else{
      cout<<"Ceil does not exists!"<<endl;
    }
    return 0; 
}