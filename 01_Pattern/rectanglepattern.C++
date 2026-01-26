#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout<<"Enter the number of columns:";
    cin>>m;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++)
    {
        cout<<"* ";
    }    
    cout<<endl;
}
}