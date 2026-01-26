#include <bits/stdc++.h>
using namespace std;
bool palindroneCheck(string s,int start,int end){
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
   return palindroneCheck(s,start+1,end-1);
}

int main() {
    string s;
    cout<<"Enter your string : ";
    cin>>s;
    if(palindroneCheck(s,0,s.size()-1)){
        cout<<"It is a palindrone";
    }else{
        cout<<"It is not a palindrone";
    }


    return 0;
}