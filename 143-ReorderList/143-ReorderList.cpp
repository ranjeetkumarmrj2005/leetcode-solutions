// Last updated: 7/8/2026, 6:49:59 PM

class Solution {
public:
    ListNode* reverseLinklist(ListNode* head){
        ListNode* CURR=head;
        ListNode* NEXT=head;
        ListNode* PREV=NULL;
        while(CURR!=NULL){
            NEXT=NEXT->next;
            CURR->next=PREV;
            PREV=CURR;
            CURR=NEXT;
        }
        return PREV;
    }
    void reorderList(ListNode* head) {
        if(head->next==NULL||head->next->next==NULL) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        ListNode* c=reverseLinklist(temp);
        ListNode* a=head;
        ListNode* b=head->next;
        while(c!=NULL && b!=NULL){
            a->next=c;
            a=a->next;
            c=c->next;
            a->next=b;
            a=a->next;
            b=b->next;
        }
        return;
    }
};