// Last updated: 7/8/2026, 6:49:23 PM

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    if(head==NULL || head->next==NULL || head->next->next==NULL) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead=even;
        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;
    }
};