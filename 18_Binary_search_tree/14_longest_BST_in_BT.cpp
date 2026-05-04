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

class NodeData {
public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;

    NodeData(int size, int maxVal, int minVal, bool validBST) {
        this->size = size;
        this->maxVal = maxVal;
        this->minVal = minVal;
        this->validBST = validBST;
    }
};

NodeData findLargestBST(Node* root, int &ans) {
    if(root == NULL) {
        return NodeData(0, INT_MIN, INT_MAX, true);
    }

    NodeData left = findLargestBST(root->left, ans);
    NodeData right = findLargestBST(root->right, ans);

    NodeData curr(
        left.size + right.size + 1,
        max(root->data, right.maxVal),
        min(root->data, left.minVal),
        false
    );

    if(left.validBST && right.validBST &&
       root->data > left.maxVal &&
       root->data < right.minVal) {
        curr.validBST = true;
        ans = max(ans, curr.size);
    }

    return curr;
}

int largestBST(Node* root) {
    int ans = 0;
    findLargestBST(root, ans);
    return ans;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(60);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    cout << largestBST(root);

    return 0;
}