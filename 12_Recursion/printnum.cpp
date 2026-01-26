#include<iostream>
using namespace std;
void printDigits(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    int newvalueOfN=n/10;
    printDigits(newvalueOfN);
        cout<<digit<<" ";

}
int main(){
    int n=456;
    printDigits(n);
    return 0;
}