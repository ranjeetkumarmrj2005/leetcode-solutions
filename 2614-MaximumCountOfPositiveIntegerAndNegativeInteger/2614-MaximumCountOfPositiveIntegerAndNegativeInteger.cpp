// Last updated: 7/4/2025, 1:28:53 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int countpositive=0;
        int countnegative=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0) countnegative++;
            if(nums[i]>0) countpositive++; 
        }
        if(countpositive>countnegative) return countpositive;
        else return countnegative;
    }
};