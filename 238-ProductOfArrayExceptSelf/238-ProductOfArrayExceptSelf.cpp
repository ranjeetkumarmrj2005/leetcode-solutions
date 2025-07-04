// Last updated: 7/4/2025, 1:30:12 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //      1   2   3  4
    //      1   1   2  6
    //      24  12  4  1

    //     -1  1  0 -3 3
    //      1 -1 -1  0 0     
    // }    0  0 -9  3 1
            int n=nums.size();
            vector<int>prefixorder(n);
            vector<int>sufixorder(n);
            for(int i=0;i<n;i++){
                if(i==0) prefixorder[i]=1;
                else if(i==1) prefixorder[i]=nums[0];
                else prefixorder[i]=prefixorder[i-1]*nums[i-1];
            }
             for(int i=n-1;i>=0;i--){
                if(i==n-1) sufixorder[i]=1;
                else if(i==n-2) sufixorder[i]=nums[n-1];
                else sufixorder[i]=sufixorder[i+1]*nums[i+1];
             }
             for(int i=0;i<n;i++){
                nums[i]=prefixorder[i]*sufixorder[i];
             }
             return nums;
    }
};