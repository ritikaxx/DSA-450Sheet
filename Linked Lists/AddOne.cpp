Node* reverse(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node* AddOne(Node* head){
    head=reverse(head);
    Node* curr=head;
    bool f=true;

    while(curr!=NULL && f==true){
        if(curr->data==9 && curr->next==NULL){
            curr->data=1;
            Node* temp = new Node(0);
            temp->next=head;
            head=temp;
            curr=curr->next;
        }
        else if(curr->data ==9){
            curr->data=0;
            curr= curr->next;
        }
        else{
            curr->data=curr->data+1;
            curr=curr->next;
            f=false;
        }
    }
    head=reverse(head);
    return head;
}
