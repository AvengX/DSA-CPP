#include <bits/stdc++.h>
using namespace std;
class Deque{
    public:
    int *arr;
    int size;
    int rear;
    int front;

    Deque(int size){
        this->size=size;
        arr=new int[size];;
        front=-1;
        rear=-1;
    }

    void RearPush(int data){
        if((front==0 && rear==size-1) || (front==rear+1)){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }

    void FrontPush(int data){
        if((front==0 && rear==size-1) || (front==rear+1)){
            cout<<"Queue is full"<<endl;
        }
        else if(rear==-1){
            front=rear=0;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=data;
    }

    void FrontPop(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
        if(front==rear){
            front=-1;
            rear=-1;
        }else if(front==size-1){
            front=0;
        }else{
            front++;
        }
    }

    void RearPop(){
        if(rear==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[rear]<<endl;
        if(rear==0){
            front=-1;
            rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            rear--;
        }
    }
};

int main() {
    Deque dq(5);
    dq.RearPush(10);
    dq.RearPush(20);
    dq.FrontPush(5);
    dq.FrontPush(2);
    dq.FrontPop();
    dq.RearPop();

    return 0;
}