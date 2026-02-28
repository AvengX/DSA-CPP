#include <bits/stdc++.h>
using namespace std;

int main() {
    string start;
    cout<<"Enter the start day :";
    cin>>start;
    int n;
    cout<<"Enter till which date count sunday :";
    cin>>n;
    unordered_map<string,int>mp={
        {"sunday",0},{"monday",1},{"tuesday",2},{"wednesday",3},{"thursday",4},{"friday",5},{"saturday",6}
    };
    int start_day=mp[start];
    int count=0;
    for(int i=0;i<n;i++){
        int current_day=(start_day+i)%7;
        if(current_day==0) count++;
    }
    cout<<count;
    return 0;
}