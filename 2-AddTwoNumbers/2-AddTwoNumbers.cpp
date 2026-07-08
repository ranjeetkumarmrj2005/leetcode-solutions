// Last updated: 7/8/2026, 6:50:58 PM
class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int r;
        int t=0;
        ListNode* farzi=new ListNode(-1);
        ListNode* temp=farzi;
        while(l1!=NULL || l2!=NULL ){
            if(l1!=NULL && l2!=NULL){
                r=l1->val+l2->val+t;
                if(r>=10){
                    r=r%10;
                    t=1;
                }
                else t=0;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1!=NULL){
                r=l1->val+t;
                if(r>=10){
                    r=r%10;
                    t=1;
                }
                else t=0;
                l1=l1->next;
            }
            else{
                r=l2->val+t;
                if(r>=10){
                    r=r%10;
                    t=1;
                }
                else t=0;
                l2=l2->next;
            }
           ListNode* x=new ListNode(r);
           farzi->next=x;
           farzi=x;
        }
        if(t==1){
            farzi->next=new ListNode(t);
            farzi=farzi->next;
        }
        else farzi->next=NULL;
        return temp->next;
    }
};