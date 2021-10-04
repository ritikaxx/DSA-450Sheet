class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL)
                return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
};