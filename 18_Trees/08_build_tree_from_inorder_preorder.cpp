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

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

int findPosition(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

Node* buildTreeFromPreorderInorder(int inorder[], int preorder[], int size, int &preindex, int inorderStart, int inorderEnd) {
    if (preindex >= size || inorderStart > inorderEnd) {
        return NULL;
    }

    int element = preorder[preindex++];
    Node* root = new Node(element);
    int pos = findPosition(inorder, size, element);

    root->left = buildTreeFromPreorderInorder(inorder, preorder, size, preindex, inorderStart, pos - 1);
    root->right = buildTreeFromPreorderInorder(inorder, preorder, size, preindex, pos + 1, inorderEnd);

    return root;
}

int main() {
    int inorder[] = {50, 30, 10, 70, 5, 100, 20, 80};
    int preorder[] = {5, 10, 30, 50, 70, 20, 100, 80};
    int size = 8;
    int preindex = 0;
    int inorderStart = 0;
    int inorderEnd = size - 1;

    cout << "Build tree :" << endl;
    Node* root = buildTreeFromPreorderInorder(inorder, preorder, size, preindex, inorderStart, inorderEnd);
    
    cout << endl << "Printing level tree order :" << endl;
    levelOrderTraversal(root);

    return 0;
}