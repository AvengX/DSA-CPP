#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int space=0;space<row;space++)
        {
            cout<<" ";
    }
    for(int col=0;col<n-2*row+2;col++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}