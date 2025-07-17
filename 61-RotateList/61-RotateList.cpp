// Last updated: 7/17/2025, 1:43:11 PM
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL|| head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* tail;
        int size=1;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        tail=temp;
        k=k%size;
        temp=head;
        for(int i=1;i<size-k;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};