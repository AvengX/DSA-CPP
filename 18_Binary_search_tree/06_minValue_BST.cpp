#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node*insertIntoBST(Node*root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(root->data>data) root->left=insertIntoBST(root->left,data);
    else root->right=insertIntoBST(root->right,data);
    return root;
}

void takeInput(Node*&root){
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

int minElement(Node*root){
    Node*temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int main() {
    Node*root=NULL;
    takeInput(root);
    cout<<"The minimum element in tree is :"<<minElement(root);
    return 0;
}