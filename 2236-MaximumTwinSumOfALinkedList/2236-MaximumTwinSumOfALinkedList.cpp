// Last updated: 7/8/2026, 6:48:22 PM

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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=reverseList(slow);
        slow=head;
        int sum=0;
        int maxpairsum=0;
        while(fast){
            sum=slow->val+fast->val;
            if(sum>maxpairsum) maxpairsum=sum;
            slow=slow->next;
            fast=fast->next;
        }
        return maxpairsum;
    }
};