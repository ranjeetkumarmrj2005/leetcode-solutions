// Last updated: 7/4/2025, 1:30:34 PM
class Solution {
public:
void swap(int* x,int* y){
int temp=*x;
*x=*y;
*y=temp;
}
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==2) {
            swap(&nums[mid],&nums[high]);
            high--;
            }
            else if( nums[mid]==0) {
                swap(&nums[mid],&nums[low]);
                mid++;
                low++;
            }
            else  mid++;
        }
        }
};      