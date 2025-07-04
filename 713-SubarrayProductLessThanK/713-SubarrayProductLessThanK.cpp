// Last updated: 7/4/2025, 1:29:43 PM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        long long product=1;
        int count=0;
        while(i<n){
            product=product*nums[j];
            if(product<k){
                count++;
                j++;
            }
            else {
                i++;
                j=i;
                product=1;
            }
            if(j==n){
                i++;
                j=i;
                product=1;
            }
        }
        return count;
    }
};