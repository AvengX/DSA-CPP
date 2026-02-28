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

Node*buildTree(){
    int data;
    cout<<"Enter the data :"<<endl;
    cin>>data;
    if(data==-1) return NULL;
    Node*root=new Node(data);
    cout<<"Enter the data for the left part of the "<<data<<" node"<<endl;
    root->left=buildTree();
    cout<<"Enter the data for the right part of the "<<data<<" node"<<endl;
    root->right=buildTree();
    return root;
}

void postOrderTraversal(Node*root){
if(root==NULL) return;
postOrderTraversal(root->left);
postOrderTraversal(root->right);
cout<<root->data<<" ";
}

int main() {
    Node*root=NULL;
    root=buildTree();
    postOrderTraversal(root);
    return 0;
}