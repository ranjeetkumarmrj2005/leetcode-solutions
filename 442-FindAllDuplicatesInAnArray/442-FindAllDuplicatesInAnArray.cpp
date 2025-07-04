// Last updated: 7/4/2025, 1:29:55 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>u;
        int i=0;
        while(i<n){
            if(nums[i]!=i+1 && nums[i]!=nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
            else i++; 
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) u.push_back(nums[i]);
        }
        return u;
    }
};