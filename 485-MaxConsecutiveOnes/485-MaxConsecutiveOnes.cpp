// Last updated: 7/11/2026, 11:46:00 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive=0;
        int consecutive=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {
                consecutive++;
            }
            else {
                if(maxConsecutive < consecutive){
                    maxConsecutive = consecutive;
                   
                }
                consecutive=0;
            }
        }
        if(maxConsecutive < consecutive){
            maxConsecutive = consecutive;
            consecutive=0;
        }
        return maxConsecutive;
    }
};