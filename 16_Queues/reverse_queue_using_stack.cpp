#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        int elemement=q.front();
        q.pop();
        s.push(elemement);
    }
    while(!s.empty()){
        int elemement=s.top(); 
        s.pop();
        q.push(elemement);
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q);
    cout<<"The reverse of queue is :"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}