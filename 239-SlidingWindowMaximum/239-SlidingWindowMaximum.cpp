// Last updated: 7/8/2026, 6:49:33 PM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        int NGIdx[n];
        stack<int>st;
        st.push(n-1);
        NGIdx[n-1]=n;
        for(int i=n-2;i>=0;i--){
        while(st.size()>0 && nums[st.top()]<=nums[i]){
            st.pop();
        }
        if(st.size()==0) NGIdx[i]=n;
        else NGIdx[i]=st.top();
        st.push(i);
        }
        for(int i=0;i<=n-k;i++){
            int mx=nums[i];
            int j=i;
            while(j<i+k){
                mx=nums[j];
                j=NGIdx[j];
            }
            ans.push_back(mx);
        }
       return ans;
    }
};