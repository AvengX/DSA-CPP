#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
int start=0;
int end=size-1;
int mid=(start + end)/2;//can use start\2 +end/2 or start +(start-end)\2,reason is thatr (start+end)/2 can lead to overflow
while(start<=end){
    int element=arr[mid];
    if(element==target){
        return mid;
    }
    else if(target<element){
     end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;   
}
return -1;
}

int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size=7;
    int target=5;
    int indexoftarget=binarysearch(arr,size,target);
    if(indexoftarget==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<" target found at "<<indexoftarget<<" index "<<endl;
    }
return 0;
}