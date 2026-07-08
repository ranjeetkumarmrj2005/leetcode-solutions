// Last updated: 7/8/2026, 6:50:45 PM

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

    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(-1);
        ListNode* d1=dummy;
        ListNode* temp=head;
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;
        while(temp && temp->next){
            b->next=NULL;
            b=reverseList(a);
            d1->next=b;
            d1=a;
           if(c && c->next){
            a->next=c;
            a=a->next;
            b=c->next;
            c=c->next->next;
            temp=a;
           }
        }
        a->next=c;
        return dummy->next;
        
    }
};