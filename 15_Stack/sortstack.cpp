#include <bits/stdc++.h>
using namespace std;
void insertsorted(stack<int> &s, int target) {
        if(s.empty() || s.top() >= target) {
                s.push(target);
                return;
        }else{
        int topelement = s.top();
        s.pop();
        insertsorted(s, target);
        s.push(topelement);
        }
}
void sortstack(stack<int> &s) {
        if(s.empty()){
                return;
        }
        int topelement=s.top();
        s.pop();
        sortstack(s);
        insertsorted(s,topelement);
}
int main() {

    stack<int> s;
    s.push(9);
    s.push(5);
    s.push(3);
    s.push(11);
    s.push(7);
    sortstack(s);
    cout<<"Printing stack :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    return 0;
}