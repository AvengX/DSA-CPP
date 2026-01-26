#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int>dq;
    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);
    cout<<dq.size()<<endl;
    dq.pop_front();
    cout<<dq.size()<<endl;
    dq.pop_back();
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;    
    cout<<dq.back()<<endl;
    return 0;
}