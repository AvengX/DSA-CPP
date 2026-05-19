#include <bits/stdc++.h>
using namespace std;

bool checkCircularLL(Node*head){
    unordered_map<Node*,bool>vis;
    Node*temp=head;
    while(temp!=NULL){
        if(vis.find(temp)!=vis.end(temp)){
            vis[temp]=true;
        }else{
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main() {
    
    return 0;
}