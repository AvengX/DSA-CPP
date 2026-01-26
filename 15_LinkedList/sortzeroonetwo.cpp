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
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void sortzeroonetwo(Node*&head){
    int zero=0;
    int one=0;
    int two=0;
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0)
        zero++;
    else if(temp->data==1)
    one++;
else if(temp->data==2)
two++;
temp=temp->next;
    }
    temp=head;
    while(zero--){
        temp->data=0;
        temp=temp->next;
    }
    while(one--){
        temp->data=1;
        temp=temp->next;
    }
    while(two--){
        temp->data=2;
        temp=temp->next;

    }
}
Node* sort2(Node*&head){
    if(head==NULL){
        cout<<"LL is emoty"<<endl;
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    Node*zerohead=new Node(-101);
    Node*zerotail=zerohead;
    Node*onehead=new Node(-101);
    Node*onetail=onehead;
    Node*twohead=new Node(-101);
    Node*twotail=twohead;
    Node*curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            Node*temp=curr;
            curr=curr->next;
            temp->next=NULL;
            zerotail->next=temp;
            zerotail=temp;
        }
        else if(curr->data==1){
            Node*temp=curr;
            curr=curr->next;
            temp->next=NULL;
            onetail->next=temp;
            onetail=temp;
        }
        else if(curr->data==2){
            Node*temp=curr;
            curr=curr->next;
            temp->next=NULL;
            twotail->next=temp;
            twotail=temp;
        }
    }
    
    // Remove dummy nodes
    Node* temp = onehead;
    onehead = onehead->next;
    temp->next = NULL;
    delete temp;

    temp = twohead;
    twohead = twohead->next;
    temp->next = NULL;
    delete temp;

    // Connect lists
    if(onehead != NULL){
        zerotail->next = onehead;
        if(twohead != NULL)
            onetail->next = twohead;
    } else {
        if(twohead != NULL)
            zerotail->next = twohead;
    }

    // Remove zero dummy node
    temp = zerohead;
    zerohead = zerohead->next;
    temp->next = NULL;
    delete temp;
    
    return zerohead;
}
int main() {

      Node* head = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(0);
  Node* fourth = new Node(1);
  Node* fifth = new Node(0);
  Node* sixth = new Node(0);l
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;

  cout << "input LL: ";
  print(head);
//    sortzeroonetwo(head);
//    print(head); 
  cout << "printing the sorted list " << endl;
  Node* temp = NULL;
  head = sort2(head);
  //cout << "Came out of sort function" << endl;
  print(head);
    return 0;
}