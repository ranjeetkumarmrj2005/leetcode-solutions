// Last updated: 7/11/2025, 5:43:58 PM
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int size=0;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        size++;
        int target=(size)/2+1;
        size=0;
        temp=head;
        while(temp->next!=NULL){
            size++;
            if(size==target) return temp;
            else temp=temp->next;
        }
        return temp;
    }
};