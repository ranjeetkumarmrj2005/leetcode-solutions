// Last updated: 7/4/2025, 1:30:25 PM
class Solution {
public:
    int singleNumber(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
               int x=0;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(nums[i]==nums[j]){
                    x=1;
                    break;
                }

            }
            if(x==0) return nums[i];
        }
        return 0;
    }
};