// Last updated: 7/8/2026, 6:48:16 PM
class Solution {
public:
    ListNode* reverse(ListNode* head){
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
    ListNode* removeNodes(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* head1=reverse(head);
        head=head1;
        ListNode* temp=head1->next;
        while(temp){
            if(temp->val==head1->val){
                head1=head1->next;
                temp=temp->next;
            }
            else if(temp->val>head1->val){
                head1=head1->next;
                temp=temp->next;
            }
            else{
                head1->next=temp->next;
                temp=head1->next;

            }
           
        }
        head1=reverse(head);
        return head1;
        
    }
};