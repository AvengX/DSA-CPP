#include <bits/stdc++.h>
using namespace std;

void findMissing(int*a,int n){
    for(int i=0;i<n;i++){
        int index=abs(a[i])-1;
        if(a[index]>0) a[index]=-a[index];
    }

    cout<<"Arrays after marking :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Missing element :";
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<i+1;
        }
    }
}

int main() {
    int a[]={1,3,5,3,4};
    int n=sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}