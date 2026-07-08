// Last updated: 7/8/2026, 6:48:26 PM

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;
        if(c==NULL) return {-1,-1};
        int idx=1;
        int idx1=-1;
        int idx2=-1;
        while(c){
            if(b->val>a->val && b->val>c->val || b->val<a->val && b->val<c->val ){
                if(idx1==-1) idx1=idx;
                else idx2=idx;
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        if(idx2==-1) return {-1,-1};
        int maxd=idx2-idx1;
        int mind=INT_MAX;
        idx=1;
        idx1=-1;
        idx2=-1;
        a=head;
        b=head->next;
        c=head->next->next;
        while(c){
            if(b->val>a->val && b->val>c->val || b->val<a->val && b->val<c->val){
                idx1=idx2;
                idx2=idx;
                if(idx1!=-1){
                    int d=idx2-idx1;
                    mind=min(mind,d);
                }
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        return {mind,maxd};
    }
};