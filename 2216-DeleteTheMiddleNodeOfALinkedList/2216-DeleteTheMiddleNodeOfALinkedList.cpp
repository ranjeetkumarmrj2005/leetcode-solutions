// Last updated: 7/14/2025, 1:47:34 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if( head->next==NULL){
            head=NULL;
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow->next==NULL){
            head->next=NULL;
            return head;
        }
        slow->val=slow->next->val;
        slow->next=slow->next->next;
        return head;
    }
};