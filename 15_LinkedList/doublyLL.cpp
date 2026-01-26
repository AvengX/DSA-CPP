#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Node with value :"<<this->data<<"deleted"<<endl;
    }
};
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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
void insertathead(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    Node*newNode=new Node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertattail(Node*&head,Node*&tail,int data){
    if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    Node*newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insertatposition(Node*&head,Node*&tail,int data,int position){
    if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    if(position==1){
        insertathead(head,tail,data);
        return ;
    }
    int length=getlength(head);
    if(position>length){
        insertattail(head,tail,data);
        return;
    }
    int i=1;
    Node*prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
    }
    Node*curr=prevNode->next;
    Node*newNode=new Node(data);
    newNode->prev=prevNode;
    prevNode->next=newNode;
    newNode->next=curr;
    curr->prev=newNode;
}
void deleteatposition(Node*&head,Node*&tail,int position){
    if(head==NULL){
        cout<<"Cannot be deleted the list is empty";
        return;
    }
    if(head->next==NULL){
        Node*temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len=getlength(head);
    if(position>len){
        cout<<"Please enter a valid position"<<endl;
        return;
    }
    if(position==1){
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    if(position==len){
        Node*temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    int i=1;
    Node*left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node*curr=left->next;
    Node*right=curr->next;
    left->next=right;
    right->prev=left;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}
int main() {

    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*head=first;
    Node*tail=third;
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    insertathead(head,tail,93);
    print(head);
    cout<<endl;
    insertattail(head,tail,92);
    print(head);
    insertatposition(head,tail,78,3);
    cout<<endl;
    print(head);
    cout<<endl;
    deleteatposition(head,tail,4);
    cout<<endl;
    print(head);
    cout<<endl;
    return 0;
}