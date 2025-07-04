// Last updated: 7/4/2025, 1:29:08 PM
class Solution {
public:
    int specialArray(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    //     3 6 7 7 0 
    //     0 3 6 7 7 
    if(nums[0]>=n) return n;
    for(int i=1;i<n;i++){
        int len=n-i;
        if(nums[i]>=len&&nums[i]!=nums[i-1]&&len>nums[i-1]) return len;
    }
    return -1;
    }
};