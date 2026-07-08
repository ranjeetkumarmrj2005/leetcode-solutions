// Last updated: 7/8/2026, 6:48:24 PM

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL|| left==right) return head;
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        ListNode* temp=head;
        int n=1;
        while(temp){
            if(n==left-1)  a=temp;
            if(n==left)    b=temp;
            if(n==right)   c=temp;
            if(n==right+1) d=temp;
            n++;
            temp=temp->next;
        }     
        if(a!=NULL) a->next=NULL;
        c->next=NULL;   
        c=reverseList(b);
        if(a!=NULL) a->next=c;
        b->next=d;
        if(a) return head;
        else return c;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp=head;
        int gap=1;
        while(temp && temp->next){
            int remLen=0;
            ListNode* t=temp->next;
            for(int i=1;i<=gap+1 && t!=NULL;i++){
                t=t->next;
                remLen++;
            }
            if(remLen<gap+1) gap=remLen-1;
            if(gap%2!=0) reverseBetween(temp,2,2+gap);
            gap++;
            for(int i=1;temp!=NULL && i<=gap;i++){
                temp=temp->next;
            }
        }
        return head;
    }
};