class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.

       Node * removeDuplicates( Node *head) 
        {
      set<int>s;
      Node *temp=head;
      s.insert(temp->data);
      while(temp->next!=NULL)
      {
          if(s.find(temp->next->data)==s.end())
          {
              s.insert(temp->next->data);
              temp=temp->next;
          }
          
          else
          {
              Node *r=temp->next;
              temp->next=r->next;
              free(r);
              
          }
          
      }
      return head;
    }
};