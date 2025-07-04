// Last updated: 7/4/2025, 1:30:47 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=-1;
        int end=-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                if(mid == 0 ||nums[mid-1]!=target){
                     start=mid;
                    break;
                }
                else high=mid-1;
                
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
            }
            low=0;
            high=n-1;
            while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) {
                if(mid == n-1 ||nums[mid+1]!=target){
                     end =mid;
                    break;
                }
                else low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
            }
            return { start,end};
    }
};