struct Node *removeDuplicates(struct Node *head)
{
// your code goes here
   struct Node *current=head;
   while(current!=NULL && current->next!=NULL){
       if(current->data==current->next->data){
           
           current->next=current->next->next;
          
       }
       else{
           current=current->next;
       }
   }
   return  head;
}
