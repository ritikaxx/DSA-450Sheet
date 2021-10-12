int intersectPoint(Node* head1, Node* head2)
{
    int l1=0,l2=0;
   Node *ptr1=head1;
   Node *ptr2=head2;
   while(ptr1)
   {
       l1++;
       ptr1=ptr1->next;
   }
   while(ptr2)
   {
       l2++;
       ptr2=ptr2->next;
   }
   ptr1=head1;
   ptr2=head2;
   if(l1>l2)
   {
       while(l1!=l2)
       {
           ptr1=ptr1->next;
           l1--;
       }
   }
   else
   {
       while(l2!=l1)
       {
           ptr2=ptr2->next;
           l2--;
       }
   }
   while(ptr1 && ptr2)
   {
       if(ptr1 == ptr2)
       {
           return ptr1->data;
       }
       ptr1=ptr1->next;
       ptr2=ptr2->next;
   }
   return -1;

}
