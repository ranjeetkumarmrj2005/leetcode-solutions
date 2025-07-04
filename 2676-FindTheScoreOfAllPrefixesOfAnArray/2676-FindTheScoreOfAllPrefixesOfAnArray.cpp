// Last updated: 7/4/2025, 1:28:56 PM

class Solution {
public:
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
    vector<long long> findPrefixScore(vector<int>& nums) {
        // 2  3   7   5   10 nums[i]                         nums
        // 2  3   7   7   10 max(nums[i],nums[i-1]);         w
        // 4  6   14  12  20 nums[i]+max(nums[i],nums[i-1]); v
        // 4  10  24  36  56 prefixsum of line 3             u
        int n=nums.size();
        vector<long long>v(n);
        vector<long long>u(n);
        vector<long long>w(n);

        for(int i=0;i<n;i++){
            if(i==0) w[i]=nums[i];
            else w[i]=max(w[i-1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(i==0) v[i]=2*nums[i];
            else v[i]=nums[i]+w[i];
        }
        for(int i=0;i<n;i++){
            if(i==0) u[i]=v[i];
            else u[i]=u[i-1]+v[i];
        }
        return u;
    }
};