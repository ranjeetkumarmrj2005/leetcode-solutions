// Last updated: 7/8/2026, 6:50:29 PM

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* PREV=dummy;
        ListNode* CURR=head;
        while(CURR!=NULL){
            if(CURR->next!=NULL && CURR->val==CURR->next->val){
                while(CURR->next!=NULL && CURR->val==CURR->next->val){
                    CURR=CURR->next;
                }
                PREV->next=CURR->next;
            }
            else PREV=CURR;
            CURR=CURR->next;
        }
        return dummy->next;
    }
};