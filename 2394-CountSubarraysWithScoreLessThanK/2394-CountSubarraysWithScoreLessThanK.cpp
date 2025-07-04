// Last updated: 7/4/2025, 1:29:03 PM
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        long long sum = 0;
        long long count = 0;
        int i = 0, j = 0;
        while (j < n) {
            sum =sum + nums[j];
            long long len = j - i + 1;
            long long pro = sum * len;
            while (pro >= k && i <= j) {
                sum =sum- nums[i];
                i++;
                len = j - i + 1;
                pro = sum * len;
            }
            count =count+ ( j - i + 1);
            j++;
        }
        return count;
    }
};