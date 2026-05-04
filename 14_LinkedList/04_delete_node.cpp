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

int findLength(Node* &head) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

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

void deleteNode(int position, Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "Cannot delete, LL is empty";
        return;
    }

    // Deleting first node
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findLength(head);

    // Deleting last node
    if(position == len) {
        int i = 1;
        Node* prev = head;
        while(i < position - 1) {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    // Deleting middle node
    int i = 1;
    Node* prev = head;
    while(i < position - 1) {
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    cout << "Original: ";
    print(head);

    deleteNode(1, head, tail);
    cout << "Delete head(1):  ";
    print(head);

    deleteNode(4, head, tail);
    cout << "Delete tail(4): ";
    print(head);

    deleteNode(2, head, tail);
    cout << "Delete middle(2):";
    print(head);

    return 0;
}