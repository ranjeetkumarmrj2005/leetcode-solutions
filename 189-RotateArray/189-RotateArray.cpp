// Last updated: 7/4/2025, 1:30:22 PM
void reverse( vector<int>&nums,int start,int end){
     for(int i=start,j=end;i<j;i++,j--){
            int temp=nums[i];
         nums[i]=nums[j];
        nums[j]=temp;
        }
}
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse( nums,0,n-1);
        reverse( nums,0,k-1);
        reverse( nums,k,n-1 );
    }
};  