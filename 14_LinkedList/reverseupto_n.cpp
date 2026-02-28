#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(Node*head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
Node* reverseknodes(Node*&head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len=getlength(head);
    if(k>len){
        return head;
    }
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=reverseknodes(forward,k);
    }
    return prev;
}

int main() {
Node*head=new Node(10);
Node*second=new Node(20);
Node*third=new Node(30);
Node*fourth=new Node(40);
Node*fifth=new Node(50);
Node*sixth=new Node(60);
Node*seventh=new Node(70);
Node*eighth=new Node(80);
Node*ninth=new Node(90);
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
  sixth -> next = seventh;
  seventh -> next = eighth;
  eighth -> next = ninth;
  print(head);
  head=reverseknodes(head,4);
  print(head);


    

    return 0;
}