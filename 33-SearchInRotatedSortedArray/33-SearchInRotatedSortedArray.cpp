// Last updated: 7/4/2025, 1:30:49 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivotidx;
        int low = 0, high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) low = mid + 1;
        else high = mid;
    }
      pivotidx=low;
if(target>=nums[pivotidx]&&target<=nums[n-1]){
     int low=pivotidx;
     int high=n-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
     }
}
else{
     int low=0;
     int high=pivotidx-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
     }
}
return -1;
    }
};