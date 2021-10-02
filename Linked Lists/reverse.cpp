#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* head;
    Node* next;
};


Node* reverse( Node* head){
Node* next;
Node* prev=NULL;
Node* curr=head;

while(curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
}

Node* createNode(int data){
    Node* head = new Node(data);
}

int main(){
createNode(1);
createNode(3);
reverse(head);
}