// Last updated: 7/7/2025, 9:08:53 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int count=0;
        // 3 2 2 3  and val=3,ans=2
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