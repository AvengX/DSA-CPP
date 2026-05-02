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


// int maxVal(Node* root){
//     Node*temp=root;
//     if(temp==NULL){
//         return -1;
//     }
//     while(temp->right != NULL) temp = temp->right;
//     return temp->data;
// }
int maxVal(Node* root){
    if(root==NULL){
        return -1;
    }
    while(root->right != NULL) root = root->right;
    return root->data;
}


Node*deleteNodeBST(Node*root,int target){
    if(root==NULL) return root;
    if(root->data==target){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left!=NULL && root->right==NULL){
            Node*child=root->left;
             delete root;
             return child;
        }
        else if(root->left==NULL && root->right!=NULL){
            Node*child=root->right;
            delete root;
            return child;
        }
        else{
            int inOrderPre=maxVal(root->left);
            root->data=inOrderPre;
            root->left=deleteNodeBST(root->left,inOrderPre);
            return root;
        }
    }
else if(target>root->data){
    root->right=deleteNodeBST(root->right,target);
}
else if(target<root->data){
    root->left=deleteNodeBST(root->left,target);
}
return root;
}

int main(){
    Node*root=NULL;
    cout<<"Enter the data :"<<endl;
    takeInput(root);
    // cout<<"Tree before deletion :"<<endl;
    // levelOrderTraversal(root);
    root=deleteNodeBST(root,100);
    cout<<"Tree after deletion :"<<endl;
    levelOrderTraversal(root);
    return 0;
} 