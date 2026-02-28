#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    while(!s.empty()){  //as long as stack is not empty
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}