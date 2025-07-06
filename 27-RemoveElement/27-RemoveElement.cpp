// Last updated: 7/6/2025, 10:02:53 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int count=0;
        // 2 2 3 3 
        while(i<=j){
            if(nums[j]==val){
                count++;
                j--;
            }
            else if(nums[i]==val){
                swap(nums[i],nums[j]);
                count++;
                j--;
            }
            else i++;
        }
        return n-count;
    }
};