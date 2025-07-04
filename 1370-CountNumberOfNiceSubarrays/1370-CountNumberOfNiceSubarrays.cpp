// Last updated: 7/4/2025, 1:29:21 PM
class Solution {
public:
    int fun(vector<int>& nums, int k){
        if(k<0) return 0;
        int n=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int count=0;
        while(j<n){
            sum=sum+nums[j];
            while(sum>k){
                sum=sum-nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        }
        return fun(nums,k)-fun(nums,k-1);
    }
};