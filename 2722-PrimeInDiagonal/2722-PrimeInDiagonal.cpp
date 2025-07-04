// Last updated: 7/4/2025, 1:28:57 PM
class Solution {
public:
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int mx=0;
        int i=0;
        while(i<n){
        if(isPrime(nums[i][i])==true) mx=max(mx,nums[i][i]);
        if(isPrime(nums[i][n-i-1])==true) mx=max(mx,nums[i][n-i-1]);
        i++;
        }
        return mx;
    }
};