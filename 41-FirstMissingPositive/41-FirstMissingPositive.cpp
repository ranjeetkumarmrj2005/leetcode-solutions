// Last updated: 7/4/2025, 1:30:44 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
            // 1 -1 3 4
           int i=0;
           while(i<n){
            if(nums[i]>0&&nums[i]<=n&&nums[i]!=nums[nums[i]-1]) swap(nums[i],nums[nums[i]-1]);
            else i++;
           }
        for(int i=0;i<n;i++){
        if(nums[i]==i+1) continue;
        else return i+1;
        }
     return n+1;
    }
};