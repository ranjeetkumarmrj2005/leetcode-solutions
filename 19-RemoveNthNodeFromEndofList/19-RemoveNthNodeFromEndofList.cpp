// Last updated: 7/12/2025, 9:04:32 AM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int targetidx=size-n;
        if(targetidx==0){
            head=head->next;
            return head;
        }
        size=0;
        temp=head;
        while(temp->next!=NULL){
            size++;
            if(size==targetidx) {
                temp->next=temp->next->next;
                return head;
            }
            else temp=temp->next;
        }
        return head;
    }
};