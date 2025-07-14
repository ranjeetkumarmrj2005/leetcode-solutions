// Last updated: 7/14/2025, 1:48:38 PM

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode* temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->val==val){
                temp->val=temp->next->val;
                temp->next=temp->next->next;

            }
            else if(temp->next->val==val) {
                temp->next=temp->next->next;
            }
            else temp=temp->next;
        }
        if(head->val==val) head=head->next;
        return head;
    }
};