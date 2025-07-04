// Last updated: 7/4/2025, 1:29:31 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
       int i=0;
       int j=n-1;
       while(i<j){
        if(nums[i]%2==0) i++;
        else if(nums[i]%2!=0&&nums[j]%2==0) {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        else if(nums[i]%2!=0&&nums[j]%2!=0) j--;
       }
        return nums;
    }
};