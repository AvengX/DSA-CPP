#include<bits/stdc++.h>
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


pair<bool, int> solve(Node* root) {
    if(root == NULL) {
        pair<bool,int> p = make_pair(true, INT_MIN);
        return p;
    }
    if(root->left == NULL && root->right == NULL) {
 
        pair<bool,int> p = make_pair(true, root->data);
        return p;
    }
    pair<bool, int> leftAns = solve(root->left);
    pair<bool, int> rightAns = solve(root->right);
    if(leftAns.first == true &&
       rightAns.first == true &&
       root->data > leftAns.second &&
       root->data > rightAns.second) {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    else {
        pair<bool, int> p = make_pair(false, root->data);
        return p;
    }
}

bool isCompleteBT(Node* root) {
    if(root == NULL) return true;

    queue<Node*> q;
    q.push(root);
    bool foundNull = false;

    while(!q.empty()) {
        Node* front = q.front();
        q.pop();

        if(front == NULL) {
            foundNull = true;
        } else {
            if(foundNull) return false; 
            q.push(front->left);
            q.push(front->right);
        }
    }
    return true;
}

bool isMaxHeap(Node* root) {
    return isCompleteBT(root) && solve(root).first;
}

int main() {
    Node* root1 = new Node(10);
    root1->left = new Node(5);
    root1->right = new Node(6);
    root1->left->left = new Node(2);
    root1->left->right = new Node(3);

    cout << "Tree 1: ";
    if(isMaxHeap(root1))
        cout << "IS a Max Heap" << endl;
    else
        cout << "is NOT a Max Heap" << endl;
    Node* root2 = new Node(5);
    root2->left = new Node(10);
    root2->right = new Node(6);

    cout << "Tree 2: ";
    if(isMaxHeap(root2))
        cout << "IS a Max Heap" << endl;
    else
        cout << "is NOT a Max Heap" << endl;
    Node* root3 = new Node(10);
    root3->left = new Node(5);
    root3->right = new Node(6);
    root3->left->right = new Node(3);

    cout << "Tree 3: ";
    if(isMaxHeap(root3))
        cout << "IS a Max Heap" << endl;
    else
        cout << "is NOT a Max Heap" << endl;

    return 0;
}
