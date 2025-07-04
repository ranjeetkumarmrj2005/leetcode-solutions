// Last updated: 7/4/2025, 1:30:50 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivotidx = -1;
        int check;
        int pivot;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivotidx = i;
                pivot=nums[i];
                break;
            }
        }
        if (pivotidx != -1){
        for (int i =pivotidx+1;i<nums.size();i++){
            if(nums[i]>pivot) {
                check=i;
            }
        }
        
                swap(nums[pivotidx],nums[check]);
                reverse(nums.begin() + pivotidx + 1, nums.end());
                
            } 
            else
                reverse(nums.begin(), nums.end());
    }
};
