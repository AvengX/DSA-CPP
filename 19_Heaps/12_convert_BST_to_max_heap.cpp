#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node* root, vector<int>& arr) {
    if (root == NULL) return;
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
void postorderPlace(Node* root, vector<int>& arr, int& index) {
    if (root == NULL) return;
    postorderPlace(root->left, arr, index);   
    postorderPlace(root->right, arr, index);  
    root->data = arr[index++];                
}


void convertBSTtoMaxHeap(Node* root) {
    vector<int> arr;
    inorder(root, arr);
    int index = 0;
    postorderPlace(root, arr, index);
}
void printLevelOrder(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* front = q.front();
        q.pop();
        cout << front->data << " ";
        if (front->left) q.push(front->left);
        if (front->right) q.push(front->right);
    }
    cout << endl;
}
void printInorder(Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main() {
    Node* root = new Node(100);
    root->left = new Node(50);
    root->right = new Node(200);
    root->left->left = new Node(25);
    root->left->right = new Node(60);
    root->right->left = new Node(150);
    root->right->right = new Node(300);

    cout << "BST Inorder (sorted): ";
    printInorder(root);
    cout << endl;

    cout << "BST Level Order: ";
    printLevelOrder(root);
    convertBSTtoMaxHeap(root);

    cout << "\nAfter conversion to Max Heap:" << endl;
    cout << "Level Order: ";
    printLevelOrder(root);

    cout << "Postorder: ";
    function<void(Node*)> postorder = [&](Node* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    };
    postorder(root);
    cout << endl;

    return 0;
}
