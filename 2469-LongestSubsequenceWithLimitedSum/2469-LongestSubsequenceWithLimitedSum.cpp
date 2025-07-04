// Last updated: 7/4/2025, 1:29:02 PM
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        // 1 3 7 12     3 10 21
        // 2 5 9 14     1
        vector<int> v(m);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i == 0) continue;
            else nums[i] = nums[i - 1] + nums[i];
        }
        for (int i = 0; i < m; i++) {
            int maxlen=0,low = 0, high = n - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] <= queries[i]) {
                    maxlen=mid + 1;
                    low = mid + 1;
                }
                else high = mid - 1;
            }
         v[i]=maxlen;
        }
        return v;
    }
};
