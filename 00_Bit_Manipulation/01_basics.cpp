#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=6,b=10;
    cout<<(a & b)<<endl; //bitwise and
    cout<<(a|b)<<endl;   //bitwise or
    cout<<(a^b)<<endl;   //bitwise xor
    
    //bitwise left shift operator
    cout<<(4<<1)<<endl;  //(a<<b)=a*2^b
    cout<<(10<<2)<<endl;

    //bitwise right shift operator
    cout<<(10>>1)<<endl;
    cout<<(8>>2)<<endl;  //(a>>b)=a/2^b
    return 0;
}