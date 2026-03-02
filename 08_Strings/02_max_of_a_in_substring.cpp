#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the string :";
    cin>>s;
    int l;
    cout<<"Enter the size of the substring :";
    cin>>l;
    int max_a=0;
    for(int i=0;i<s.length();i+=l){
        string substring=s.substr(i,l);
        int count=0;
        for(char c:substring){
            if(c=='a') count++;
        }
        max_a=max(max_a,count);
    }
    cout<<"Max of a is :"<<max_a; 
    return 0;
}