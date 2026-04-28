#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int hash[26]={0};  //int hash[256]; to take all 256 characters
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c; 
        cout<<hash[c-'a']<<endl;  //hash[c];
    }
    return 0;
}