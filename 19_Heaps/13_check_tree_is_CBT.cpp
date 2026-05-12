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

int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isCBT(Node* root, int index, int totalNodes) {
    if (root == NULL) return true;

    if (index >= totalNodes) return false;

    bool left = isCBT(root->left, 2 * index + 1, totalNodes);
    bool right = isCBT(root->right, 2 * index + 2, totalNodes);

    return left && right;
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

int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);

    int total1 = countNodes(root1);
    cout << "Tree 1 (Level Order): ";
    printLevelOrder(root1);
    cout << "Total Nodes: " << total1 << endl;
    cout << "Is CBT? " << (isCBT(root1, 0, total1) ? "YES" : "NO") << endl;

    cout << endl;

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right->right = new Node(7);

    int total2 = countNodes(root2);
    cout << "Tree 2 (Level Order): ";
    printLevelOrder(root2);
    cout << "Total Nodes: " << total2 << endl;
    cout << "Is CBT? " << (isCBT(root2, 0, total2) ? "YES" : "NO") << endl;

    cout << endl;

    Node* root3 = new Node(1);
    root3->left = new Node(2);
    root3->right = new Node(3);
    root3->right->left = new Node(6);

    int total3 = countNodes(root3);
    cout << "Tree 3 (Level Order): ";
    printLevelOrder(root3);
    cout << "Total Nodes: " << total3 << endl;
    cout << "Is CBT? " << (isCBT(root3, 0, total3) ? "YES" : "NO") << endl;

    return 0;
}
