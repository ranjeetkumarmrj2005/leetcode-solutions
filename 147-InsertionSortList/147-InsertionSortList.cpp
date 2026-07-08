// Last updated: 7/8/2026, 6:49:56 PM

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=0;i<n;i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};