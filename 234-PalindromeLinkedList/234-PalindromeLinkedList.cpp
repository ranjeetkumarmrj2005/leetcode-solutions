// Last updated: 7/8/2026, 6:49:38 PM
class Solution {
public:
ListNode* reverseList(ListNode* head) {
        ListNode* CURR=head;
        ListNode* PREV=NULL;
        ListNode* NEXT=head;
        while(CURR){
            NEXT=NEXT->next;
            CURR->next=PREV;
            PREV=CURR;
            CURR=NEXT;
        }
       return PREV;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
           slow=slow->next;// left middle
           fast=fast->next->next;
        }
        ListNode* newHead=reverseList(slow->next);
        ListNode* a =head;
        ListNode* b =newHead;

        while(b){
            if(a->val!=b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;
    }
};