// Last updated: 7/4/2025, 1:29:11 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};