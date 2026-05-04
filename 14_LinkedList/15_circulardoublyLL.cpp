#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};

// Helper function to maintain circular links
void makeCircular(Node*& head, Node*& tail) {
    if (head != NULL && tail != NULL) {
        tail->next = head;
        head->prev = tail;
    }
}

void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    // Do-while loop is best for circular lists
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int getlength(Node* head) {
    if (head == NULL) return 0;
    int len = 0;
    Node* temp = head;
    do {
        len++;
        temp = temp->next;
    } while (temp != head);
    return len;
}

void insertathead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    
    // Case 1: Empty List
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        makeCircular(head, tail); // Points to itself
    } 
    // Case 2: Non-empty List
    else {
        newNode->next = head;
        newNode->prev = tail; // New Head's prev is Tail
        
        head->prev = newNode;
        tail->next = newNode; // Tail's next is New Head
        
        head = newNode;
    }
}

void insertattail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    
    // Case 1: Empty List
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        makeCircular(head, tail);
    } 
    // Case 2: Non-empty List
    else {
        newNode->prev = tail;
        newNode->next = head; // New Tail's next is Head
        
        tail->next = newNode;
        head->prev = newNode; // Head's prev is New Tail
        
        tail = newNode;
    }
}

void insertatposition(Node*& head, Node*& tail, int data, int position) {
    if (head == NULL) {
        insertathead(head, tail, data);
        return;
    }
    
    // Insert at Head (Position 1)
    if (position == 1) {
        insertathead(head, tail, data);
        return;
    }
    
    int len = getlength(head);
    // Insert at Tail (Position > Length)
    if (position > len) {
        insertattail(head, tail, data);
        return;
    }
    
    // Insert in Middle
    int i = 1;
    Node* left = head;
    while (i < position - 1) {
        left = left->next;
        i++;
    }
    
    Node* right = left->next;
    Node* newNode = new Node(data);
    
    // Update NewNode pointers
    newNode->prev = left;
    newNode->next = right;
    
    // Update Neighbors
    left->next = newNode;
    right->prev = newNode;
}

void deleteatposition(Node*& head, Node*& tail, int position) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    int len = getlength(head);
    if (position > len || position < 1) {
        cout << "Invalid Position" << endl;
        return;
    }

    // Single Node Case
    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    // Case 1: Delete Head
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        
        // Maintain Circularity
        head->prev = tail;
        tail->next = head;
        
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    // Case 2: Delete Tail
    if (position == len) {
        Node* temp = tail;
        tail = tail->prev;
        
        // Maintain Circularity
        tail->next = head;
        head->prev = tail;
        
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }

    // Case 3: Delete Middle
    int i = 1;
    Node* left = head;
    while (i < position - 1) {
        left = left->next;
        i++;
    }
    
    Node* curr = left->next;
    Node* right = curr->next;
    
    left->next = right;
    right->prev = left;
    
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Manually creating first nodes to show connections
    // But usually, we use insert functions.
    // Let's use functions to ensure circularity is correct from start.

    cout << "Inserting at Head..." << endl;
    insertathead(head, tail, 30);
    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    print(head); // 10 20 30

    cout << "Inserting at Tail..." << endl;
    insertattail(head, tail, 40);
    print(head); // 10 20 30 40

    cout << "Inserting 25 at Position 3..." << endl;
    insertatposition(head, tail, 25, 3);
    print(head); // 10 20 25 30 40

    cout << "Deleting Head..." << endl;
    deleteatposition(head, tail, 1);
    print(head); // 20 25 30 40

    cout << "Deleting Tail..." << endl;
    deleteatposition(head, tail, 4); 
    print(head); // 20 25 30
    
    cout << "Head's Prev (Should be 30): " << head->prev->data << endl;
    cout << "Tail's Next (Should be 20): " << tail->next->data << endl;

    return 0;
}