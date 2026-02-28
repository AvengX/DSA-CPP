#include <bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int>&q,int k){
   stack<int>s;
   int count=0;
   int n=q.size();
   if(k<=0 || k>n) return;
   while(!q.empty()){
    int temp=q.front();
    q.pop();
    s.push(temp);
    count++;
    if(count==k) break;
   }
   while(!s.empty()){
    int temp=s.top();
    s.pop();
    q.push(temp);
   }
   count=0;
   while(!q.empty() && n-k!=0){
    int temp=q.front();
    q.pop();
    q.push(temp);
    count++;
    if(count==n-k)
    break;
   }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q,3);
    cout<<"The reverse k  element of queue is :"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}