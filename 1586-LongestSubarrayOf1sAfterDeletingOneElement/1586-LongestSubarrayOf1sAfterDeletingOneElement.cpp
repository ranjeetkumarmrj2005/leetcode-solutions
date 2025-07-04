// Last updated: 7/4/2025, 1:29:12 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size(),i=0,j=0,flips=0;
        int maxlen=INT_MIN,len=INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flips<1) {
                    flips++;
                    j++;
                }
                else{
                    len=j-i-1;
                    maxlen=max(maxlen,len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len=j-i-1;
        maxlen=max(maxlen,len);
        return maxlen;
    }
};