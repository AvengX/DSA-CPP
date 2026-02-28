#include <bits/stdc++.h>
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

Node* buildTree() {
    int data;
    cout << "Enter the data:" << endl;
    cin >> data;
    if(data == -1) {
        return NULL; 
    }

    Node* root = new Node(data);
    cout << "Enter data for left part of " << data << " node" << endl;
    root->left = buildTree();

    cout << "Enter data for right part of " << data << " node" << endl;
    root->right = buildTree();

    return root;
}

void printLeftBoundary(Node* root) {
    if(root == NULL) return;
    
    if(root->left == NULL && root->right == NULL) return;
    
    cout << root->data << " ";
    
    if(root->left) {
         printLeftBoundary(root->left);
    } else {
         printLeftBoundary(root->right);
    }
}    

void printLeafBoundary(Node* root) {
    if(root == NULL) return;
    
    if(root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
        return;
    }
    
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(Node* root) {
    if(root == NULL) return;
    
    if(root->left == NULL && root->right == NULL) return;
    
    if(root->right) {
        printRightBoundary(root->right);
    } else {
        printRightBoundary(root->left);
    }
    
    cout << root->data << " "; 
}

void boundaryTraversal(Node* root) {
    if(root == NULL) return;
    
    cout << root->data << " ";
    
    printLeftBoundary(root->left);
    
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
    
    printRightBoundary(root->right);
}

int main() {
     Node* root = buildTree();
     boundaryTraversal(root);
     return 0;
}