#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter ths string :";
    cin>>s;
    int stars=0,hashes=0;
    for(char c:s){
        if(c=='*') stars++;
        else if(c=='#') hashes++;
    }
    int diff=stars-hashes;
    cout<<"The difference is = "<<diff;
    return 0;

}