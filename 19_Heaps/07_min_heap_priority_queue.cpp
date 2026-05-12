#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    cout<<"Top element :"<<pq.top()<<endl;
    cout<<"Size of the queue :"<<pq.size()<<endl;
    return 0;
}