#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    vector<int>a(size);
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<size;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}