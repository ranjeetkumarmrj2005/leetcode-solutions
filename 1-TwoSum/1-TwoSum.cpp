// Last updated: 7/4/2025, 1:30:59 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)  return { i,j};
            }
        }
         return {};
    }   
    };