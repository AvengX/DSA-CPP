#include <bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int>&q){
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();
    reverseQueue(q);
    q.push(temp);
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