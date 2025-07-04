// Last updated: 7/4/2025, 1:29:42 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      //  1 8 11 17 22 28
      //  2 3 2
      int n=nums.size();
      for(int i=1;i<n;i++) nums[i]=nums[i-1]+nums[i];
      if(nums[0]==nums[n-1]) return 0;
      for(int i=1;i<n;i++){
        if(nums[i-1]==nums[n-1]-nums[i]) return i;
      }
      return -1;
    }
};