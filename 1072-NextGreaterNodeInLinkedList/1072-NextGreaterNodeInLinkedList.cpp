// Last updated: 7/8/2026, 6:48:45 PM
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>copied_vector;
        while(temp){
            copied_vector.push_back(temp->val);
            temp=temp->next;
        }
        int n=copied_vector.size();

        vector<int>ans_vector(n,0);
        stack<int>st;
        st.push(copied_vector[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && copied_vector[i]>=st.top()){
                st.pop();
            }
            if(st.size()==0) ans_vector[i]=0;
            else ans_vector[i]=st.top();

            st.push(copied_vector[i]);
        }
        return ans_vector;
    }
};