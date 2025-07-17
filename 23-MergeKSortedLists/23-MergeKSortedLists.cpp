// Last updated: 7/17/2025, 1:43:25 PM

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* c= new ListNode(-1);
        ListNode* temp=c;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <= list2->val){
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
                temp=temp->next; 
            }
        }
        if(list1==NULL){
            temp->next=list2;
        }
        else{
            temp->next=list1;
        }
        return c->next;
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a=lists[lists.size()-1];
            lists.pop_back();
            ListNode* b=lists[lists.size()-1];
            lists.pop_back();
            ListNode* c= mergeTwoLists(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};