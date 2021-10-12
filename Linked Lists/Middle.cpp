class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* last = head;
        int n=0;
        int middle;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        temp=head;
        if(n%2!=0){
        middle=(n+1)/2;
        }
        else{
            middle=(n/2)+1;
        }
        for(int i=0;i<middle-1;i++){
            head=head->next;
        }
        return head;
    }
};