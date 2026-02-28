#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

void push(int data){
    if(size-top>1){
        top++;
        arr[top]=data;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }else{
        top--;
    }
}

int getTop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        return arr[top];
    }
}

int getSize(){
    return top+1;
}
bool isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}
};
int main() {
 Stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
//   s.push(60);
cout<<"size of stack :"<<s.getSize()<<endl;    
while(!s.isEmpty()){
    cout<<s.getTop()<<" ";
    s.pop();
}cout<<endl;
// cout<<"size of stack :"<<s.getSize()<<endl;
s.pop();
    return 0;
}
