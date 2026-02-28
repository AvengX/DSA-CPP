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
    cout<<"Enter the data for the left part of "<<data<<" node"<<endl;
    root->left=buildTree();
    cout<<"Enter the data for the right part of "<<data<<" node"<<endl;
    root->right=buildTree();
    return root;
}    

void levelOrderTraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }

}

int main() {
    Node*root=NULL;
    root=buildTree();
    levelOrderTraversal(root);
    return 0;
}