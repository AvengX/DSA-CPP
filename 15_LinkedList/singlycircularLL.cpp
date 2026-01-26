#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Node with value: " << this->data << " deleted" << endl;
    }
};

// Insert at Head (Circular)
void insertathead(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);
    
    // Case 1: Empty List
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        newNode->next = newNode; // Points to itself
    } 
    // Case 2: Non-empty List
    else {
        newNode->next = head;
        head = newNode;
        tail->next = head; // CRITICAL: Tail must point to new Head
    }
}

// Insert at Tail (Circular)
void insertattail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);

    // Case 1: Empty List
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        newNode->next = newNode; // Points to itself
    } 
    // Case 2: Non-empty List
    else {
        tail->next = newNode;
        tail = newNode;
        tail->next = head; // CRITICAL: New Tail must point back to Head
    }
}

// Find Length (Circular logic needed)
int findlength(Node* head) {
    if (head == NULL) return 0;
    
    int len = 1; // Start at 1 because we check temp->next != head
    Node* temp = head;
    
    // Stop when we loop back to head
    while (temp->next != head) {
        temp = temp->next;
        len++;
    }
    return len;
}

// Insert at Position
void insertatposition(int data, int position, Node*& head, Node*& tail) {
    // 1. Insert at Head (Position 0 or 1)
    if (position <= 1 || head == NULL) {
        insertathead(head, tail, data);
        return;
    }
    
    int len = findlength(head);
    
    // 2. Insert at Tail (Position >= length)
    if (position > len) {
        insertattail(head, tail, data);
        return;
    }

    // 3. Insert in Middle
    int i = 1;
    Node* prev = head;
    while (i < position - 1) {
        prev = prev->next;
        i++;
    }
    
    Node* curr = prev->next;
    Node* newNode = new Node(data);
    
    newNode->next = curr;
    prev->next = newNode;
}

// Delete Node
void deletenode(int position, Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    // Case 1: Deleting the Head
    if (position == 1) {
        Node* temp = head;
        
        // If only 1 node exists
        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            head = head->next;
            tail->next = head; // Update tail to point to new head
        }
        
        temp->next = NULL;
        delete temp;
        return;
    }

    // Case 2: Deleting Middle or Tail
    int i = 1;
    Node* prev = head;
    // Traverse to the node BEFORE the one to delete
    while (i < position - 1) {
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;

    // Check if we are deleting the Tail
    if (curr == tail) {
        tail = prev;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

// Print (Circular Logic)
void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    
    // Use a do-while loop to ensure we print at least once 
    // and stop when we get back to head
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertathead(head, tail, 20);
    insertathead(head, tail, 30); // 30 -> 20 (loops)
    insertathead(head, tail, 40); // 40 -> 30 -> 20 (loops)
    insertathead(head, tail, 50); // 50 -> 40 -> 30 -> 20 (loops)
    insertathead(head, tail, 60); // 60 -> 50 -> 40 -> 30 -> 20 (loops)
    insertattail(head, tail, 77); // 60 -> 50 -> 40 -> 30 -> 20 -> 77 (loops to 60)

    cout << "Original Circular List: ";
    print(head);

    // Delete 3rd node (value 40)
    cout << "Deleting 3rd node..." << endl;
    deletenode(3, head, tail);
    print(head);

    return 0;
}