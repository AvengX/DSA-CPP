#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int pivotindex=s;
    int pivotelement=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotelement) {
            count++;
        }
    }
    int rightindex=s+count;     
    swap(arr[pivotindex],arr[rightindex]);
    pivotindex=rightindex;
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivotelement) i++;
        while(arr[j]>pivotelement) j--;
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    if(s>=e) return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main() {

    int arr[]={8,1,3,4,20,50,50,50,50,50,50,50,30};
    int n=13;
    int s=0;
    int end=n-1;
    quicksort(arr,s,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}