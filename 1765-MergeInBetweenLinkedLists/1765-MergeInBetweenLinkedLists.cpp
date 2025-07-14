// Last updated: 7/14/2025, 1:47:35 PM

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temptaillist2=list2;
        while(temptaillist2->next!=NULL){
            temptaillist2=temptaillist2->next;
        }

        ListNode* tempAlist1;
        ListNode* tempBlist1;
        ListNode* temp=list1;
        int size=0;
        while(temp!=NULL){
            size++;
            if(size==a) tempAlist1=temp;
            if(size==b+2){
                tempBlist1=temp;
                break;
            }
            temp=temp->next;
        }
        tempAlist1->next=list2;
        temptaillist2->next=tempBlist1;
        return list1;
    }
};