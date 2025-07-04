// Last updated: 7/4/2025, 1:29:38 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=1;
        int high=n-1;
        // [3,5,3,2,0]
        // 3 4 5 6 6 7 8 2 1    
        while(low<=high){
            int mid=low + (high-low)/2;
            if( arr[mid-1] <= arr[mid] && arr[mid+1] < arr[mid] ) return mid;
            if(arr[mid-1]<arr[mid] &&arr[mid]<arr[mid+1]) low =mid+1;
            if(arr[mid-1]>arr[mid] &&arr[mid]>arr[mid+1]) high=mid-1;
        }
         return high;
    }
};