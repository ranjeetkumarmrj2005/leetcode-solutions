// Last updated: 7/14/2025, 1:48:10 PM
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* firstK;
        int len=0;
        while(temp!=NULL){
            len++;
            if(len==k) {
                firstK=temp;
                break;
            }
            temp=temp->next;
        }
        ListNode* secondK=head;
        while(temp->next!=NULL){
            secondK=secondK->next;
            temp=temp->next;
        }
        swap(firstK->val,secondK->val);
        return head;
    }
};