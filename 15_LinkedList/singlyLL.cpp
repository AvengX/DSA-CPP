#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int findlength(Node*&head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
//INSERT AT HEAD
void insertathead(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    Node*newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}
//INSERT AT TAIL
void insertattail(Node*&head,Node*&tail,int data){
    if(tail==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    Node*newNode=new Node(data);
    tail->next=newNode;
    tail=newNode;

}
//INSERT AT ANY POSITION
void insertatposition(int data,int position,Node*&head,Node*&tail){
if(head==NULL){
    Node*newNode=new Node(data);
    head=newNode;
    tail=newNode;
    return;
}
if(position==0){
    insertathead(head,tail,data);
    return;
}
int len=findlength(head);
if(position>=len){
    insertattail(head,tail,data);
    return;
}
int i=1;
 Node*prev=head;
while(i<position){
   prev=prev->next;
   i++;
}
Node*curr=prev->next;
Node*newNode=new Node(data);
newNode->next=curr;
prev->next=newNode;
}
//DELETE AT ANY POSITION
void deleteatposition(int position,Node*&head,Node*&tail){
    if(head==NULL){
        cout<<"Cannot delete since LL is empty"<<endl;
        return;
    }
    if(position==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int i=1;
    Node*prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node*curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    if(prev->next==NULL){
        tail=prev;
    }
}
int main() {
Node*head=NULL;
Node*tail=NULL;
insertathead(head,tail,20);
insertathead(head,tail,30);
insertathead(head,tail,40);
insertathead(head,tail,50);
insertattail(head,tail,70);
print(head);
insertatposition(90,3,head,tail);
print(head);
deleteatposition(4,head,tail);
print(head);
cout<<endl;
    

    return 0;
}