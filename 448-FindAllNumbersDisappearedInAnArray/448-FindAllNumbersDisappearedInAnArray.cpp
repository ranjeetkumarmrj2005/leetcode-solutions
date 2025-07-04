// Last updated: 7/4/2025, 1:29:54 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
        v[nums[i]-1]=nums[i];
        }
        vector<int>u;
        for(int i=0;i<n;i++){
            if(v[i]==0) u.push_back(i+1); 
        }
        return u;
    }
};