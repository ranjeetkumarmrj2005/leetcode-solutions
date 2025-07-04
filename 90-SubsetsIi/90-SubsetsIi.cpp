// Last updated: 7/4/2025, 1:30:29 PM
class Solution {
public:
    void backtrack(const vector<int>& nums, int start, vector<int>& currentSubset, vector<vector<int>>& result) {
        // Add current subset to result
        result.push_back(currentSubset);
        for (int i = start; i < nums.size(); i++) {
            // Skip duplicates
            if (i > start && nums[i] == nums[i-1])  continue;
            // Include the current element in subset
            currentSubset.push_back(nums[i]);
            // Recurse for next elements
            backtrack(nums, i + 1, currentSubset, result);
            // Backtrack (remove the element to try other possibilities)
            currentSubset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSubset;
        sort(nums.begin(), nums.end());
        // Start recursive backtracking from index 0
        backtrack(nums, 0, currentSubset, result);
        return result;
    }
};