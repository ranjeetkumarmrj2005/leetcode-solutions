// Last updated: 7/8/2026, 6:48:39 PM
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
    int getDecimalValue(ListNode* head) {
    ListNode* temp=reverseList(head);
        int i=0;
        int sum=0;
       while(temp){
        sum=sum + temp->val * pow(2,i);
        i++;
        temp=temp->next;
       }
       return sum;
    }
};