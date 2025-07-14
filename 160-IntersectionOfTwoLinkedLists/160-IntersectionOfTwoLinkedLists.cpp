// Last updated: 7/14/2025, 1:48:43 PM

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA=0,sizeB=0;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL || tempB!=NULL){
            if(tempA!=NULL){
                sizeA++;
                tempA=tempA->next;
            }
            if(tempB!=NULL){
                sizeB++;
                tempB=tempB->next;
            }
        }
        tempA=headA;
        tempB=headB;
        int x=sizeA-sizeB;
        if(x>0){
            for(int i=0;i<x;i++){
                tempA=tempA->next;
            }
            while(tempA!=NULL){
                if(tempA==tempB) return tempA;
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        else {
            for(int i=0;i<-x;i++){
                tempB=tempB->next;
            }
            while(tempA!=NULL){
                if(tempA==tempB) return tempA;
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        return NULL;
    }
};