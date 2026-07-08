// Last updated: 7/8/2026, 6:50:24 PM

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* low =new ListNode(-1);
        ListNode* high=new ListNode(-1);
        ListNode* tempL=low;
        ListNode* tempH=high;

        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x) {
                tempL->next=temp;
                tempL=tempL->next;
                temp=temp->next;
            }
            else{
                tempH->next=temp;
                tempH=tempH->next;
                temp=temp->next;
            }
            tempH->next=NULL;
            tempL->next=high->next;
        }
        return low->next;
    }
};