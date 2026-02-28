#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1) return 1;
    int smallproblem=factorial(n-1);
    int bigproblem=n*smallproblem;
    return bigproblem;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"Ans is :"<<ans<<endl;
    return 0;
}   