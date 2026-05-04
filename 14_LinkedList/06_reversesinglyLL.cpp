#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* &prev, Node* &curr) {
    // Base case
    if(curr == NULL)
        return prev;

    Node* forward = curr->next;
    curr->next = prev;

    return reverse(curr, forward);  
}


Node* reverseUsingLoop(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}


Node* reverseUsingRecursion(Node* prev, Node* curr) {
    // Base case
    if(curr == NULL)
        return prev;

    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;

    return reverseUsingRecursion(prev, curr);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    cout << "Original:              ";
    print(head);

    // Method 1
    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);
    cout << "Method 1 (basic rec): ";
    print(head);

    // Method 2
    head = reverseUsingLoop(head);
    cout << "Method 2 (loop):      ";
    print(head);

    // Method 3
    head = reverseUsingRecursion(NULL, head);
    cout << "Method 3 (recursion): ";
    print(head);

    return 0;
}