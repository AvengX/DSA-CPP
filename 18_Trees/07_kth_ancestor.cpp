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
	cout<<"Enter the data for the left part of "<<data<<" node"<<endl;
	root->right=buildTree();
	return root;
}

bool kthAncestor(Node*root,int&k,int p){
	if(root==NULL) return false;
	if(root->data==p) return true;
	bool leftAns=kthAncestor(root->left,k,p);
	bool rightAns=kthAncestor(root->right,k,p);
	if(leftAns || rightAns){
     k--;
	if(k==0){
		cout<<"Answer is :"<<root->data<<endl;
		k=-1;
	}
	return true;
}
return false;
}

int main() {
	Node*root=NULL;
	root=buildTree();
	int k=1;
	bool found=kthAncestor(root,k,4);
	return 0;
}