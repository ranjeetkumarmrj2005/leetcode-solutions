// Last updated: 7/10/2025, 10:44:29 PM
class Solution {
public:
    int fun(vector<int>& nums, int k){
        if(k<0) return 0;
        int n=nums.size(), i=0, j=0,sum=0, count=0;
        while(j<n){
            sum=sum+nums[j];
            while(sum>k){
                sum=sum-nums[i];
                i++;}
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