#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";  
        temp = temp->next;
    }
    cout << endl;
}

int findLength(Node* &head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
    if (head == NULL || position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    int len = findLength(head);

    if (position >= len) {
        insertAtTail(head, tail, data);
        return;
    }

   
    Node* newNode = new Node(data);
    Node* temp = head;

    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);

    cout << "Original list: ";
    print(head);

    insertAtPosition(99, 0, head, tail);   // insert at head
    cout << "After insert at 0: ";
    print(head);

    insertAtPosition(55, 2, head, tail);   // insert in middle
    cout << "After insert at 2: ";
    print(head);

    insertAtPosition(77, 100, head, tail); // insert at tail (out of bounds)
    cout << "After insert at 100: ";
    print(head);

    return 0;
}