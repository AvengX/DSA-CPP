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

Node*BuildTree(){
    int data;
    cout<<"Enter the data :";
    cin>>data;
    if(data==-1) return NULL;
    Node*root=new Node(data);
    cout<<"Enter the data for the left part of the tree :"<<data<<endl;
    root->left=BuildTree();
    cout<<"Enter the data for the right part of the tree :"<<data<<endl;
    root->right=BuildTree();
    return root;
}

void TopViewOfTree(Node*root){
    if(root==NULL) return;
    map<int,int>topNode;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();
        Node*frontNode=temp.first;
        int hd=temp.second;
        if(topNode.find(hd)==topNode.end()){
            topNode[hd]=frontNode->data;
        }
        if(frontNode->left) q.push(make_pair(frontNode->left,hd-1));
        if(frontNode->right) q.push(make_pair(frontNode->right,hd+1));
    }   
    cout<<"Top View of tree is :"<<endl;
    for(auto i:topNode){
        cout<<i.second<<" ";
    }
}

int main(){
    Node*root=BuildTree();
    TopViewOfTree(root);
    return 0;
}