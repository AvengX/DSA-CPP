#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int product=1;
    for(auto i:s){
        product*=(i-'0');
    }
     cout<<product;
    return 0;
}