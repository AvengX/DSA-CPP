#include<bits/stdc++.h>
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
    if(root->data > data) root->left=insertIntoBST(root->left,data);
    else root->right=insertIntoBST(root->right,data);
    return root;
}
void takeInput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void postOrderTraversal(Node*root){
    if(root==NULL) return;
    postOrderTraversal(root->right);
    postOrderTraversal(root->left);
    cout<<root->data<<" ";
}

int main(){
    Node*root=NULL;
    cout<<"Enter the data :"<<endl;
    takeInput(root);
    cout<<"Post order tree is :"<<endl;
    postOrderTraversal(root);
    return 0;
}