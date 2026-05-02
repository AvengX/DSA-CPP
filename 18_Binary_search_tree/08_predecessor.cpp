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
    cout<<"Enter the data :";
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}    

int predecessor(Node*root,int target){
    Node*curr=root;
    int pred=-1;
    while(curr!=NULL){
        if(target>curr->data){
            pred=curr->data;
            curr=curr->right;
        }else{
            curr=curr->left;
        }
    }
    return pred;
}

int main() {
    Node*root=NULL;
    takeInput(root);
    int target=20;
    cout<<"The predecessor of "<<target<<" is :"<<predecessor(root,target);
    return 0;
}