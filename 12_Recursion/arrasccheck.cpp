#include<iostream>
using namespace std;
bool checkAsc(int arr[],int n,int i){
   if(i==n-1) return true;
    if(arr[i+1]>arr[i]){
        return true;
    
   }
return checkAsc(arr,n,i+1);
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    bool ans=checkAsc(arr,n,i);
    if(ans){
        cout<<"The array is in ascending order";
    }else{
        cout<<"The are is not sorted";
    }
return ans;
}