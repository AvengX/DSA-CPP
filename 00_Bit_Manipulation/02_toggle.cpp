#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int mask=0;
    int temp=n;
    while(temp>0){
        mask=(mask<<1)|1;
        temp>>=1;
    }
    int result=n^mask;
    cout<<"Bit after toggling is :"<<result;
    return 0;
}