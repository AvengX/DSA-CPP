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

// bool findNodeInBST(Node*root,int target){
//     if(root==NULL) return false;
//     if(root->data==target) return true;
//     if(target>root->data) return findNodeInBST(root->right,target);
//     else return findNodeInBST(root->left,target);
// }

bool findNodeInBST(Node*root,int target){
    if(root==NULL) return false;
    if(root->data==target) return true;
    bool leftAns=false;
    bool rightAns=false;
    if(target>root->data) leftAns=findNodeInBST(root->right,target);
    else rightAns=findNodeInBST(root->left,target);
    return leftAns || rightAns;
}

int main(){
    Node*root=NULL;
    cout<<"Enter the data :"<<endl;
    takeInput(root);
    cout<<"Printing the tree"<<endl;
    levelOrderTraversal(root);
    int target=15;
    cout<<"The target element is :"<<target<<endl;
    bool ans=findNodeInBST(root,15);
    cout<<target<<" is present or not :"<<ans<<endl;
    return 0;
}