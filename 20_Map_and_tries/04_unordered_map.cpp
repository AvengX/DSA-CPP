#include <bits/stdc++.h>
using namespace std;

int main() {
    string str="thirubajkbnjbbsiisbd";
    unordered_map<char,int>mp;
    for(auto i:str){
        char ch=i;
        mp[ch]++;
    }
    for(auto i:mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return 0;
}