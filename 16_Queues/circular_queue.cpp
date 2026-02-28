#include <iostream>
using namespace std;

class CirQueue {
public:
    int *arr;
    int size;
    int rear;
    int front;

    CirQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data) {
        if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Queue is full" << endl;
            return;
        } else if (front == -1) {
            front = rear = 0;
            arr[rear] = data;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        } else {
            rear++;
            arr[rear] = data;
        }
    }

    void pop() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        cout << arr[front] << endl;
        arr[front] = -1;

        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }
};

int main() {
    CirQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    q.push(60);

    q.pop();
    q.pop();

    q.push(60);
    q.push(70);
    
    return 0;
}