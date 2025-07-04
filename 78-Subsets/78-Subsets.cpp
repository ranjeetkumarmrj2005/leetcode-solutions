// Last updated: 7/4/2025, 1:30:32 PM
class Solution {
public:
    void helper(vector<vector<int>>&finalAns,
      vector<int>ans,vector<int>nums,int idx){
        if(idx==nums.size()) {
            finalAns.push_back(ans);
            return ;
        }
        helper(finalAns,ans,nums,idx+1);
        ans.push_back(nums[idx]);
        helper(finalAns,ans,nums,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>finalAns;
        helper(finalAns,ans,nums,0);
        return finalAns;
    }
};