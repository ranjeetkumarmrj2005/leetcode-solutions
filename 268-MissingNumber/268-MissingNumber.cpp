// Last updated: 7/4/2025, 1:30:06 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==n) i++;
            else if(nums[i]!=i) swap(nums[i],nums[nums[i]]);
            else i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i) return i;
        }
        return n;
    }
};