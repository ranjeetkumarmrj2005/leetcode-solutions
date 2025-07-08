// Last updated: 7/8/2025, 3:51:20 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int i=0;
        int j=1;
        while(j<n){
            if(nums[i]==nums[j]) j++;
            else{
                i++;
                nums[i]=nums[j];
                j++;
                count++;
            }
        }
        return count;
    }
};