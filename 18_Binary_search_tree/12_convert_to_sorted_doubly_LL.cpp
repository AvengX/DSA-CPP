#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) q.push(NULL);
        } else {
            cout << temp->data << " ";
            if(temp->left)  q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

Node* BSTusingInorder(int inOrder[], int s, int e) {
    if(s > e) return NULL;

    int mid = s + (e - s) / 2;
    Node* root = new Node(inOrder[mid]);

    root->left  = BSTusingInorder(inOrder, s, mid - 1);
    root->right = BSTusingInorder(inOrder, mid + 1, e);

    return root;
}

void convertIntoSortedDLL(Node* root, Node* &head) {
    if(root == NULL) return;

    convertIntoSortedDLL(root->right, head);

    root->right = head;
    if(head != NULL) head->left = root;                                                  
    head = root;

    Node* left = root->left;
    root->left = NULL;

    convertIntoSortedDLL(left, head);
}

void printLinkedList(Node* head) {
    Node* temp = head;
    cout << "DLL: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

int main() {
    int inOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0, e = 8;

    Node* root = BSTusingInorder(inOrder, s, e);

    cout << "Level Order Traversal:" << endl;
    levelOrderTraversal(root);

    Node* head = NULL;
    convertIntoSortedDLL(root, head);

    printLinkedList(head);

    return 0;
}