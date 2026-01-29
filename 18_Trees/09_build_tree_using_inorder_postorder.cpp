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

void levelOrderTraversal(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        
        }else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

        }
    }
}

int findPosition(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
Node* buildTreeFromPostorderInorder(int inorder[],int postorder[],int size,int &postindex,int inorderStart,int inorderEnd){
    if(postindex<0 || inorderStart > inorderEnd){
        return NULL;
    }

    int element=postorder[postindex--];
    Node*root=new Node(element);
    int pos=findPosition(inorder,size,element);
    root->right=buildTreeFromPostorderInorder(inorder,postorder,size,postindex,pos+1,inorderEnd);
    root->left=buildTreeFromPostorderInorder(inorder,postorder,size,postindex,inorderStart,pos-1);
    return root;
}

int main() {
    int inorder[]={40,20,10,50,30,60};
    int postorder[]={40,20,50,60,30,10};
    int size=6;
    int postindex=size-1;
    int inorderStart=0;
    int inorderEnd=size-1;

    cout<<"Build tree :"<<endl;
    Node*root=buildTreeFromPostorderInorder(inorder,postorder,size,postindex,inorderStart,inorderEnd);
    cout<<endl<<"Printing level tree order :"<<endl;
    levelOrderTraversal(root);
    return 0;
}