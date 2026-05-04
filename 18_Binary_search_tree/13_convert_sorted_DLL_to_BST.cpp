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
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

Node* sortedLinkedListIntoBST(Node* &head, int n) {
    if(n <= 0 || head == NULL) return NULL;

    Node* leftSubtree = sortedLinkedListIntoBST(head, n/2);
    Node* root = head;
    root->left = leftSubtree;
    head = head->right;
    root->right = sortedLinkedListIntoBST(head, n - 1 - n/2);

    return root;
}

int main() {
    Node* head = new Node(1);
    head->right = new Node(2);
    head->right->right = new Node(3);
    head->right->right->right = new Node(4);
    head->right->right->right->right = new Node(5);
    head->right->right->right->right->right = new Node(6);
    head->right->right->right->right->right->right = new Node(7);
    head->right->right->right->right->right->right->right = new Node(8);
    head->right->right->right->right->right->right->right->right = new Node(9);

    Node* root = sortedLinkedListIntoBST(head, 9);

    levelOrderTraversal(root);

    return 0;
}