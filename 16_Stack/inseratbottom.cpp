#include <bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>&s,int&target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    insertatbottom(s,target);
    s.push(topelement);
}

int main() {

    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int target=s.top();
    s.pop();
    insertatbottom(s,target);
    cout<<"Printing Elements:"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

    return 0;
}