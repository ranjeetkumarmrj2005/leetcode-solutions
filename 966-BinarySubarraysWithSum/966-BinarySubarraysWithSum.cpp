// Last updated: 7/4/2025, 1:29:30 PM
class Solution {
public:
    int fun(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int n=nums.size();
        int count=0;
        int i=0;
        int j=0;
        int sum=0;
        while(j<n){
            sum=sum+nums[j];
            while(sum>goal){
                sum=sum-nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return fun( nums,  goal) - fun(nums,goal-1);
        }
};