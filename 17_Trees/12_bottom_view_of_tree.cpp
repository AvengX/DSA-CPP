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
    cout << "Enter the data:";
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

void printBottomView(Node* root) {
    if(root == NULL) return;

    map<int, int> BottomNode;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));

    while(!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* Bottom = temp.first;
        int hd = temp.second;

        BottomNode[hd] = Bottom->data;

        if(Bottom->left)
            q.push(make_pair(Bottom->left, hd - 1));
        
        if(Bottom->right)
            q.push(make_pair(Bottom->right, hd + 1));
    }

    cout << "Printing the answer :" << endl;
    for(auto i : BottomNode) {
        cout << i.second << " ";
    }
    cout << endl;
}

int main() {
    Node* root = buildTree();
    printBottomView(root);
    return 0;
}
